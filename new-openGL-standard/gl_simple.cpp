#include "gl_simple.h"

// initialize
// GL1.2 ************************
// all 4 functions are skipped.

// GL1.3 ************************
PFNGLACTIVETEXTUREPROC glActiveTexture = nullptr;
PFNGLSAMPLECOVERAGEPROC glSampleCoverage = nullptr;

// GL_VERSION 1.4 ************************
PFNGLBLENDFUNCSEPARATEPROC glBlendFuncSeparate = nullptr;
PFNGLWINDOWPOS2FPROC glWindowPos2f = nullptr;
PFNGLWINDOWPOS2IPROC glWindowPos2i = nullptr;
PFNGLWINDOWPOS3FPROC glWindowPos3f = nullptr;
PFNGLWINDOWPOS3IPROC glWindowPos3i = nullptr;
PFNGLBLENDCOLORPROC glBlendColor = nullptr;
PFNGLBLENDEQUATIONPROC glBlendEquation = nullptr;

// GL_VERSION 1.5 *******************
PFNGLGENQUERIESPROC glGenQueries = nullptr;
PFNGLDELETEQUERIESPROC glDeleteQueries = nullptr;
PFNGLISQUERYPROC glIsQuery = nullptr;
PFNGLBEGINQUERYPROC glBeginQuery = nullptr;
PFNGLENDQUERYPROC glEndQuery = nullptr;
PFNGLGETQUERYIVPROC glGetQueryiv = nullptr;
PFNGLGETQUERYOBJECTIVPROC glGetQueryObjectiv = nullptr;
PFNGLGETQUERYOBJECTUIVPROC glGetQueryObjectuiv = nullptr;
PFNGLBINDBUFFERPROC glBindBuffer = nullptr;
PFNGLDELETEBUFFERSPROC glDeleteBuffers = nullptr;
PFNGLGENBUFFERSPROC glGenBuffers = nullptr;
PFNGLISBUFFERPROC glIsBuffer = nullptr;
PFNGLBUFFERDATAPROC glBufferData = nullptr;
PFNGLBUFFERSUBDATAPROC glBufferSubData = nullptr;
PFNGLGETBUFFERSUBDATAPROC glGetBufferSubData = nullptr;
PFNGLMAPBUFFERPROC glMapBuffer = nullptr;
PFNGLUNMAPBUFFERPROC glUnmapBuffer = nullptr;
PFNGLGETBUFFERPARAMETERIVPROC glGetBufferParameteriv = nullptr;
PFNGLGETBUFFERPOINTERVPROC glGetBufferPointerv = nullptr;

// GL_VERSION 2.0 *******************
PFNGLBLENDEQUATIONSEPARATEPROC glBlendEquationSeparate = nullptr;
PFNGLDRAWBUFFERSPROC glDrawBuffers = nullptr;
PFNGLATTACHSHADERPROC glAttachShader = nullptr;
PFNGLBINDATTRIBLOCATIONPROC glBindAttribLocation = nullptr;
PFNGLCOMPILESHADERPROC glCompileShader = nullptr;
PFNGLCREATEPROGRAMPROC glCreateProgram = nullptr;
PFNGLCREATESHADERPROC glCreateShader = nullptr;
PFNGLDELETEPROGRAMPROC glDeleteProgram = nullptr;
PFNGLDELETESHADERPROC glDeleteShader = nullptr;
PFNGLDETACHSHADERPROC glDetachShader = nullptr;
PFNGLDISABLEVERTEXATTRIBARRAYPROC glDisableVertexAttribArray = nullptr;
PFNGLENABLEVERTEXATTRIBARRAYPROC glEnableVertexAttribArray = nullptr;
PFNGLGETPROGRAMIVPROC glGetProgramiv = nullptr;
PFNGLGETPROGRAMINFOLOGPROC glGetProgramInfoLog = nullptr;
PFNGLGETSHADERIVPROC glGetShaderiv = nullptr;
PFNGLGETSHADERINFOLOGPROC glGetShaderInfoLog = nullptr;
PFNGLGETSHADERSOURCEPROC glGetShaderSource = nullptr;
PFNGLGETUNIFORMLOCATIONPROC glGetUniformLocation = nullptr;

PFNGLISPROGRAMPROC glIsProgram = nullptr;
PFNGLISSHADERPROC glIsShader = nullptr;
PFNGLLINKPROGRAMPROC glLinkProgram = nullptr;
PFNGLSHADERSOURCEPROC glShaderSource = nullptr;
PFNGLUSEPROGRAMPROC glUseProgram = nullptr;
PFNGLUNIFORM1FPROC glUniform1f = nullptr;
PFNGLUNIFORM2FPROC glUniform2f = nullptr;
PFNGLUNIFORM3FPROC glUniform3f = nullptr;
PFNGLUNIFORM4FPROC glUniform4f = nullptr;
PFNGLUNIFORM1IPROC glUniform1i = nullptr;
PFNGLUNIFORM2IPROC glUniform2i = nullptr;
PFNGLUNIFORM3IPROC glUniform3i = nullptr;
PFNGLUNIFORM4IPROC glUniform4i = nullptr;
PFNGLUNIFORM1FVPROC glUniform1fv = nullptr;
PFNGLUNIFORM2FVPROC glUniform2fv = nullptr;
PFNGLUNIFORM3FVPROC glUniform3fv = nullptr;
PFNGLUNIFORM4FVPROC glUniform4fv = nullptr;
PFNGLUNIFORM1IVPROC glUniform1iv = nullptr;
PFNGLUNIFORM2IVPROC glUniform2iv = nullptr;
PFNGLUNIFORM3IVPROC glUniform3iv = nullptr;
PFNGLUNIFORM4IVPROC glUniform4iv = nullptr;
PFNGLUNIFORMMATRIX2FVPROC glUniformMatrix2fv = nullptr;
PFNGLUNIFORMMATRIX3FVPROC glUniformMatrix3fv = nullptr;
PFNGLUNIFORMMATRIX4FVPROC glUniformMatrix4fv = nullptr;
PFNGLVALIDATEPROGRAMPROC glValidateProgram = nullptr;
// skip some functions....
PFNGLVERTEXATTRIBPOINTERPROC glVertexAttribPointer = nullptr;


// GL_VERSION 2.1 *******************
PFNGLUNIFORMMATRIX2X3FVPROC glUniformMatrix2x3fv = nullptr;
PFNGLUNIFORMMATRIX3X2FVPROC glUniformMatrix3x2fv = nullptr;
PFNGLUNIFORMMATRIX2X4FVPROC glUniformMatrix2x4fv = nullptr;
PFNGLUNIFORMMATRIX4X2FVPROC glUniformMatrix4x2fv = nullptr;
PFNGLUNIFORMMATRIX3X4FVPROC glUniformMatrix3x4fv = nullptr;
PFNGLUNIFORMMATRIX4X3FVPROC glUniformMatrix4x3fv = nullptr;

// GL_VERSION 3.0 *******************
// skip some functions......
PFNGLBEGINTRANSFORMFEEDBACKPROC glBeginTransformFeedback = nullptr;
PFNGLENDTRANSFORMFEEDBACKPROC glEndTransformFeedback = nullptr;
PFNGLBINDBUFFERRANGEPROC glBindBufferRange = nullptr;
PFNGLBINDBUFFERBASEPROC glBindBufferBase = nullptr;
PFNGLTRANSFORMFEEDBACKVARYINGSPROC glTransformFeedbackVaryings = nullptr;
PFNGLGETTRANSFORMFEEDBACKVARYINGPROC glGetTransformFeedbackVarying = nullptr;
PFNGLBEGINCONDITIONALRENDERPROC glBeginConditionalRender = nullptr;
PFNGLENDCONDITIONALRENDERPROC glEndConditionalRender = nullptr;
PFNGLVERTEXATTRIBIPOINTERPROC glVertexAttribIPointer = nullptr;
PFNGLGETVERTEXATTRIBIIVPROC glGetVertexAttribIiv = nullptr;
PFNGLGETVERTEXATTRIBIUIVPROC glGetVertexAttribIuiv = nullptr;
//skip some functions.......
PFNGLGETUNIFORMUIVPROC glGetUniformuiv = nullptr;
//skip some functions...
PFNGLUNIFORM1UIPROC	glUniform1ui = nullptr;
PFNGLUNIFORM2UIPROC glUniform2ui = nullptr;
PFNGLUNIFORM3UIPROC glUniform3ui = nullptr;
PFNGLUNIFORM4UIPROC glUniform4ui = nullptr;
PFNGLUNIFORM1UIVPROC glUniform1uiv = nullptr;
PFNGLUNIFORM2UIVPROC glUniform2uiv = nullptr;
PFNGLUNIFORM3UIVPROC glUniform3uiv = nullptr;
PFNGLUNIFORM4UIVPROC glUniform4uiv = nullptr;
// skip...
PFNGLCLEARBUFFERIVPROC glClearBufferiv = nullptr;
PFNGLCLEARBUFFERUIVPROC glClearBufferuiv = nullptr;
PFNGLCLEARBUFFERFVPROC glClearBufferfv = nullptr;
PFNGLCLEARBUFFERFIPROC glClearBufferfi = nullptr;
PFNGLGETSTRINGIPROC glGetStringi = nullptr;
PFNGLISRENDERBUFFERPROC glIsRenderbuffer = nullptr;
PFNGLBINDRENDERBUFFERPROC glBindRenderbuffer = nullptr;
PFNGLDELETERENDERBUFFERSPROC glDeleteRenderbuffers = nullptr;
PFNGLGENRENDERBUFFERSPROC glGenRenderbuffers = nullptr;
PFNGLRENDERBUFFERSTORAGEPROC glRenderbufferStorage = nullptr;
PFNGLGETRENDERBUFFERPARAMETERIVPROC glGetRenderbufferParameteriv = nullptr;
PFNGLISFRAMEBUFFERPROC glIsFramebuffer = nullptr;
PFNGLBINDFRAMEBUFFERPROC glBindFramebuffer = nullptr;
PFNGLDELETEFRAMEBUFFERSPROC glDeleteFramebuffers = nullptr;
PFNGLGENFRAMEBUFFERSPROC glGenFramebuffers = nullptr;
PFNGLCHECKFRAMEBUFFERSTATUSPROC glCheckFramebufferStatus = nullptr;
PFNGLFRAMEBUFFERTEXTURE1DPROC glFramebufferTexture1D = nullptr;
PFNGLFRAMEBUFFERTEXTURE2DPROC glFramebufferTexture2D = nullptr;
PFNGLFRAMEBUFFERTEXTURE3DPROC glFramebufferTexture3D = nullptr;
PFNGLFRAMEBUFFERRENDERBUFFERPROC glFramebufferRenderbuffer = nullptr;
PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC glGetFramebufferAttachmentParameteriv = nullptr;
// skip....
PFNGLMAPBUFFERRANGEPROC glMapBufferRange = nullptr;
PFNGLFLUSHMAPPEDBUFFERRANGEPROC glFlushMappedBufferRange = nullptr;
PFNGLBINDVERTEXARRAYPROC glBindVertexArray = nullptr;
PFNGLDELETEVERTEXARRAYSPROC glDeleteVertexArrays = nullptr;
PFNGLGENVERTEXARRAYSPROC glGenVertexArrays = nullptr;
PFNGLISVERTEXARRAYPROC glIsVertexArray = nullptr;

