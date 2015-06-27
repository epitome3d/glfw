//========================================================================
// GLFW 3.1 - www.glfw.org
//------------------------------------------------------------------------
// Copyright (c) 2002-2006 Marcus Geelnard
// Copyright (c) 2006-2010 Camilla Berglund <elmindreda@elmindreda.org>
//
// This software is provided 'as-is', without any express or implied
// warranty. In no event will the authors be held liable for any damages
// arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it
// freely, subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented; you must not
//    claim that you wrote the original software. If you use this software
//    in a product, an acknowledgment in the product documentation would
//    be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such, and must not
//    be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source
//    distribution.
//
//========================================================================

#ifndef _sketch_internal_h_
#define _sketch_internal_h_

extern "C"
{

	typedef struct _GLFWwndconfig   _GLFWwndconfig;
	typedef struct _GLFWctxconfig   _GLFWctxconfig;
	typedef struct _GLFWfbconfig    _GLFWfbconfig;
	typedef struct _GLFWwindow      _GLFWwindow;
	typedef struct _GLFWlibrary     _GLFWlibrary;
	typedef struct _GLFWmonitor     _GLFWmonitor;
	typedef struct _GLFWcursor      _GLFWcursor;

	/*! @brief Window and context structure.
	 */
	struct _GLFWwindow
	{
		struct _GLFWwindow* next;

		// Window settings and state
		unsigned char           resizable;
		unsigned char           decorated;
		unsigned char           autoIconify;
		unsigned char           floating;
		unsigned char           closed;
		void*               userPointer;
		GLFWvidmode         videoMode;
		_GLFWmonitor*       monitor;
		_GLFWcursor*        cursor;

		void* _E3DWindow;
	};
}
#endif // _internal_h_
