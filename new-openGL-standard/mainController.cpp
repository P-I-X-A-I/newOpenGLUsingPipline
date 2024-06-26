#include "framework.h"

#include "mainController.h"


mainController::mainController()
{
	printf("mainController init\n");

	srand(time(NULL));

	// init obj
	win_obj = new WindowGUI_Manager_Class();
	mainWnd = win_obj->createNewWindow(L"mainWnd", L"main window", 0);
	win_obj->set_frame(mainWnd, 0, 0, win_width, win_height);

	// init opengl
	glSimple_obj = new gl_simple();
	glSimple_obj->init_simple_OpenGL(win_obj->dummyWnd);
	glSimple_obj->create_context_from(mainWnd);
	
	//******************************
	this->openGL_new_basic_setup();
	//******************************


	//
	for (int i = 0; i < 100; i++)
	{
		this->test_draw();
		Sleep(100);
	}

}

mainController::~mainController()
{

}


void mainController::openGL_new_basic_setup()
{
	this->setup_sampler();
	this->setup_texture();
	this->setup_renderbuffer();
	this->setup_framebuffer();
	this->setup_vao_vbo();
	this->setup_shader();
}


void mainController::setup_sampler()
{
	GLuint SamplerName;

	// create sampler
	glCreateSamplers(1, &SamplerName);
	glSamplerParameteri(SamplerName, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
	glSamplerParameteri(SamplerName, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
	glSamplerParameteri(SamplerName, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glSamplerParameteri(SamplerName, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

	// set to texture
	GLint numTexture;
	glGetIntegerv(GL_MAX_TEXTURE_IMAGE_UNITS, &numTexture);

	for (int i = 0; i < numTexture; i++)
	{
		glBindSampler(i, SamplerName);
	}
}


void mainController::setup_texture()
{
	// create texture object
	glCreateTextures(GL_TEXTURE_2D, 3, Tex_name);


	// bind texture-object to texture-unit
	glBindTextureUnit(0, Tex_name[0]); // color 0;
	glBindTextureUnit(1, Tex_name[1]); // color 1;
	glBindTextureUnit(2, Tex_name[2]); // image texture

	// identical to
	// glActiveTexture(GL_TEXTURE0);
	// glBindTexture(GL_TEXTURE2D, texName);
	
	// setup texture image ***********************************
	
	// alloc texture memory
	glTextureStorage2D(Tex_name[0],
		1, // "num" of mipmap
		GL_RGBA8, // data type
		win_width,
		win_height);

	// setup image
	glTextureSubImage2D(Tex_name[0],
		0, // mipmap level
		0, 0, // offset
		win_width, win_height,
		GL_RGBA,	// pixel format(elements)
		GL_UNSIGNED_BYTE,
		nullptr);
	//////////////////////////////////
	glTextureStorage2D(Tex_name[1],
		1, // "num" of mipmap
		GL_RGBA8, // data type
		win_width,
		win_height);

	glTextureSubImage2D(Tex_name[1],
		0, //mipmap level
		0, 0, // offset
		win_width, win_height,
		GL_RGBA,	// pixel format (elements)
		GL_UNSIGNED_BYTE,
		nullptr);

	// noise texture ********************************
	unsigned char tempTex[64][64][4];
	for (int x = 0; x < 64; x++)
	{
		for (int y = 0; y < 64; y++)
		{
			tempTex[y][x][0] = rand() % 255;
			tempTex[y][x][1] = rand() % 255;
			tempTex[y][x][2] = rand() % 255;
			tempTex[y][x][3] = 255;
		}
	}

	glTextureStorage2D(
		Tex_name[2],
		1, // "num" of mipmap
		GL_RGBA8, // data type
		64, 64);

	glTextureSubImage2D(Tex_name[2],
		0,
		0, 0,
		64, 64,
		GL_RGBA, // pixel format ( element )
		GL_UNSIGNED_BYTE,
		tempTex);

}



void mainController::setup_renderbuffer()
{
	// create renderbuffer object
	glCreateRenderbuffers(2, RB_name);

	// alloc memory
	// for depth buffer
	glNamedRenderbufferStorage(RB_name[0], GL_DEPTH_COMPONENT16, win_width, win_height);
	
	// for color buffer ( not used )
	glNamedRenderbufferStorage(RB_name[1], GL_RGBA8, win_width, win_height);
}


void mainController::setup_framebuffer()
{
	// create framebuffer object
	glCreateFramebuffers(1, &FBO_name);

	// attach texture object, or renderbuffer object
	glNamedFramebufferTexture(
			FBO_name,
			GL_COLOR_ATTACHMENT0,
			Tex_name[0],
			0 // mipmap
	);

	glNamedFramebufferTexture(
		FBO_name,
		GL_COLOR_ATTACHMENT1,
		Tex_name[1],
		0);

	glNamedFramebufferRenderbuffer(
		FBO_name,
		GL_DEPTH_ATTACHMENT,
		GL_RENDERBUFFER,// must be this
		RB_name[0]
	);


	// set draw buffers
	GLenum bufs[] = {GL_COLOR_ATTACHMENT0, GL_COLOR_ATTACHMENT1};
	glNamedFramebufferDrawBuffers(FBO_name, 2, bufs);

	// check framebuffer status
	glBindFramebuffer(GL_FRAMEBUFFER, FBO_name);
	
	int status = glCheckNamedFramebufferStatus(FBO_name, GL_FRAMEBUFFER);
	printf("FBO status %x\n", status);
	
}


void mainController::setup_vao_vbo()
{
	// create vertex array object
	glCreateVertexArrays(1, &VAO_name);

	// enable vertex atrrib
	glEnableVertexArrayAttrib(VAO_name, 0);// vert
	glEnableVertexArrayAttrib(VAO_name, 1);// norm
	glEnableVertexArrayAttrib(VAO_name, 2);// texcoord

	//-----------------------------------

	// create buffer objects
	glCreateBuffers(3, BUF_name); //v, n, t

	// v, 3pt, 4elements (xyzw)
	this->util_setup_vertex_buffer(VAO_name, BUF_name[0], 3, 4, 0);
	// n, 3pt, 4elem (xyz, pad)
	this->util_setup_vertex_buffer(VAO_name, BUF_name[1], 3, 4, 1);
	// t, 3pt, 2elem (st)
	this->util_setup_vertex_buffer(VAO_name, BUF_name[2], 3, 2, 2);


	//////////////////////////////////////
	glCreateVertexArrays(1, &VAO_board);

	glEnableVertexArrayAttrib(VAO_board, 0); // vert
	glEnableVertexArrayAttrib(VAO_board, 1); // texc

	glCreateBuffers(2, BUF_board);

	this->util_setup_vertex_buffer(VAO_board, BUF_board[0], 4, 4, 0);
	this->util_setup_vertex_buffer(VAO_board, BUF_board[1], 4, 2, 1);
}


void mainController::util_setup_vertex_buffer(GLuint vao_name, GLuint buf_name, int numVert, int numElem, int attribID)
{
	// alloc buffer
	glNamedBufferStorage(
		buf_name,
		sizeof(float)*numVert*numElem,
		NULL,
		GL_DYNAMIC_STORAGE_BIT
	);

	// set buffer as array buffer
	glBindBuffer(GL_ARRAY_BUFFER, buf_name);

	// bind to VAO binding location
	glVertexArrayVertexBuffer(
		vao_name,
		attribID, // VAO binding location ( = attrib id )
		buf_name,
		0, // offset
		sizeof(float) * numElem
	);

	// bind VAO binding location -> attrib location ( same value )
	glVertexArrayAttribBinding(
		vao_name,
		attribID, // attrib location
		attribID  // VAO binding location
	);
	
	// set attrib format
	glVertexArrayAttribFormat(
		vao_name,	// vao name
		attribID,	// attrib location
		numElem,	// num element
		GL_FLOAT,	// data type
		GL_FALSE,	// normalized
		0			// relative offset
	);
}





void mainController::setup_shader()
{
	// legacy setup
	glSimple_obj->loadShaderSource_And_Compile("SHADER/NORMAL_VS.txt", GL_VERTEX_SHADER, &VS_OBJ);
	glSimple_obj->loadShaderSource_And_Compile("SHADER/NORMAL_FS.txt", GL_FRAGMENT_SHADER, &FS_OBJ);
	glSimple_obj->createProgram_And_AttachShader(&PRG_OBJ, &VS_OBJ, NULL, &FS_OBJ);
	glSimple_obj->getUniformLocation(&PRG_OBJ, &UNF_tempUnf, "tempUnf");
	glSimple_obj->getUniformLocation(&PRG_OBJ, &UNF_noiseTex, "noiseTex");

	// program pipeline
	glSimple_obj->createSeparateShaderProgram("SHADER/NORMAL_VS.txt", GL_VERTEX_SHADER, &VS_PRG);
	glSimple_obj->createSeparateShaderProgram("SHADER/NORMAL_FS.txt", GL_FRAGMENT_SHADER, &FS_PRG);
	glSimple_obj->getUniformLocation(&FS_PRG, &pUNF_tempUnf, "tempUnf");
	glSimple_obj->getUniformLocation(&FS_PRG, &pUNF_noiseTex, "noiseTex");

	glCreateProgramPipelines(1, &PIPE_OBJ);
	glUseProgramStages(PIPE_OBJ, GL_VERTEX_SHADER_BIT, VS_PRG);
	glUseProgramStages(PIPE_OBJ, GL_FRAGMENT_SHADER_BIT, FS_PRG);

	GLint logLen;
	glGetProgramPipelineiv(PIPE_OBJ, GL_INFO_LOG_LENGTH, &logLen);
	printf("pipe log %d\n", logLen);

	// *****************************
	// board pipeline
	glSimple_obj->createSeparateShaderProgram("SHADER/BOARD_VS.txt", GL_VERTEX_SHADER, &VS_BOARD_PRG);
	glSimple_obj->createSeparateShaderProgram("SHADER/BOARD_FS.txt", GL_FRAGMENT_SHADER, &FS_BOARD_PRG);
	glSimple_obj->getUniformLocation(&FS_BOARD_PRG, &pUNF_oneTex, "oneTex");
	glSimple_obj->getUniformLocation(&FS_BOARD_PRG, &pUNF_twoTex, "twoTex");

	glCreateProgramPipelines(1, &PIPE_BOARD_OBJ);
	glUseProgramStages(PIPE_BOARD_OBJ, GL_VERTEX_SHADER_BIT, VS_BOARD_PRG);
	glUseProgramStages(PIPE_BOARD_OBJ, GL_FRAGMENT_SHADER_BIT, FS_BOARD_PRG);
	
	glGetProgramPipelineiv(PIPE_BOARD_OBJ, GL_INFO_LOG_LENGTH, &logLen);
	printf("pipe log %d\n", logLen);
}





void mainController::test_draw()
{
	glBindFramebuffer(GL_FRAMEBUFFER, FBO_name);
	// clear
	glClearColor(0.2, 0.2, 0.2, 1.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	
	// viewport
	glViewport(0, 0, win_width, win_height);

	// matrix
	
	// program (uniform)
	glBindProgramPipeline(PIPE_OBJ);
	glProgramUniform2f(FS_PRG, pUNF_tempUnf, 0.5, 0.5);
	glProgramUniform1i(FS_PRG, pUNF_noiseTex, 2);

	// Buffer update
		// BUFFER update
	GLfloat vert[3][4];
	GLfloat norm[3][4];
	GLfloat texc[3][2];
	for (int i = 0; i < 3; i++)
	{
		vert[i][0] = (rand() % 200 - 100) * 0.01;
		vert[i][1] = (rand() % 200 - 100) * 0.01;
		vert[i][2] = 0.0;
		vert[i][3] = 1.0;

		norm[i][0] = 0.2;
		norm[i][1] = 0.2;
		norm[i][2] = 0.2;
		norm[i][3] = 0.0;

		texc[i][0] = (rand() % 100) * 0.01;
		texc[i][1] = (rand() % 100) * 0.01;
	}

	glNamedBufferSubData(BUF_name[0], 0, sizeof(float) * 3 * 4, vert);
	glNamedBufferSubData(BUF_name[1], 0, sizeof(float) * 3 * 4, norm);
	glNamedBufferSubData(BUF_name[2], 0, sizeof(float) * 3 * 2, texc);

	// VAO bind
	glBindVertexArray(VAO_name);

	// draw
	glDrawArrays(GL_TRIANGLES, 0, 3);

	// flush
	glFlush();


	//****************************************************************

	// framebuffer
	glBindFramebuffer(GL_FRAMEBUFFER, 0);

	// clear
	glClearColor(0.0, 1.0, 0.0, 1.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	// viewport
	glViewport(0, 0, win_width, win_height);

	// setup matrix

	// program, UNF
	glBindProgramPipeline(PIPE_BOARD_OBJ);
	glProgramUniform1i(FS_BOARD_PRG, pUNF_oneTex, 0);
	glProgramUniform1i(FS_BOARD_PRG, pUNF_twoTex, 1);

	// BUFFER update
	GLfloat bvert[4][4];
	GLfloat btexc[4][2];
	bvert[0][0] = -0.9;	bvert[0][1] = 0.9; bvert[0][2] = 0.0; bvert[0][3] = 1.0;
	bvert[1][0] = -0.9;	bvert[1][1] = -0.9; bvert[1][2] = 0.0; bvert[1][3] = 1.0;
	bvert[2][0] = 0.9;	bvert[2][1] = 0.9; bvert[2][2] = 0.0; bvert[2][3] = 1.0;
	bvert[3][0] = 0.9;	bvert[3][1] = -0.9; bvert[3][2] = 0.0; bvert[3][3] = 1.0;

	btexc[0][0] = 0.0;	btexc[0][1] = 1.0;
	btexc[1][0] = 0.0;	btexc[1][1] = 0.0;
	btexc[2][0] = 1.0;	btexc[2][1] = 1.0;
	btexc[3][0] = 1.0;	btexc[3][1] = 0.0;

	glNamedBufferSubData(BUF_board[0], 0, sizeof(float) * 4 * 4, bvert);
	glNamedBufferSubData(BUF_board[1], 0, sizeof(float) * 4 * 2, btexc);


	// VAO bind
	glBindVertexArray(VAO_board);

	// draw
	glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);


	glFlush();
	SwapBuffers(glSimple_obj->OpenGL_HDC);
}