// GL_VERSION 3.1 *******************
PFNGLDRAWARRAYSINSTANCEDPROC glDrawArraysInstanced = nullptr;
PFNGLDRAWELEMENTSINSTANCEDPROC glDrawElementsInstanced = nullptr;
PFNGLTEXBUFFERPROC glTexBuffer = nullptr;
PFNGLPRIMITIVERESTARTINDEXPROC glPrimitiveRestartIndex = nullptr;
PFNGLCOPYBUFFERSUBDATAPROC glCopyBufferSubData = nullptr;
PFNGLGETUNIFORMINDICESPROC glGetUniformIndices = nullptr;
PFNGLGETACTIVEUNIFORMSIVPROC glGetActiveUniformsiv = nullptr;
PFNGLGETACTIVEUNIFORMNAMEPROC glGetActiveUniformName = nullptr;
PFNGLGETUNIFORMBLOCKINDEXPROC glGetUniformBlockIndex = nullptr;
PFNGLGETACTIVEUNIFORMBLOCKIVPROC glGetActiveUniformBlockiv = nullptr;
PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC glGetActiveUniformBlockName = nullptr;
PFNGLUNIFORMBLOCKBINDINGPROC glUniformBlockBinding = nullptr;

// GL_VERSION 3.2 *******************
PFNGLFENCESYNCPROC glFenceSync = nullptr;
PFNGLISSYNCPROC glIsSync = nullptr;
PFNGLDELETESYNCPROC glDeleteSync = nullptr;
PFNGLCLIENTWAITSYNCPROC glClientWaitSync = nullptr;
PFNGLWAITSYNCPROC glWaitSync = nullptr;
PFNGLGETINTEGER64VPROC glGetInteger64v = nullptr;
PFNGLGETSYNCIVPROC glGetSynciv = nullptr;
PFNGLGETINTEGER64I_VPROC glGetInteger64i_v = nullptr;
PFNGLGETBUFFERPARAMETERI64VPROC glGetBufferParameteri64v = nullptr;
PFNGLFRAMEBUFFERTEXTUREPROC glFramebufferTexture = nullptr;

// GL_VERSION 3.3 *******************
PFNGLBINDFRAGDATALOCATIONINDEXEDPROC glBindFragDataLocationIndexed = nullptr;
PFNGLGETFRAGDATAINDEXPROC glGetFragDataIndex = nullptr;
PFNGLGENSAMPLERSPROC glGenSamplers = nullptr;
PFNGLDELETESAMPLERSPROC glDeleteSamplers = nullptr;
PFNGLISSAMPLERPROC glIsSampler = nullptr;
PFNGLBINDSAMPLERPROC glBindSampler = nullptr;
PFNGLSAMPLERPARAMETERIPROC glSamplerParameteri = nullptr;
PFNGLSAMPLERPARAMETERIVPROC glSamplerParameteriv = nullptr;
PFNGLSAMPLERPARAMETERFPROC glSamplerParameterf = nullptr;
PFNGLSAMPLERPARAMETERFVPROC glSamplerParameterfv = nullptr;
PFNGLGETSAMPLERPARAMETERIVPROC glGetSamplerParameteriv = nullptr;
PFNGLGETSAMPLERPARAMETERFVPROC glGetSamplerParameterfv = nullptr;
PFNGLQUERYCOUNTERPROC glQueryCounter = nullptr;
// skip some functions....

	// GL_VERSION 4.0 *******************
	// skip some function.....
PFNGLUNIFORM1DPROC glUniform1d = nullptr;
PFNGLUNIFORM2DPROC glUniform2d = nullptr;
PFNGLUNIFORM3DPROC glUniform3d = nullptr;
PFNGLUNIFORM4DPROC glUniform4d = nullptr;
PFNGLUNIFORM1DVPROC glUniform1dv = nullptr;
PFNGLUNIFORM2DVPROC glUniform2dv = nullptr;
PFNGLUNIFORM3DVPROC glUniform3dv = nullptr;
PFNGLUNIFORM4DVPROC glUniform4dv = nullptr;
PFNGLUNIFORMMATRIX2DVPROC glUniformMatrix2dv = nullptr;
PFNGLUNIFORMMATRIX3DVPROC glUniformMatrix3dv = nullptr;
PFNGLUNIFORMMATRIX4DVPROC glUniformMatrix4dv = nullptr;
// skip some functions...
PFNGLBINDTRANSFORMFEEDBACKPROC glBindTransformFeedback = nullptr;
PFNGLDELETETRANSFORMFEEDBACKSPROC glDeleteTransformFeedbacks = nullptr;
PFNGLGENTRANSFORMFEEDBACKSPROC glGenTransformFeedbacks = nullptr;
PFNGLISTRANSFORMFEEDBACKPROC glIsTransformFeedback = nullptr;
PFNGLPAUSETRANSFORMFEEDBACKPROC glPauseTransformFeedback = nullptr;
PFNGLRESUMETRANSFORMFEEDBACKPROC glResumeTransformFeedback = nullptr;
PFNGLDRAWTRANSFORMFEEDBACKPROC glDrawTransformFeedback = nullptr;
PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC glDrawTransformFeedbackStream = nullptr;
PFNGLBEGINQUERYINDEXEDPROC glBeginQueryIndexed = nullptr;
PFNGLENDQUERYINDEXEDPROC glEndQueryIndexed = nullptr;
PFNGLGETQUERYINDEXEDIVPROC glGetQueryIndexediv = nullptr;


// GL_VERSION 4.1 *******************
// skip...
PFNGLSHADERBINARYPROC glShaderBinary = nullptr;
PFNGLGETSHADERPRECISIONFORMATPROC glGetShaderPrecisionFormat = nullptr;
PFNGLGETPROGRAMBINARYPROC glGetProgramBinary = nullptr;
PFNGLPROGRAMBINARYPROC glProgramBinary = nullptr;
PFNGLPROGRAMPARAMETERIPROC glProgramParameteri = nullptr;
PFNGLUSEPROGRAMSTAGESPROC glUseProgramStages = nullptr;
PFNGLACTIVESHADERPROGRAMPROC glActiveShaderProgram = nullptr;
PFNGLCREATESHADERPROGRAMVPROC glCreateShaderProgramv = nullptr;
PFNGLBINDPROGRAMPIPELINEPROC glBindProgramPipeline = nullptr;
PFNGLDELETEPROGRAMPIPELINESPROC glDeleteProgramPipelines = nullptr;
PFNGLGENPROGRAMPIPELINESPROC glGenProgramPipelines = nullptr;
PFNGLISPROGRAMPIPELINEPROC glIsProgramPipeline = nullptr;
PFNGLGETPROGRAMPIPELINEIVPROC glGetProgramPipelineiv = nullptr;

PFNGLPROGRAMUNIFORM1IPROC glProgramUniform1i = nullptr;
PFNGLPROGRAMUNIFORM1IVPROC glProgramUniform1iv = nullptr;
PFNGLPROGRAMUNIFORM1FPROC glProgramUniform1f = nullptr;
PFNGLPROGRAMUNIFORM1FVPROC glProgramUniform1fv = nullptr;
PFNGLPROGRAMUNIFORM1DPROC glProgramUniform1d = nullptr;
PFNGLPROGRAMUNIFORM1DVPROC glProgramUniform1dv = nullptr;
PFNGLPROGRAMUNIFORM1UIPROC glProgramUniform1ui = nullptr;
PFNGLPROGRAMUNIFORM1UIVPROC glProgramUniform1uiv = nullptr;

PFNGLPROGRAMUNIFORM2IPROC glProgramUniform2i = nullptr;
PFNGLPROGRAMUNIFORM2IVPROC glProgramUniform2iv = nullptr;
PFNGLPROGRAMUNIFORM2FPROC glProgramUniform2f = nullptr;
PFNGLPROGRAMUNIFORM2FVPROC glProgramUniform2fv = nullptr;
PFNGLPROGRAMUNIFORM2DPROC glProgramUniform2d = nullptr;
PFNGLPROGRAMUNIFORM2DVPROC glProgramUniform2dv = nullptr;
PFNGLPROGRAMUNIFORM2UIPROC glProgramUniform2ui = nullptr;
PFNGLPROGRAMUNIFORM2UIVPROC glProgramUniform2uiv = nullptr;

PFNGLPROGRAMUNIFORM3IPROC glProgramUniform3i = nullptr;
PFNGLPROGRAMUNIFORM3IVPROC glProgramUniform3iv = nullptr;
PFNGLPROGRAMUNIFORM3FPROC glProgramUniform3f = nullptr;
PFNGLPROGRAMUNIFORM3FVPROC glProgramUniform3fv = nullptr;
PFNGLPROGRAMUNIFORM3DPROC glProgramUniform3d = nullptr;
PFNGLPROGRAMUNIFORM3DVPROC glProgramUniform3dv = nullptr;
PFNGLPROGRAMUNIFORM3UIPROC glProgramUniform3ui = nullptr;
PFNGLPROGRAMUNIFORM3UIVPROC glProgramUniform3uiv = nullptr;

PFNGLPROGRAMUNIFORM4IPROC glProgramUniform4i = nullptr;
PFNGLPROGRAMUNIFORM4IVPROC glProgramUniform4iv = nullptr;
PFNGLPROGRAMUNIFORM4FPROC glProgramUniform4f = nullptr;
PFNGLPROGRAMUNIFORM4FVPROC glProgramUniform4fv = nullptr;
PFNGLPROGRAMUNIFORM4DPROC glProgramUniform4d = nullptr;
PFNGLPROGRAMUNIFORM4DVPROC glProgramUniform4dv = nullptr;
PFNGLPROGRAMUNIFORM4UIPROC glProgramUniform4ui = nullptr;
PFNGLPROGRAMUNIFORM4UIVPROC glProgramUniform4uiv = nullptr;

PFNGLPROGRAMUNIFORMMATRIX2FVPROC glProgramUniformMatrix2fv = nullptr;
PFNGLPROGRAMUNIFORMMATRIX3FVPROC glProgramUniformMatrix3fv = nullptr;
PFNGLPROGRAMUNIFORMMATRIX4FVPROC glProgramUniformMatrix4fv = nullptr;
PFNGLPROGRAMUNIFORMMATRIX2DVPROC glProgramUniformMatrix2dv = nullptr;
PFNGLPROGRAMUNIFORMMATRIX3DVPROC glProgramUniformMatrix3dv = nullptr;
PFNGLPROGRAMUNIFORMMATRIX4DVPROC glProgramUniformMatrix4dv = nullptr;
PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC glProgramUniformMatrix2x3fv = nullptr;
PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC glProgramUniformMatrix3x2fv = nullptr;
PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC glProgramUniformMatrix2x4fv = nullptr;
PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC glProgramUniformMatrix4x2fv = nullptr;
PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC glProgramUniformMatrix3x4fv = nullptr;
PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC glProgramUniformMatrix4x3fv = nullptr;
PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC glProgramUniformMatrix2x3dv = nullptr;
PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC glProgramUniformMatrix3x2dv = nullptr;
PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC glProgramUniformMatrix2x4dv = nullptr;
PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC glProgramUniformMatrix4x2dv = nullptr;
PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC glProgramUniformMatrix3x4dv = nullptr;
PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC glProgramUniformMatrix4x3dv = nullptr;
PFNGLVALIDATEPROGRAMPIPELINEPROC glValidateProgramPipeline = nullptr;
PFNGLGETPROGRAMPIPELINEINFOLOGPROC glGetProgramPipelineInfoLog = nullptr;
//skip some functions...

	// GL_VERSION 4.2 *******************
PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC glDrawArraysInstancedBaseInstance = nullptr;
PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC glDrawElementsInstancedBaseInstance = nullptr;
PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC glDrawElementsInstancedBaseVertexBaseInstance = nullptr;
PFNGLGETINTERNALFORMATIVPROC glGetInternalformativ = nullptr;
PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC glGetActiveAtomicCounterBufferiv = nullptr;
PFNGLBINDIMAGETEXTUREPROC glBindImageTexture = nullptr;
PFNGLMEMORYBARRIERPROC glMemoryBarrier = nullptr;
PFNGLTEXSTORAGE1DPROC glTexStorage1D = nullptr;
PFNGLTEXSTORAGE2DPROC glTexStorage2D = nullptr;
PFNGLTEXSTORAGE3DPROC glTexStorage3D = nullptr;
PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC glDrawTransformFeedbackInstanced = nullptr;
PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC glDrawTransformFeedbackStreamInstanced = nullptr;

// GL_VERSION 4.3 *******************
PFNGLCLEARBUFFERDATAPROC glClearBufferData = nullptr;
PFNGLCLEARBUFFERSUBDATAPROC glClearBufferSubData = nullptr;
PFNGLDISPATCHCOMPUTEPROC glDispatchCompute = nullptr;
PFNGLDISPATCHCOMPUTEINDIRECTPROC glDispatchComputeIndirect = nullptr;
// skip some functions.....

	// GL_VERSION 4.4 *******************
PFNGLBUFFERSTORAGEPROC glBufferStorage = nullptr;
PFNGLCLEARTEXIMAGEPROC glClearTexImage = nullptr;
PFNGLCLEARTEXSUBIMAGEPROC glClearTexSubImage = nullptr;
PFNGLBINDBUFFERSBASEPROC glBindBuffersBase = nullptr;
PFNGLBINDBUFFERSRANGEPROC glBindBuffersRange = nullptr;
PFNGLBINDTEXTURESPROC glBindTextures = nullptr;
PFNGLBINDSAMPLERSPROC glBindSamplers = nullptr;
PFNGLBINDIMAGETEXTURESPROC glBindImageTextures = nullptr;
PFNGLBINDVERTEXBUFFERSPROC glBindVertexBuffers = nullptr;


// GL_VERSION 4.5 *******************
// skip....
// new buffers
PFNGLCREATEBUFFERSPROC glCreateBuffers = nullptr;
PFNGLNAMEDBUFFERSTORAGEPROC glNamedBufferStorage = nullptr;
PFNGLNAMEDBUFFERDATAPROC glNamedBufferData = nullptr;
PFNGLNAMEDBUFFERSUBDATAPROC glNamedBufferSubData = nullptr;
PFNGLCOPYNAMEDBUFFERSUBDATAPROC glCopyNamedBufferSubData = nullptr;
PFNGLCLEARNAMEDBUFFERDATAPROC glClearNamedBufferData = nullptr;
PFNGLCLEARNAMEDBUFFERSUBDATAPROC glClearNamedBufferSubData = nullptr;
PFNGLMAPNAMEDBUFFERPROC glMapNamedBuffer = nullptr;
PFNGLMAPNAMEDBUFFERRANGEPROC glMapNamedBufferRange = nullptr;
PFNGLUNMAPNAMEDBUFFERPROC glUnmapNamedBuffer = nullptr;
PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC glFlushMappedNamedBufferRange = nullptr;
PFNGLGETNAMEDBUFFERPARAMETERIVPROC glGetNamedBufferParameteriv = nullptr;
PFNGLGETNAMEDBUFFERPARAMETERI64VPROC glGetNamedBufferParameteri64v = nullptr;
PFNGLGETNAMEDBUFFERPOINTERVPROC glGetNamedBufferPointerv = nullptr;
PFNGLGETNAMEDBUFFERSUBDATAPROC glGetNamedBufferSubData = nullptr;
// new framebuffers
PFNGLCREATEFRAMEBUFFERSPROC glCreateFramebuffers = nullptr;
PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC glNamedFramebufferRenderbuffer = nullptr;
PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC glNamedFramebufferParameteri = nullptr;
PFNGLNAMEDFRAMEBUFFERTEXTUREPROC glNamedFramebufferTexture = nullptr;
PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC glNamedFramebufferTextureLayer = nullptr;
PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC glNamedFramebufferDrawBuffer = nullptr;
PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC glNamedFramebufferDrawBuffers = nullptr;
PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC glNamedFramebufferReadBuffer = nullptr;
PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC glInvalidateNamedFramebufferData = nullptr;
PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC glInvalidateNamedFramebufferSubData = nullptr;
PFNGLCLEARNAMEDFRAMEBUFFERIVPROC glClearNamedFramebufferiv = nullptr;
PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC glClearNamedFramebufferuiv = nullptr;
PFNGLCLEARNAMEDFRAMEBUFFERFVPROC glClearNamedFramebufferfv = nullptr;
PFNGLCLEARNAMEDFRAMEBUFFERFIPROC glClearNamedFramebufferfi = nullptr;
PFNGLBLITNAMEDFRAMEBUFFERPROC glBlitNamedFramebuffer = nullptr;
PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC glCheckNamedFramebufferStatus = nullptr;
PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC glGetNamedFramebufferParameteriv = nullptr;
PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC glGetNamedFramebufferAttachmentParameteriv = nullptr;
// new renderbuffer
PFNGLCREATERENDERBUFFERSPROC glCreateRenderbuffers = nullptr;
PFNGLNAMEDRENDERBUFFERSTORAGEPROC glNamedRenderbufferStorage = nullptr;
PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC glNamedRenderbufferStorageMultisample = nullptr;
PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC glGetNamedRenderbufferParameteriv = nullptr;
// new texture
PFNGLCREATETEXTURESPROC glCreateTextures = nullptr;
PFNGLTEXTUREBUFFERPROC glTextureBuffer = nullptr;
PFNGLTEXTUREBUFFERRANGEPROC glTextureBufferRange = nullptr;
PFNGLTEXTURESTORAGE1DPROC glTextureStorage1D = nullptr;
PFNGLTEXTURESTORAGE2DPROC glTextureStorage2D = nullptr;
PFNGLTEXTURESTORAGE3DPROC glTextureStorage3D = nullptr;
PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC glTextureStorage2DMultisample = nullptr;
PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC glTextureStorage3DMultisample = nullptr;
PFNGLTEXTURESUBIMAGE1DPROC glTextureSubImage1D = nullptr;
PFNGLTEXTURESUBIMAGE2DPROC glTextureSubImage2D = nullptr;
PFNGLTEXTURESUBIMAGE3DPROC glTextureSubImage3D = nullptr;
// skip..
PFNGLCOPYTEXTURESUBIMAGE1DPROC glCopyTextureSubImage1D = nullptr;
PFNGLCOPYTEXTURESUBIMAGE2DPROC glCopyTextureSubImage2D = nullptr;
PFNGLCOPYTEXTURESUBIMAGE3DPROC glCopyTextureSubImage3D = nullptr;
// skip...
PFNGLBINDTEXTUREUNITPROC glBindTextureUnit = nullptr;
PFNGLGETTEXTUREIMAGEPROC glGetTextureImage = nullptr; // read pixel from texture object
// new VertexArray
PFNGLCREATEVERTEXARRAYSPROC glCreateVertexArrays = nullptr;
PFNGLDISABLEVERTEXARRAYATTRIBPROC glDisableVertexArrayAttrib = nullptr;
PFNGLENABLEVERTEXARRAYATTRIBPROC glEnableVertexArrayAttrib = nullptr;
PFNGLVERTEXARRAYELEMENTBUFFERPROC glVertexArrayElementBuffer = nullptr;
PFNGLVERTEXARRAYVERTEXBUFFERPROC glVertexArrayVertexBuffer = nullptr;
PFNGLVERTEXARRAYVERTEXBUFFERSPROC glVertexArrayVertexBuffers = nullptr;
PFNGLVERTEXARRAYATTRIBBINDINGPROC glVertexArrayAttribBinding = nullptr;
PFNGLVERTEXARRAYATTRIBFORMATPROC glVertexArrayAttribFormat = nullptr;
// skip..
PFNGLGETVERTEXARRAYIVPROC glGetVertexArrayiv = nullptr;
// skip...
// new sampler
PFNGLCREATESAMPLERSPROC glCreateSamplers = nullptr;
// new pipelines
PFNGLCREATEPROGRAMPIPELINESPROC glCreateProgramPipelines = nullptr;
// new query
PFNGLCREATEQUERIESPROC glCreateQueries = nullptr;
// skip...
PFNGLGETGRAPHICSRESETSTATUSPROC glGetGraphicsResetStatus = nullptr;
// skip



// GL_VERSION 4.6 *******************
// all 4 functions are skipped.


// WGL choose pixel format
PFNWGLCHOOSEPIXELFORMATARBPROC wglChoosePixelFormatARB = nullptr;
PFNWGLCREATECONTEXTATTRIBSARBPROC wglCreateContextAttribsARB = nullptr;


gl_simple::gl_simple()
{

}

gl_simple::~gl_simple()
{

}


