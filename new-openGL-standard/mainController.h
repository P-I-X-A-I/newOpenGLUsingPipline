#pragma once

#include "gl_simple.h"
#include "WindowGUI_Manager_Class.h"

class mainController
{
public:

	gl_simple* glSimple_obj;
	WindowGUI_Manager_Class* win_obj;

	HWND mainWnd;
	int win_width = 512;
	int win_height = 512;

	// openGL
	GLuint Tex_name[3];// color0, color1, teximage
	GLuint RB_name[2]; // depth, (color)not used
	GLuint FBO_name;
	GLuint VAO_name;
	GLuint BUF_name[3];

	//GLuint VAO_simple;
	//GLuint BUF_simple[3];
	GLuint VAO_board;
	GLuint BUF_board[2];


	// legacy shader
	GLuint VS_OBJ;
	GLuint FS_OBJ;
	GLuint PRG_OBJ;
	GLint UNF_tempUnf;
	GLint UNF_noiseTex;

	// prg pipeline
	GLuint VS_PRG;
	GLuint FS_PRG;
	GLuint PIPE_OBJ;
	GLint pUNF_tempUnf;
	GLint pUNF_noiseTex;

	GLuint VS_BOARD_PRG;
	GLuint FS_BOARD_PRG;
	GLuint PIPE_BOARD_OBJ;
	GLint pUNF_oneTex;
	GLint pUNF_twoTex;

	mainController();
	~mainController();

	void openGL_new_basic_setup();
	void setup_sampler();
	void setup_texture();
	void setup_renderbuffer();
	void setup_framebuffer();
	void setup_vao_vbo();
	void setup_shader();

	void test_draw();

private:
	void util_setup_vertex_buffer(GLuint vao_name, GLuint buf_name, int numVert, int numElem, int attribID);
};