// class method
void gl_simple::init_simple_OpenGL(HWND dummy)
{
	// create dummy window
		// create dummy context
	HDC dummyDC = GetDC(dummy);

	// dummy PFD
	PIXELFORMATDESCRIPTOR dummy_pfd = {
	sizeof(PIXELFORMATDESCRIPTOR), // size of structure
	PFD_DRAW_TO_WINDOW | PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER, // some flag
	PFD_TYPE_RGBA,		// always RGBA
	32,					// color depth
	0, 0,				// R ( not used )
	0, 0,				// G ( not used )
	0, 0,				// B ( not used )
	0, 0,				// A ( not used )
	0,					// Accum bit ( not used )
	0,					// Accum R ( not used )
	0,					// Accum G ( not used )
	0,					// Accum B ( not used )
	0,					// Accum A ( not used )
	16,					// Depth bit ( if you set other than 16, maybe fail on some system.
	8,					// Stencil bit
	0,					// Aux buffer
	PFD_MAIN_PLANE,
	0,					// bReversed ( not used )
	0,					// bwLayerMask ( not used )
	0,					// dwVisibleMask ( not used )
	0 };

	int dummy_pFormat = ChoosePixelFormat(dummyDC, &dummy_pfd);
	if (dummy_pFormat == 0)
	{
		printf("Getting dummy pixel format fails... return\n");
		return;
	}
	else
	{
		printf("num of pixel format %d\n", dummy_pFormat);
	}

	//set dummy pixel format to dummy device context.
	SetPixelFormat(dummyDC, dummy_pFormat, &dummy_pfd);

	// Create dummy OpenGL context
	HGLRC dummy_glContext = wglCreateContext(dummyDC);

	if (dummy_glContext == NULL)
	{
		printf("Create dummy OpenGL context fails... return\n");
		return;
	}

	// make dummy context current
	wglMakeCurrent(dummyDC, dummy_glContext);

	glClearColor(1.0, 1.0, 0.0, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);
	SwapBuffers(dummyDC);


	//****************************
	// get OpenGL Procs
	//****************************
	printf("Get Procs GL1.2 (all 4 functions are skipped)\n");

	printf("Get Procs GL1.3 (2 funstions are activated)\n");
	glActiveTexture = (PFNGLACTIVETEXTUREPROC)wglGetProcAddress("glActiveTexture");
	glSampleCoverage = (PFNGLSAMPLECOVERAGEPROC)wglGetProcAddress("glSampleCoverage");
	// skip some functions..... //

	printf("Get Procs GL1.4\n");
	glBlendFuncSeparate = (PFNGLBLENDFUNCSEPARATEPROC)wglGetProcAddress("glBlendFuncSeparate");
	// skip some functions...//
	glWindowPos2f = (PFNGLWINDOWPOS2FPROC)wglGetProcAddress("glWindowPos2f");
	glWindowPos2i = (PFNGLWINDOWPOS2IPROC)wglGetProcAddress("glWindowPos2i");
	glWindowPos3f = (PFNGLWINDOWPOS3FPROC)wglGetProcAddress("glWindowPos3f");
	glWindowPos3i = (PFNGLWINDOWPOS3IPROC)wglGetProcAddress("glWindowPos3i");
	glBlendColor = (PFNGLBLENDCOLORPROC)wglGetProcAddress("glBlendColor");
	glBlendEquation = (PFNGLBLENDEQUATIONPROC)wglGetProcAddress("glBlendEquation");

	printf("Get Procs GL1.5\n");
	glGenQueries = (PFNGLGENQUERIESPROC)wglGetProcAddress("glGenQueries");
	glDeleteQueries = (PFNGLDELETEQUERIESPROC)wglGetProcAddress("glDeleteQueries");
	glIsQuery = (PFNGLISQUERYPROC)wglGetProcAddress("glIsQuery");
	glBeginQuery = (PFNGLBEGINQUERYPROC)wglGetProcAddress("glBeginQuery");
	glEndQuery = (PFNGLENDQUERYPROC)wglGetProcAddress("glEndQuery");
	glGetQueryiv = (PFNGLGETQUERYIVPROC)wglGetProcAddress("glGetQueryiv");
	glGetQueryObjectiv = (PFNGLGETQUERYOBJECTIVPROC)wglGetProcAddress("glGetQueryObjectiv");
	glGetQueryObjectuiv = (PFNGLGETQUERYOBJECTUIVPROC)wglGetProcAddress("glGetQueryObjectuiv");
	glBindBuffer = (PFNGLBINDBUFFERPROC)wglGetProcAddress("glBindBuffer");
	glDeleteBuffers = (PFNGLDELETEBUFFERSPROC)wglGetProcAddress("glDeleteBuffers");
	glGenBuffers = (PFNGLGENBUFFERSPROC)wglGetProcAddress("glGenBuffers");
	glIsBuffer = (PFNGLISBUFFERPROC)wglGetProcAddress("glIsBuffer");
	glBufferData = (PFNGLBUFFERDATAPROC)wglGetProcAddress("glBufferData");
	glBufferSubData = (PFNGLBUFFERSUBDATAPROC)wglGetProcAddress("glBufferSubData");
	glGetBufferSubData = (PFNGLGETBUFFERSUBDATAPROC)wglGetProcAddress("glGetBufferSubData");
	glMapBuffer = (PFNGLMAPBUFFERPROC)wglGetProcAddress("glMapBuffer");
	glUnmapBuffer = (PFNGLUNMAPBUFFERPROC)wglGetProcAddress("glUnmapBuffer");
	glGetBufferParameteriv = (PFNGLGETBUFFERPARAMETERIVPROC)wglGetProcAddress("glGetBufferParameteriv");
	glGetBufferPointerv = (PFNGLGETBUFFERPOINTERVPROC)wglGetProcAddress("glGetBufferPointerv");

	printf("Get Procs GL2.0\n");
	glBlendEquationSeparate = (PFNGLBLENDEQUATIONSEPARATEPROC)wglGetProcAddress("glBlendEquationSeparate");
	glDrawBuffers = (PFNGLDRAWBUFFERSPROC)wglGetProcAddress("glDrawBuffers");

	glAttachShader = (PFNGLATTACHSHADERPROC)wglGetProcAddress("glAttachShader");
	glBindAttribLocation = (PFNGLBINDATTRIBLOCATIONPROC)wglGetProcAddress("glBindAttribLocation");
	glCompileShader = (PFNGLCOMPILESHADERPROC)wglGetProcAddress("glCompileShader");
	glCreateProgram = (PFNGLCREATEPROGRAMPROC)wglGetProcAddress("glCreateProgram");
	glCreateShader = (PFNGLCREATESHADERPROC)wglGetProcAddress("glCreateShader");
	glDeleteProgram = (PFNGLDELETEPROGRAMPROC)wglGetProcAddress("glDeleteProgram");
	glDeleteShader = (PFNGLDELETESHADERPROC)wglGetProcAddress("glDeleteShader");
	glDetachShader = (PFNGLDETACHSHADERPROC)wglGetProcAddress("glDetachShader");
	glDisableVertexAttribArray = (PFNGLDISABLEVERTEXATTRIBARRAYPROC)wglGetProcAddress("glDisableVertexAttribArray");
	glEnableVertexAttribArray = (PFNGLENABLEVERTEXATTRIBARRAYPROC)wglGetProcAddress("glEnableVertexAttribArray");

	glGetProgramiv = (PFNGLGETPROGRAMIVPROC)wglGetProcAddress("glGetProgramiv");
	glGetProgramInfoLog = (PFNGLGETPROGRAMINFOLOGPROC)wglGetProcAddress("glGetProgramInfoLog");
	glGetShaderiv = (PFNGLGETSHADERIVPROC)wglGetProcAddress("glGetShaderiv");
	glGetShaderInfoLog = (PFNGLGETSHADERINFOLOGPROC)wglGetProcAddress("glGetShaderInfoLog");
	glGetShaderSource = (PFNGLGETSHADERSOURCEPROC)wglGetProcAddress("glGetShaderSource");
	glGetUniformLocation = (PFNGLGETUNIFORMLOCATIONPROC)wglGetProcAddress("glGetUniformLocation");

	glIsProgram = (PFNGLISPROGRAMPROC)wglGetProcAddress("glIsProgram");
	glIsShader = (PFNGLISSHADERPROC)wglGetProcAddress("glIsShader");
	glLinkProgram = (PFNGLLINKPROGRAMPROC)wglGetProcAddress("glLinkProgram");
	glShaderSource = (PFNGLSHADERSOURCEPROC)wglGetProcAddress("glShaderSource");
	glUseProgram = (PFNGLUSEPROGRAMPROC)wglGetProcAddress("glUseProgram");
	glUniform1f = (PFNGLUNIFORM1FPROC)wglGetProcAddress("glUniform1f");
	glUniform2f = (PFNGLUNIFORM2FPROC)wglGetProcAddress("glUniform2f");
	glUniform3f = (PFNGLUNIFORM3FPROC)wglGetProcAddress("glUniform3f");
	glUniform4f = (PFNGLUNIFORM4FPROC)wglGetProcAddress("glUniform4f");
	glUniform1i = (PFNGLUNIFORM1IPROC)wglGetProcAddress("glUniform1i");
	glUniform2i = (PFNGLUNIFORM2IPROC)wglGetProcAddress("glUniform2i");
	glUniform3i = (PFNGLUNIFORM3IPROC)wglGetProcAddress("glUniform3i");
	glUniform4i = (PFNGLUNIFORM4IPROC)wglGetProcAddress("glUniform4i");
	glUniform1fv = (PFNGLUNIFORM1FVPROC)wglGetProcAddress("glUniform1fv");
	glUniform2fv = (PFNGLUNIFORM2FVPROC)wglGetProcAddress("glUniform2fv");
	glUniform3fv = (PFNGLUNIFORM3FVPROC)wglGetProcAddress("glUniform3fv");
	glUniform4fv = (PFNGLUNIFORM4FVPROC)wglGetProcAddress("glUniform4fv");
	glUniform1iv = (PFNGLUNIFORM1IVPROC)wglGetProcAddress("glUniform1iv");
	glUniform2iv = (PFNGLUNIFORM1IVPROC)wglGetProcAddress("glUniform2iv");
	glUniform3iv = (PFNGLUNIFORM1IVPROC)wglGetProcAddress("glUniform3iv");
	glUniform4iv = (PFNGLUNIFORM1IVPROC)wglGetProcAddress("glUniform4iv");
	glUniformMatrix2fv = (PFNGLUNIFORMMATRIX2FVPROC)wglGetProcAddress("glUniformMatrix2fv");
	glUniformMatrix3fv = (PFNGLUNIFORMMATRIX3FVPROC)wglGetProcAddress("glUniformMatrix3fv");
	glUniformMatrix4fv = (PFNGLUNIFORMMATRIX4FVPROC)wglGetProcAddress("glUniformMatrix4fv");
	glValidateProgram = (PFNGLVALIDATEPROGRAMPROC)wglGetProcAddress("glValidateProgram");
	// skip some functions.....
	glVertexAttribPointer = (PFNGLVERTEXATTRIBPOINTERPROC)wglGetProcAddress("glVertexAttribPointer");


	printf("Get Procs GL2.1\n");
	glUniformMatrix2x3fv = (PFNGLUNIFORMMATRIX2X3FVPROC)wglGetProcAddress("glUniformMatrix2x3fv");
	glUniformMatrix3x2fv = (PFNGLUNIFORMMATRIX3X2FVPROC)wglGetProcAddress("glUniformMatrix3x2fv");
	glUniformMatrix2x4fv = (PFNGLUNIFORMMATRIX2X4FVPROC)wglGetProcAddress("glUniformMatrix2x4fv");
	glUniformMatrix4x2fv = (PFNGLUNIFORMMATRIX4X2FVPROC)wglGetProcAddress("glUniformMatrix4x2fv");
	glUniformMatrix3x4fv = (PFNGLUNIFORMMATRIX3X4FVPROC)wglGetProcAddress("glUniformMatrix3x4fv");
	glUniformMatrix4x3fv = (PFNGLUNIFORMMATRIX4X3FVPROC)wglGetProcAddress("glUniformMatrix4x3fv");

	printf("Get Procs GL3.0\n");
	// skip some functions....
	glBeginTransformFeedback = (PFNGLBEGINTRANSFORMFEEDBACKPROC)wglGetProcAddress("glBeginTransformFeedback");
	glEndTransformFeedback = (PFNGLENDTRANSFORMFEEDBACKPROC)wglGetProcAddress("glEndTransformFeedback");
	glBindBufferRange = (PFNGLBINDBUFFERRANGEPROC)wglGetProcAddress("glBindBufferRange");
	glBindBufferBase = (PFNGLBINDBUFFERBASEPROC)wglGetProcAddress("glBindBufferBase");
	glTransformFeedbackVaryings = (PFNGLTRANSFORMFEEDBACKVARYINGSPROC)wglGetProcAddress("glTransformFeedbackVaryings");
	glGetTransformFeedbackVarying = (PFNGLGETTRANSFORMFEEDBACKVARYINGPROC)wglGetProcAddress("glGetTransformFeedbackVarying");
	glBeginConditionalRender = (PFNGLBEGINCONDITIONALRENDERPROC)wglGetProcAddress("glBeginConditionalRender");
	glEndConditionalRender = (PFNGLENDCONDITIONALRENDERPROC)wglGetProcAddress("glEndConditionalRender");
	glVertexAttribIPointer = (PFNGLVERTEXATTRIBIPOINTERPROC)wglGetProcAddress("glVertexAttribIPointer");
	glGetVertexAttribIiv = (PFNGLGETVERTEXATTRIBIIVPROC)wglGetProcAddress("glGetVertexAttribIiv");
	glGetVertexAttribIuiv = (PFNGLGETVERTEXATTRIBIUIVPROC)wglGetProcAddress("glGetVertexAttribIuiv");
	// skip...
	glGetUniformuiv = (PFNGLGETUNIFORMUIVPROC)wglGetProcAddress("glGetUniformuiv");
	// skip...
	glUniform1ui = (PFNGLUNIFORM1UIPROC)wglGetProcAddress("glUniform1ui");
	glUniform2ui = (PFNGLUNIFORM2UIPROC)wglGetProcAddress("glUniform2ui");
	glUniform3ui = (PFNGLUNIFORM3UIPROC)wglGetProcAddress("glUniform3ui");
	glUniform4ui = (PFNGLUNIFORM4UIPROC)wglGetProcAddress("glUniform4ui");
	glUniform1uiv = (PFNGLUNIFORM1UIVPROC)wglGetProcAddress("glUniform1uiv");
	glUniform2uiv = (PFNGLUNIFORM2UIVPROC)wglGetProcAddress("glUniform2uiv");
	glUniform3uiv = (PFNGLUNIFORM3UIVPROC)wglGetProcAddress("glUniform3uiv");
	glUniform4uiv = (PFNGLUNIFORM4UIVPROC)wglGetProcAddress("glUniform4uiv");
	// skip...
	glClearBufferiv = (PFNGLCLEARBUFFERIVPROC)wglGetProcAddress("glClearBufferiv");
	glClearBufferuiv = (PFNGLCLEARBUFFERUIVPROC)wglGetProcAddress("glClearBufferuiv");
	glClearBufferfv = (PFNGLCLEARBUFFERFVPROC)wglGetProcAddress("glClearBufferfv");
	glClearBufferfi = (PFNGLCLEARBUFFERFIPROC)wglGetProcAddress("glClearBufferfi");
	glGetStringi = (PFNGLGETSTRINGIPROC)wglGetProcAddress("glGetStringi");
	glIsRenderbuffer = (PFNGLISRENDERBUFFERPROC)wglGetProcAddress("glIsRenderbuffer");
	glBindRenderbuffer = (PFNGLBINDRENDERBUFFERPROC)wglGetProcAddress("glBindRenderbuffer");
	glDeleteRenderbuffers = (PFNGLDELETERENDERBUFFERSPROC)wglGetProcAddress("glDeleteRenderbuffers");
	glGenRenderbuffers = (PFNGLGENRENDERBUFFERSPROC)wglGetProcAddress("glGenRenderbuffers");
	glRenderbufferStorage = (PFNGLRENDERBUFFERSTORAGEPROC)wglGetProcAddress("glRenderbufferStorage");
	glGetRenderbufferParameteriv = (PFNGLGETRENDERBUFFERPARAMETERIVPROC)wglGetProcAddress("glGetRenderbufferParameteriv");
	glIsFramebuffer = (PFNGLISFRAMEBUFFERPROC)wglGetProcAddress("glIsFramebuffer");
	glBindFramebuffer = (PFNGLBINDFRAMEBUFFERPROC)wglGetProcAddress("glBindFramebuffer");
	glDeleteFramebuffers = (PFNGLDELETEFRAMEBUFFERSPROC)wglGetProcAddress("glDeleteFramebuffers");
	glGenFramebuffers = (PFNGLGENFRAMEBUFFERSPROC)wglGetProcAddress("glGenFramebuffers");
	glCheckFramebufferStatus = (PFNGLCHECKFRAMEBUFFERSTATUSPROC)wglGetProcAddress("glCheckFramebufferStatus");
	glFramebufferTexture1D = (PFNGLFRAMEBUFFERTEXTURE1DPROC)wglGetProcAddress("glFramebufferTexture1D");
	glFramebufferTexture2D = (PFNGLFRAMEBUFFERTEXTURE2DPROC)wglGetProcAddress("glFramebufferTexture2D");
	glFramebufferTexture3D = (PFNGLFRAMEBUFFERTEXTURE3DPROC)wglGetProcAddress("glFramebufferTexture3D");
	glFramebufferRenderbuffer = (PFNGLFRAMEBUFFERRENDERBUFFERPROC)wglGetProcAddress("glFramebufferRenderbuffer");
	glGetFramebufferAttachmentParameteriv = (PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC)wglGetProcAddress("glGetFramebufferAttachmentParameteriv");
	//skip....
	glMapBufferRange = (PFNGLMAPBUFFERRANGEPROC)wglGetProcAddress("glMapBufferRange");
	glFlushMappedBufferRange = (PFNGLFLUSHMAPPEDBUFFERRANGEPROC)wglGetProcAddress("glFlushMappedBufferRange");
	glBindVertexArray = (PFNGLBINDVERTEXARRAYPROC)wglGetProcAddress("glBindVertexArray");
	glDeleteVertexArrays = (PFNGLDELETEVERTEXARRAYSPROC)wglGetProcAddress("glDeleteVertexArrays");
	glGenVertexArrays = (PFNGLGENVERTEXARRAYSPROC)wglGetProcAddress("glGenVertexArrays");
	glIsVertexArray = (PFNGLISVERTEXARRAYPROC)wglGetProcAddress("glIsVertexArray");


	printf("Get Procs GL3.1\n");
	glDrawArraysInstanced = (PFNGLDRAWARRAYSINSTANCEDPROC)wglGetProcAddress("glDrawArraysInstanced");
	glDrawElementsInstanced = (PFNGLDRAWELEMENTSINSTANCEDPROC)wglGetProcAddress("glDrawElementsInstanced");
	glTexBuffer = (PFNGLTEXBUFFERPROC)wglGetProcAddress("glTexBuffer");
	glPrimitiveRestartIndex = (PFNGLPRIMITIVERESTARTINDEXPROC)wglGetProcAddress("glPrimitiveRestartIndex");
	glCopyBufferSubData = (PFNGLCOPYBUFFERSUBDATAPROC)wglGetProcAddress("glCopyBufferSubData");
	glGetUniformIndices = (PFNGLGETUNIFORMINDICESPROC)wglGetProcAddress("glGetUniformIndices");
	glGetActiveUniformsiv = (PFNGLGETACTIVEUNIFORMSIVPROC)wglGetProcAddress("glGetActiveUniformsiv");
	glGetActiveUniformName = (PFNGLGETACTIVEUNIFORMNAMEPROC)wglGetProcAddress("glGetActiveUniformName");
	glGetUniformBlockIndex = (PFNGLGETUNIFORMBLOCKINDEXPROC)wglGetProcAddress("glGetUniformBlockIndex");
	glGetActiveUniformBlockiv = (PFNGLGETACTIVEUNIFORMBLOCKIVPROC)wglGetProcAddress("glGetActiveUniformBlockiv");
	glGetActiveUniformBlockName = (PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC)wglGetProcAddress("glGetActiveUniformBlockName");
	glUniformBlockBinding = (PFNGLUNIFORMBLOCKBINDINGPROC)wglGetProcAddress("glUniformBlockBinding");

	printf("Get Procs GL3.2\n");
	glFenceSync = (PFNGLFENCESYNCPROC)wglGetProcAddress("glFenceSync");
	glIsSync = (PFNGLISSYNCPROC)wglGetProcAddress("glIsSync");
	glDeleteSync = (PFNGLDELETESYNCPROC)wglGetProcAddress("glDeleteSync");
	glClientWaitSync = (PFNGLCLIENTWAITSYNCPROC)wglGetProcAddress("glClientWaitSync");
	glWaitSync = (PFNGLWAITSYNCPROC)wglGetProcAddress("glWaitSync");
	glGetInteger64v = (PFNGLGETINTEGER64VPROC)wglGetProcAddress("glGetInteger64v");
	glGetSynciv = (PFNGLGETSYNCIVPROC)wglGetProcAddress("glGetSynciv");
	glGetInteger64i_v = (PFNGLGETINTEGER64I_VPROC)wglGetProcAddress("glGetInteger64i_v");
	glGetBufferParameteri64v = (PFNGLGETBUFFERPARAMETERI64VPROC)wglGetProcAddress("glGetBufferParameteri64v");
	glFramebufferTexture = (PFNGLFRAMEBUFFERTEXTUREPROC)wglGetProcAddress("glFramebufferTexture");

	printf("Get Procs GL3.3\n");
	glBindFragDataLocationIndexed = (PFNGLBINDFRAGDATALOCATIONINDEXEDPROC)wglGetProcAddress("glBindFragDataLocationIndexed");
	glGetFragDataIndex = (PFNGLGETFRAGDATAINDEXPROC)wglGetProcAddress("glGetFragDataIndex");
	glGenSamplers = (PFNGLGENSAMPLERSPROC)wglGetProcAddress("glGenSamplers");
	glDeleteSamplers = (PFNGLDELETESAMPLERSPROC)wglGetProcAddress("glDeleteSamplers");
	glIsSampler = (PFNGLISSAMPLERPROC)wglGetProcAddress("glIsSampler");
	glBindSampler = (PFNGLBINDSAMPLERPROC)wglGetProcAddress("glBindSampler");
	glSamplerParameteri = (PFNGLSAMPLERPARAMETERIPROC)wglGetProcAddress("glSamplerParameteri");
	glSamplerParameteriv = (PFNGLSAMPLERPARAMETERIVPROC)wglGetProcAddress("glSamplerParameteriv");
	glSamplerParameterf = (PFNGLSAMPLERPARAMETERFPROC)wglGetProcAddress("glSamplerParameterf");
	glSamplerParameterfv = (PFNGLSAMPLERPARAMETERFVPROC)wglGetProcAddress("glSamplerParameterfv");
	glGetSamplerParameteriv = (PFNGLGETSAMPLERPARAMETERIVPROC)wglGetProcAddress("glGetSamplerParameteriv");
	glGetSamplerParameterfv = (PFNGLGETSAMPLERPARAMETERFVPROC)wglGetProcAddress("glGetSamplerParameterfv");
	glQueryCounter = (PFNGLQUERYCOUNTERPROC)wglGetProcAddress("glQueryCounter");

	printf("Get Procs GL4.0\n");
	glUniform1d = (PFNGLUNIFORM1DPROC)wglGetProcAddress("glUniform1d");
	glUniform2d = (PFNGLUNIFORM2DPROC)wglGetProcAddress("glUniform2d");
	glUniform3d = (PFNGLUNIFORM3DPROC)wglGetProcAddress("glUniform3d");
	glUniform4d = (PFNGLUNIFORM4DPROC)wglGetProcAddress("glUniform4d");
	glUniform1dv = (PFNGLUNIFORM1DVPROC)wglGetProcAddress("glUniform1dv");
	glUniform2dv = (PFNGLUNIFORM2DVPROC)wglGetProcAddress("glUniform2dv");
	glUniform3dv = (PFNGLUNIFORM3DVPROC)wglGetProcAddress("glUniform3dv");
	glUniform4dv = (PFNGLUNIFORM4DVPROC)wglGetProcAddress("glUniform4dv");
	glUniformMatrix2dv = (PFNGLUNIFORMMATRIX2DVPROC)wglGetProcAddress("glUniformMatrix2dv");
	glUniformMatrix3dv = (PFNGLUNIFORMMATRIX3DVPROC)wglGetProcAddress("glUniformMatrix3dv");
	glUniformMatrix4dv = (PFNGLUNIFORMMATRIX4DVPROC)wglGetProcAddress("glUniformMatrix4dv");
	glBindTransformFeedback = (PFNGLBINDTRANSFORMFEEDBACKPROC)wglGetProcAddress("glBindTransformFeedback");
	glDeleteTransformFeedbacks = (PFNGLDELETETRANSFORMFEEDBACKSPROC)wglGetProcAddress("glDeleteTransformFeedbacks");
	glGenTransformFeedbacks = (PFNGLGENTRANSFORMFEEDBACKSPROC)wglGetProcAddress("glGenTransformFeedbacks");
	glIsTransformFeedback = (PFNGLISTRANSFORMFEEDBACKPROC)wglGetProcAddress("glIsTransformFeedback");
	glPauseTransformFeedback = (PFNGLPAUSETRANSFORMFEEDBACKPROC)wglGetProcAddress("glPauseTransformFeedback");
	glResumeTransformFeedback = (PFNGLRESUMETRANSFORMFEEDBACKPROC)wglGetProcAddress("glResumeTransformFeedback");
	glDrawTransformFeedback = (PFNGLDRAWTRANSFORMFEEDBACKPROC)wglGetProcAddress("glDrawTransformFeedback");
	glDrawTransformFeedbackStream = (PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC)wglGetProcAddress("glDrawTransformFeedbackStream");
	glBeginQueryIndexed = (PFNGLBEGINQUERYINDEXEDPROC)wglGetProcAddress("glBeginQueryIndexed");
	glEndQueryIndexed = (PFNGLENDQUERYINDEXEDPROC)wglGetProcAddress("glEndQueryIndexed");
	glGetQueryIndexediv = (PFNGLGETQUERYINDEXEDIVPROC)wglGetProcAddress("glGetQueryIndexediv");

	printf("Get Procs GL4.1\n");
	glShaderBinary = (PFNGLSHADERBINARYPROC)wglGetProcAddress("glShaderBinary");
	glGetShaderPrecisionFormat = (PFNGLGETSHADERPRECISIONFORMATPROC)wglGetProcAddress("glGetShaderPrecisionFormat");
	glGetProgramBinary = (PFNGLGETPROGRAMBINARYPROC)wglGetProcAddress("glGetProgramBinary");
	glProgramBinary = (PFNGLPROGRAMBINARYPROC)wglGetProcAddress("glProgramBinary");
	glProgramParameteri = (PFNGLPROGRAMPARAMETERIPROC)wglGetProcAddress("glProgramParameteri");
	glUseProgramStages = (PFNGLUSEPROGRAMSTAGESPROC)wglGetProcAddress("glUseProgramStages");
	glActiveShaderProgram = (PFNGLACTIVESHADERPROGRAMPROC)wglGetProcAddress("glActiveShaderProgram");
	glCreateShaderProgramv = (PFNGLCREATESHADERPROGRAMVPROC)wglGetProcAddress("glCreateShaderProgramv");
	glBindProgramPipeline = (PFNGLBINDPROGRAMPIPELINEPROC)wglGetProcAddress("glBindProgramPipeline");
	glDeleteProgramPipelines = (PFNGLDELETEPROGRAMPIPELINESPROC)wglGetProcAddress("glDeleteProgramPipelines");
	glGenProgramPipelines = (PFNGLGENPROGRAMPIPELINESPROC)wglGetProcAddress("glGenProgramPipelines");
	glIsProgramPipeline = (PFNGLISPROGRAMPIPELINEPROC)wglGetProcAddress("glIsProgramPipeline");
	glGetProgramPipelineiv = (PFNGLGETPROGRAMPIPELINEIVPROC)wglGetProcAddress("glGetProgramPipelineiv");

	glProgramUniform1i = (PFNGLPROGRAMUNIFORM1IPROC)wglGetProcAddress("glProgramUniform1i");
	glProgramUniform1iv = (PFNGLPROGRAMUNIFORM1IVPROC)wglGetProcAddress("glProgramUniform1iv");
	glProgramUniform1f = (PFNGLPROGRAMUNIFORM1FPROC)wglGetProcAddress("glProgramUniform1f");
	glProgramUniform1fv = (PFNGLPROGRAMUNIFORM1FVPROC)wglGetProcAddress("glProgramUniform1fv");
	glProgramUniform1d = (PFNGLPROGRAMUNIFORM1DPROC)wglGetProcAddress("glProgramUniform1d");
	glProgramUniform1dv = (PFNGLPROGRAMUNIFORM1DVPROC)wglGetProcAddress("glProgramUniform1dv");
	glProgramUniform1ui = (PFNGLPROGRAMUNIFORM1UIPROC)wglGetProcAddress("glProgramUniform1ui");
	glProgramUniform1uiv = (PFNGLPROGRAMUNIFORM1UIVPROC)wglGetProcAddress("glProgramUniform1uiv");

	glProgramUniform2i = (PFNGLPROGRAMUNIFORM2IPROC)wglGetProcAddress("glProgramUniform2i");
	glProgramUniform2iv = (PFNGLPROGRAMUNIFORM2IVPROC)wglGetProcAddress("glProgramUniform2iv");
	glProgramUniform2f = (PFNGLPROGRAMUNIFORM2FPROC)wglGetProcAddress("glProgramUniform2f");
	glProgramUniform2fv = (PFNGLPROGRAMUNIFORM2FVPROC)wglGetProcAddress("glProgramUniform2fv");
	glProgramUniform2d = (PFNGLPROGRAMUNIFORM2DPROC)wglGetProcAddress("glProgramUniform2d");
	glProgramUniform2dv = (PFNGLPROGRAMUNIFORM2DVPROC)wglGetProcAddress("glProgramUniform2dv");
	glProgramUniform2ui = (PFNGLPROGRAMUNIFORM2UIPROC)wglGetProcAddress("glProgramUniform2ui");
	glProgramUniform2uiv = (PFNGLPROGRAMUNIFORM2UIVPROC)wglGetProcAddress("glProgramUniform2uiv");

	glProgramUniform3i = (PFNGLPROGRAMUNIFORM3IPROC)wglGetProcAddress("glProgramUniform3i");
	glProgramUniform3iv = (PFNGLPROGRAMUNIFORM3IVPROC)wglGetProcAddress("glProgramUniform3iv");
	glProgramUniform3f = (PFNGLPROGRAMUNIFORM3FPROC)wglGetProcAddress("glProgramUniform3f");
	glProgramUniform3fv = (PFNGLPROGRAMUNIFORM3FVPROC)wglGetProcAddress("glProgramUniform3fv");
	glProgramUniform3d = (PFNGLPROGRAMUNIFORM3DPROC)wglGetProcAddress("glProgramUniform3d");
	glProgramUniform3dv = (PFNGLPROGRAMUNIFORM3DVPROC)wglGetProcAddress("glProgramUniform3dv");
	glProgramUniform3ui = (PFNGLPROGRAMUNIFORM3UIPROC)wglGetProcAddress("glProgramUniform3ui");
	glProgramUniform3uiv = (PFNGLPROGRAMUNIFORM3UIVPROC)wglGetProcAddress("glProgramUniform3uiv");

	glProgramUniform4i = (PFNGLPROGRAMUNIFORM4IPROC)wglGetProcAddress("glProgramUniform4i");
	glProgramUniform4iv = (PFNGLPROGRAMUNIFORM4IVPROC)wglGetProcAddress("glProgramUniform4iv");
	glProgramUniform4f = (PFNGLPROGRAMUNIFORM4FPROC)wglGetProcAddress("glProgramUniform4f");
	glProgramUniform4fv = (PFNGLPROGRAMUNIFORM4FVPROC)wglGetProcAddress("glProgramUniform4fv");
	glProgramUniform4d = (PFNGLPROGRAMUNIFORM4DPROC)wglGetProcAddress("glProgramUniform4d");
	glProgramUniform4dv = (PFNGLPROGRAMUNIFORM4DVPROC)wglGetProcAddress("glProgramUniform4dv");
	glProgramUniform4ui = (PFNGLPROGRAMUNIFORM4UIPROC)wglGetProcAddress("glProgramUniform4ui");
	glProgramUniform4uiv = (PFNGLPROGRAMUNIFORM4UIVPROC)wglGetProcAddress("glProgramUniform4uiv");

	glProgramUniformMatrix2fv = (PFNGLPROGRAMUNIFORMMATRIX2FVPROC)wglGetProcAddress("glProgramUniformMatrix2fv");
	glProgramUniformMatrix3fv = (PFNGLPROGRAMUNIFORMMATRIX3FVPROC)wglGetProcAddress("glProgramUniformMatrix3fv");
	glProgramUniformMatrix4fv = (PFNGLPROGRAMUNIFORMMATRIX4FVPROC)wglGetProcAddress("glProgramUniformMatrix4fv");
	glProgramUniformMatrix2dv = (PFNGLPROGRAMUNIFORMMATRIX2DVPROC)wglGetProcAddress("glProgramUniformMatrix2dv");
	glProgramUniformMatrix3dv = (PFNGLPROGRAMUNIFORMMATRIX3DVPROC)wglGetProcAddress("glProgramUniformMatrix3dv");
	glProgramUniformMatrix4dv = (PFNGLPROGRAMUNIFORMMATRIX4DVPROC)wglGetProcAddress("glProgramUniformMatrix4dv");
	glProgramUniformMatrix2x3fv = (PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC)wglGetProcAddress("glProgramUniformMatrix2x3fv");
	glProgramUniformMatrix3x2fv = (PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC)wglGetProcAddress("glProgramUniformMatrix3x2fv");
	glProgramUniformMatrix2x4fv = (PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC)wglGetProcAddress("glProgramUniformMatrix2x4fv");
	glProgramUniformMatrix4x2fv = (PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC)wglGetProcAddress("glProgramUniformMatrix4x2fv");
	glProgramUniformMatrix3x4fv = (PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC)wglGetProcAddress("glProgramUniformMatrix3x4fv");
	glProgramUniformMatrix4x3fv = (PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC)wglGetProcAddress("glProgramUniformMatrix4x3fv");
	glProgramUniformMatrix2x3dv = (PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC)wglGetProcAddress("glProgramUniformMatrix2x3dv");
	glProgramUniformMatrix3x2dv = (PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC)wglGetProcAddress("glProgramUniformMatrix3x2dv");
	glProgramUniformMatrix2x4dv = (PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC)wglGetProcAddress("glProgramUniformMatrix2x4dv");
	glProgramUniformMatrix4x2dv = (PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC)wglGetProcAddress("glProgramUniformMatrix4x2dv");
	glProgramUniformMatrix3x4dv = (PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC)wglGetProcAddress("glProgramUniformMatrix3x4dv");
	glProgramUniformMatrix4x3dv = (PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC)wglGetProcAddress("glProgramUniformMatrix4x3dv");
	glValidateProgramPipeline = (PFNGLVALIDATEPROGRAMPIPELINEPROC)wglGetProcAddress("glValidateProgramPipeline");
	glGetProgramPipelineInfoLog = (PFNGLGETPROGRAMPIPELINEINFOLOGPROC)wglGetProcAddress("glGetProgramPipelineInfoLog");

	printf("Get Procs GL4.2 (mainly for compute shader)\n");
	glDrawArraysInstancedBaseInstance = (PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC)wglGetProcAddress("glDrawArraysInstancedBaseInstance");
	glDrawElementsInstancedBaseInstance = (PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC)wglGetProcAddress("glDrawElementsInstancedBaseInstance");
	glDrawElementsInstancedBaseVertexBaseInstance = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC)wglGetProcAddress("glDrawElementsInstancedBaseVertexBaseInstance");
	glGetInternalformativ = (PFNGLGETINTERNALFORMATIVPROC)wglGetProcAddress("glGetInternalformativ");
	glGetActiveAtomicCounterBufferiv = (PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC)wglGetProcAddress("glGetActiveAtomicCounterBufferiv");
	glBindImageTexture = (PFNGLBINDIMAGETEXTUREPROC)wglGetProcAddress("glBindImageTexture");
	glMemoryBarrier = (PFNGLMEMORYBARRIERPROC)wglGetProcAddress("glMemoryBarrier");
	glTexStorage1D = (PFNGLTEXSTORAGE1DPROC)wglGetProcAddress("glTexStorage1D");
	glTexStorage2D = (PFNGLTEXSTORAGE2DPROC)wglGetProcAddress("glTexStorage2D");
	glTexStorage3D = (PFNGLTEXSTORAGE3DPROC)wglGetProcAddress("glTexStorage3D");
	glDrawTransformFeedbackInstanced = (PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC)wglGetProcAddress("glDrawTransformFeedbackInstanced");
	glDrawTransformFeedbackStreamInstanced = (PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC)wglGetProcAddress("glDrawTransformFeedbackStreamInstanced");

	printf("Get Procs GL4.3\n");
	glClearBufferData = (PFNGLCLEARBUFFERDATAPROC)wglGetProcAddress("glClearBufferData");
	glClearBufferSubData = (PFNGLCLEARBUFFERSUBDATAPROC)wglGetProcAddress("glClearBufferSubData");
	glDispatchCompute = (PFNGLDISPATCHCOMPUTEPROC)wglGetProcAddress("glDispatchCompute");
	glDispatchComputeIndirect = (PFNGLDISPATCHCOMPUTEINDIRECTPROC)wglGetProcAddress("glDispatchComputeIndirect");

	printf("Get Procs GL4.4\n");
	glBufferStorage = (PFNGLBUFFERSTORAGEPROC)wglGetProcAddress("glBufferStorage");
	glClearTexImage = (PFNGLCLEARTEXIMAGEPROC)wglGetProcAddress("glClearTexImage");
	glClearTexSubImage = (PFNGLCLEARTEXSUBIMAGEPROC)wglGetProcAddress("glClearTexSubImage");
	glBindBuffersBase = (PFNGLBINDBUFFERSBASEPROC)wglGetProcAddress("glBindBuffersBase");
	glBindBuffersRange = (PFNGLBINDBUFFERSRANGEPROC)wglGetProcAddress("glBindBuffersRange");
	glBindTextures = (PFNGLBINDTEXTURESPROC)wglGetProcAddress("glBindTextures");
	glBindSamplers = (PFNGLBINDSAMPLERSPROC)wglGetProcAddress("glBindSamplers");
	glBindImageTextures = (PFNGLBINDIMAGETEXTURESPROC)wglGetProcAddress("glBindImageTextures");
	glBindVertexBuffers = (PFNGLBINDVERTEXBUFFERSPROC)wglGetProcAddress("glBindVertexBuffers");

	printf("Get Procs GL4.5 (main function set)\n");
	glCreateBuffers = (PFNGLCREATEBUFFERSPROC)wglGetProcAddress("glCreateBuffers");
	glNamedBufferStorage = (PFNGLNAMEDBUFFERSTORAGEPROC)wglGetProcAddress("glNamedBufferStorage");
	glNamedBufferData = (PFNGLNAMEDBUFFERDATAPROC)wglGetProcAddress("glNamedBufferData");
	glNamedBufferSubData = (PFNGLNAMEDBUFFERSUBDATAPROC)wglGetProcAddress("glNamedBufferSubData");
	glCopyNamedBufferSubData = (PFNGLCOPYNAMEDBUFFERSUBDATAPROC)wglGetProcAddress("glCopyNamedBufferSubData");
	glClearNamedBufferData = (PFNGLCLEARNAMEDBUFFERDATAPROC)wglGetProcAddress("glClearNamedBufferData");
	glClearNamedBufferSubData = (PFNGLCLEARNAMEDBUFFERSUBDATAPROC)wglGetProcAddress("glClearNamedBufferSubData");
	glMapNamedBuffer = (PFNGLMAPNAMEDBUFFERPROC)wglGetProcAddress("glMapNamedBuffer");
	glMapNamedBufferRange = (PFNGLMAPNAMEDBUFFERRANGEPROC)wglGetProcAddress("glMapNamedBufferRange");
	glUnmapNamedBuffer = (PFNGLUNMAPNAMEDBUFFERPROC)wglGetProcAddress("glUnmapNamedBuffer");
	glFlushMappedNamedBufferRange = (PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC)wglGetProcAddress("glFlushMappedNamedBufferRange");
	glGetNamedBufferParameteriv = (PFNGLGETNAMEDBUFFERPARAMETERIVPROC)wglGetProcAddress("glGetNamedBufferParameteriv");
	glGetNamedBufferParameteri64v = (PFNGLGETNAMEDBUFFERPARAMETERI64VPROC)wglGetProcAddress("glGetNamedBufferParameteri64v");
	glGetNamedBufferPointerv = (PFNGLGETNAMEDBUFFERPOINTERVPROC)wglGetProcAddress("glGetNamedBufferPointerv");
	glGetNamedBufferSubData = (PFNGLGETNAMEDBUFFERSUBDATAPROC)wglGetProcAddress("glGetNamedBufferSubData");

	glCreateFramebuffers = (PFNGLCREATEFRAMEBUFFERSPROC)wglGetProcAddress("glCreateFramebuffers");
	glNamedFramebufferRenderbuffer = (PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC)wglGetProcAddress("glNamedFramebufferRenderbuffer");
	glNamedFramebufferParameteri = (PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC)wglGetProcAddress("glNamedFramebufferParameteri");
	glNamedFramebufferTexture = (PFNGLNAMEDFRAMEBUFFERTEXTUREPROC)wglGetProcAddress("glNamedFramebufferTexture");
	glNamedFramebufferTextureLayer = (PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC)wglGetProcAddress("glNamedFramebufferTextureLayer");
	glNamedFramebufferDrawBuffer = (PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC)wglGetProcAddress("glNamedFramebufferDrawBuffer");
	glNamedFramebufferDrawBuffers = (PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC)wglGetProcAddress("glNamedFramebufferDrawBuffers");
	glNamedFramebufferReadBuffer = (PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC)wglGetProcAddress("glNamedFramebufferReadBuffer");
	glInvalidateNamedFramebufferData = (PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC)wglGetProcAddress("glInvalidateNamedFramebufferData");
	glInvalidateNamedFramebufferSubData = (PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC)wglGetProcAddress("glInvalidateNamedFramebufferSubData");
	glClearNamedFramebufferiv = (PFNGLCLEARNAMEDFRAMEBUFFERIVPROC)wglGetProcAddress("glClearNamedFramebufferiv");
	glClearNamedFramebufferuiv = (PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC)wglGetProcAddress("glClearNamedFramebufferuiv");
	glClearNamedFramebufferfv = (PFNGLCLEARNAMEDFRAMEBUFFERFVPROC)wglGetProcAddress("glClearNamedFramebufferfv");
	glClearNamedFramebufferfi = (PFNGLCLEARNAMEDFRAMEBUFFERFIPROC)wglGetProcAddress("glClearNamedFramebufferfi");
	glBlitNamedFramebuffer = (PFNGLBLITNAMEDFRAMEBUFFERPROC)wglGetProcAddress("glBlitNamedFramebuffer");
	glCheckNamedFramebufferStatus = (PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC)wglGetProcAddress("glCheckNamedFramebufferStatus");
	glGetNamedFramebufferParameteriv = (PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC)wglGetProcAddress("glGetNamedFramebufferParameteriv");
	glGetNamedFramebufferAttachmentParameteriv = (PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC)wglGetProcAddress("glGetNamedFramebufferAttachmentParameteriv");

	glCreateRenderbuffers = (PFNGLCREATERENDERBUFFERSPROC)wglGetProcAddress("glCreateRenderbuffers");
	glNamedRenderbufferStorage = (PFNGLNAMEDRENDERBUFFERSTORAGEPROC)wglGetProcAddress("glNamedRenderbufferStorage");
	glNamedRenderbufferStorageMultisample = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC)wglGetProcAddress("glNamedRenderbufferStorageMultisample");
	glGetNamedRenderbufferParameteriv = (PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC)wglGetProcAddress("glGetNamedRenderbufferParameteriv");

	glCreateTextures = (PFNGLCREATETEXTURESPROC)wglGetProcAddress("glCreateTextures");
	glTextureBuffer = (PFNGLTEXTUREBUFFERPROC)wglGetProcAddress("glTextureBuffer");
	glTextureBufferRange = (PFNGLTEXTUREBUFFERRANGEPROC)wglGetProcAddress("glTextureBufferRange");
	glTextureStorage1D = (PFNGLTEXTURESTORAGE1DPROC)wglGetProcAddress("glTextureStorage1D");
	glTextureStorage2D = (PFNGLTEXTURESTORAGE2DPROC)wglGetProcAddress("glTextureStorage2D");
	glTextureStorage3D = (PFNGLTEXTURESTORAGE3DPROC)wglGetProcAddress("glTextureStorage3D");
	glTextureStorage2DMultisample = (PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC)wglGetProcAddress("glTextureStorage2DMultisample");
	glTextureStorage3DMultisample = (PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC)wglGetProcAddress("glTextureStorage3DMultisample");
	glTextureSubImage1D = (PFNGLTEXTURESUBIMAGE1DPROC)wglGetProcAddress("glTextureSubImage1D");
	glTextureSubImage2D = (PFNGLTEXTURESUBIMAGE2DPROC)wglGetProcAddress("glTextureSubImage2D");
	glTextureSubImage3D = (PFNGLTEXTURESUBIMAGE3DPROC)wglGetProcAddress("glTextureSubImage3D");
	glCopyTextureSubImage1D = (PFNGLCOPYTEXTURESUBIMAGE1DPROC)wglGetProcAddress("glCopyTextureSubImage1D");
	glCopyTextureSubImage2D = (PFNGLCOPYTEXTURESUBIMAGE2DPROC)wglGetProcAddress("glCopyTextureSubImage2D");
	glCopyTextureSubImage3D = (PFNGLCOPYTEXTURESUBIMAGE3DPROC)wglGetProcAddress("glCopyTextureSubImage3D");
	glBindTextureUnit = (PFNGLBINDTEXTUREUNITPROC)wglGetProcAddress("glBindTextureUnit");
	glGetTextureImage = (PFNGLGETTEXTUREIMAGEPROC)wglGetProcAddress("glGetTextureImage");

	glCreateVertexArrays = (PFNGLCREATEVERTEXARRAYSPROC)wglGetProcAddress("glCreateVertexArrays");
	glDisableVertexArrayAttrib = (PFNGLDISABLEVERTEXARRAYATTRIBPROC)wglGetProcAddress("glDisableVertexArrayAttrib");
	glEnableVertexArrayAttrib = (PFNGLENABLEVERTEXARRAYATTRIBPROC)wglGetProcAddress("glEnableVertexArrayAttrib");
	glVertexArrayElementBuffer = (PFNGLVERTEXARRAYELEMENTBUFFERPROC)wglGetProcAddress("glVertexArrayElementBuffer");
	glVertexArrayVertexBuffer = (PFNGLVERTEXARRAYVERTEXBUFFERPROC)wglGetProcAddress("glVertexArrayVertexBuffer");
	glVertexArrayVertexBuffers = (PFNGLVERTEXARRAYVERTEXBUFFERSPROC)wglGetProcAddress("glVertexArrayVertexBuffers");
	glVertexArrayAttribBinding = (PFNGLVERTEXARRAYATTRIBBINDINGPROC)wglGetProcAddress("glVertexArrayAttribBinding");
	glVertexArrayAttribFormat = (PFNGLVERTEXARRAYATTRIBFORMATPROC)wglGetProcAddress("glVertexArrayAttribFormat");
	glGetVertexArrayiv = (PFNGLGETVERTEXARRAYIVPROC)wglGetProcAddress("glGetVertexArrayiv");

	glCreateSamplers = (PFNGLCREATESAMPLERSPROC)wglGetProcAddress("glCreateSamplers");

	glCreateProgramPipelines = (PFNGLCREATEPROGRAMPIPELINESPROC)wglGetProcAddress("glCreateProgramPipelines");

	glCreateQueries = (PFNGLCREATEQUERIESPROC)wglGetProcAddress("glCreateQueries");

	glGetGraphicsResetStatus = (PFNGLGETGRAPHICSRESETSTATUSPROC)wglGetProcAddress("glGetGraphicsResetStatus");


	printf("Get Procs GL4.6 (all 4 functions are skipped.)\n");


	printf("Get Procs [wglChoosePixelFormatARB]\n");
	wglChoosePixelFormatARB = (PFNWGLCHOOSEPIXELFORMATARBPROC)wglGetProcAddress("wglChoosePixelFormatARB");
	if (wglChoosePixelFormatARB == NULL)
	{printf("wglChoosePixelFormatARB fail...");}

	wglCreateContextAttribsARB = (PFNWGLCREATECONTEXTATTRIBSARBPROC)wglGetProcAddress("wglCreateContextAttribsARB");
	if(wglCreateContextAttribsARB == NULL)
	{ printf("wglCreateContextAttribsARB fail..."); }

	// delete dummy context
	wglMakeCurrent(NULL, NULL);
	wglDeleteContext(dummy_glContext);
}



void gl_simple::create_context_from(HWND glWnd)
{
	// create main OpenGL context from window;
	OpenGL_HDC = GetDC(glWnd);

	// choose pixel format
	PIXELFORMATDESCRIPTOR void_pfd;
	const int pAttr[] = {
	WGL_DRAW_TO_WINDOW_ARB, GL_TRUE,
	WGL_SUPPORT_OPENGL_ARB, GL_TRUE,
	WGL_DOUBLE_BUFFER_ARB, GL_TRUE,
	WGL_PIXEL_TYPE_ARB, WGL_TYPE_RGBA_ARB,
	WGL_SAMPLE_BUFFERS_ARB, GL_TRUE,
	WGL_SAMPLES_ARB, 4, //2, 4, 8
	WGL_COLOR_BITS_ARB, 32,
	WGL_DEPTH_BITS_ARB, 16,
	WGL_STENCIL_BITS_ARB, 8,
	0,};

	static const int cAttr[] = {
	WGL_CONTEXT_MAJOR_VERSION_ARB, 4,
	WGL_CONTEXT_MINOR_VERSION_ARB, 6,
	WGL_CONTEXT_PROFILE_MASK_ARB, WGL_CONTEXT_CORE_PROFILE_BIT_ARB,
	0,
	};
	
	int pFormat;
	UINT numFormat;

	bool yn = wglChoosePixelFormatARB(
		OpenGL_HDC,		// device context of passed window
		pAttr,			// attribute
		NULL,			// float attribute
		1,				// the number of format which will be returned
		&pFormat,		// container for returned format
		&numFormat      // the actual number of returned format
		);     

	printf("wglChoosePixelFormat yn[%d], num[%d]\n", yn, numFormat);
	
	if (!yn)
	{
		printf("wglChoosePixelFormat fail... return\n");
		return;
	}


	// set pixel format to context
	SetPixelFormat(OpenGL_HDC, pFormat, &void_pfd);

	// create opengl context
	OpenGL_RC = wglCreateContextAttribsARB(
	 OpenGL_HDC, NULL, cAttr);

	if (OpenGL_RC == NULL)
	{
		printf("creating OpenGL context fail... return\n");
		return;
	}

	// make OpenGL context current
	wglMakeCurrent(OpenGL_HDC, OpenGL_RC);

	printf("VERSION : %s\n", glGetString(GL_VERSION));
	printf("RENDERER : %s\n", glGetString(GL_RENDERER));
	printf("GLSL : %s\n", glGetString(GL_SHADING_LANGUAGE_VERSION));

	int tempVal;
	glGetIntegerv(GL_MAX_VERTEX_ATTRIBS, &tempVal);
	printf("max_vertex_attribs %d\n", tempVal);

	glGetIntegerv(GL_MAX_VERTEX_ATTRIB_BINDINGS, &tempVal);
	printf("max_vertex_attrib_bindings %d\n", tempVal);

	glGetIntegerv(GL_MAX_VARYING_VECTORS, &tempVal);
	printf("max_varying_vectors %d\n", tempVal);

	glGetIntegerv(GL_MAX_VERTEX_UNIFORM_VECTORS, &tempVal);
	printf("max_vertex_uniform_vectors %d\n", tempVal);

	glGetIntegerv(GL_MAX_FRAGMENT_UNIFORM_VECTORS, &tempVal);
	printf("max_fragment_uniform_vectors %d\n", tempVal);

	glGetIntegerv(GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS, &tempVal);
	printf("max_vertex_texture_image_units %d\n", tempVal);

	glGetIntegerv(GL_MAX_TEXTURE_IMAGE_UNITS, &tempVal);
	printf("max_texture_image_units %d\n", tempVal);

	glGetIntegerv(GL_MAX_TEXTURE_SIZE, &tempVal);
	printf("max_texture_size %d\n", tempVal);

	GLint tempSize[2];
	glGetIntegerv(GL_MAX_VIEWPORT_DIMS, tempSize);
	printf("max_viewport_size %d %d\n", tempSize[0], tempSize[1]);


	//************************************
	// set initial status
	//************************************

	// depth test
	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LESS);

	// blend
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	// cull face
	//glEnable(GL_CULL_FACE);
	//glCullFace(GL_BACK);

	// multisample
	glEnable(GL_MULTISAMPLE);
	glEnable(GL_SAMPLE_ALPHA_TO_COVERAGE);

	// polygon smooth
	glDisable(GL_POLYGON_SMOOTH);

	// program point size
	glEnable(GL_PROGRAM_POINT_SIZE);

	//***************************************


	// test buffer clear
	glClearColor(1.0, 1.0, 0.0, 1.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	SwapBuffers(OpenGL_HDC);
}



// utility functions

void gl_simple::loadShaderSource_And_Compile(const char* path, GLenum type, GLuint* toObj)
{
	//C++ file
	std::ifstream sFile;

	// file open
	sFile.open(path);

	if (!sFile)
	{
		printf("%s can't be opened.... return\n", path);
		return;
	}

	//***********************************************

	// set file position to end
	sFile.seekg(0, std::ios::end);

	// get file length
	unsigned long fLength = sFile.tellg();

	if (fLength == 0)
	{
		printf("shader file length zero... return\n");
		sFile.close();
		return;
	}
	else
	{
		printf("shader file length:%d\n", fLength);
	}


	// reset file position
	sFile.seekg(std::ios::beg);

	//***********************************************

	// create char array for source
	GLchar* sourceArray = new char[fLength + 1];

	// set terminate zero
	sourceArray[fLength] = 0;

	// read source string
	int INDEX = 0;
	while (sFile.good())
	{
		sourceArray[INDEX] = sFile.get();

		if (!sFile.eof())
		{
			INDEX++;
		}
	}


	// set terminate zero
	sourceArray[INDEX] = 0;

	// close file
	sFile.close();

	//***********************************************

	// create shader object
	//GL_VERTEX_SHADER
	//GL_GEOMETRY_SHADER
	//GL_FRAGMENT_SHADER
	//GL_COMPUTE_SHADER
	// ... tesselation
	*toObj = glCreateShader(type);

	if (*toObj == 0)
	{
		printf("create shader %x fail... return\n", type);
		return;
	}

	//****************************************

	// supply shader source
	glShaderSource(*toObj, 1, (const GLchar**)&sourceArray, NULL);

	// compile shader
	glCompileShader(*toObj);

	//***********************************************

	// error check
	GLint logLength;
	glGetShaderiv(*toObj, GL_INFO_LOG_LENGTH, &logLength);

	if (logLength > 1)
	{
		GLchar* log = (GLchar*)malloc(logLength);
		glGetShaderInfoLog(*toObj, logLength, &logLength, log);
		printf("%s fompile error %d\n%s\n", path, logLength, log);
		free(log);
	}
	else
	{
		GLint sType;
		glGetShaderiv(*toObj, GL_SHADER_TYPE, &sType);
		printf("%s compile success! type:[%x]\n", path, sType);
	}

	//***********************************************

	delete[] sourceArray;

}


void gl_simple::createProgram_And_AttachShader(GLuint* prgPtr, GLuint* vsPtr, GLuint* gsPtr, GLuint* fsPtr)
{
	// create program
	*prgPtr = glCreateProgram();

	// attach shader
	if (vsPtr != NULL) { glAttachShader(*prgPtr, *vsPtr); }
	if (gsPtr != NULL) { glAttachShader(*prgPtr, *gsPtr); }
	if (fsPtr != NULL) { glAttachShader(*prgPtr, *fsPtr); }

	// link shaders in program object
	glLinkProgram(*prgPtr);
	GLint status;
	glGetProgramiv(*prgPtr, GL_LINK_STATUS, &status);
	if (status == GL_TRUE)
	{
		printf("program object link success!\n");
	}
	else
	{
		GLint logLen;
		glGetProgramiv(*prgPtr, GL_INFO_LOG_LENGTH, &logLen);
		
		GLchar* log = (GLchar*)malloc(logLen);
		glGetProgramInfoLog(*prgPtr, logLen, &logLen, log);
		printf("program link error :\n%s\n", log);
		free(log);
	}
}

void gl_simple::getUniformLocation(GLuint* prgPtr, GLint* unfPtr, const char* unfName)
{
	*unfPtr = glGetUniformLocation(*prgPtr, unfName);
	printf("PRG:%d, [%s], %d\n", *prgPtr, unfName, *unfPtr);
}



// program pipeline function
void gl_simple::createSeparateShaderProgram(const char* path, GLenum type, GLuint* toPRG)
{
	// open source code
		//C++ file
	std::ifstream sFile;

	// file open
	sFile.open(path);

	if (!sFile)
	{
		printf("%s can't be opened.... return\n", path);
		return;
	}

	//***********************************************

	// set file position to end
	sFile.seekg(0, std::ios::end);

	// get file length
	unsigned long fLength = sFile.tellg();

	if (fLength == 0)
	{
		printf("shader file length zero... return\n");
		sFile.close();
		return;
	}
	else
	{
		printf("shader file length:%d\n", fLength);
	}


	// reset file position
	sFile.seekg(std::ios::beg);

	//***********************************************

	// create char array for source
	GLchar* sourceArray = new char[fLength + 1];

	// set terminate zero
	sourceArray[fLength] = 0;

	// read source string
	int INDEX = 0;
	while (sFile.good())
	{
		sourceArray[INDEX] = sFile.get();

		if (!sFile.eof())
		{
			INDEX++;
		}
	}


	// set terminate zero
	sourceArray[INDEX] = 0;

	// close file
	sFile.close();

	//*********************************************
	//*********************************************
	//*********************************************

	// create separate shader program
	*toPRG = glCreateShaderProgramv(type, 1, (const GLchar**)&sourceArray);
	
	// check log
	GLint status;
	glGetProgramiv(*toPRG, GL_LINK_STATUS, &status);

	// it's equivalent to
	// glCreateShader(vertex, fragment....)
	// glShaderSource(...)
	// glCompileShader(shobj);
	// glCreateProgram();
	// glProgramParameteri( set to SEPARABLE )
	// glAttachShader( to PRGobj )
	// glLinkProgram( PRGobj)
	// glDetachShader( from PRGobj )
	// glDeleteShader();

	if (status == GL_TRUE)
	{
		printf("Create Shader Program link OK[%s], %d\n", path, *toPRG);
	}
	else
	{
		GLint logLen;
		glGetProgramiv(*toPRG, GL_INFO_LOG_LENGTH, &logLen);

		GLchar* log = (GLchar*)malloc(logLen);
		glGetProgramInfoLog(*toPRG, logLen, &logLen, log);
		printf("program link error :\n%s\n", log);
		free(log);
	}

	delete[] sourceArray;

}




