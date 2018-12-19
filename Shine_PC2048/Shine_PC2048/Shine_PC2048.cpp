// Test_OpnGL.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "windows.h"
#include <gl/GL.h>
#include <gl/GLU.h>
#include <gl/glut.h>

void OnDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.0, 0.5);
	glVertex2f(-0.5, -0.5);
	glVertex2f(0.5, -0.5);
	glEnd();
	glFlush();
}

void OnFrame()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.0, 0.5);
	glVertex2f(-0.5, -0.5);
	glVertex2f(0.5, -0.5);
	glEnd();
	glFlush();
}

void OnInputData(unsigned char key, int x, int y) {}

int _tmain(int argc, _TCHAR* argv[])
{
	HWND hWndConsole = GetConsoleWindow();
	ShowWindow(hWndConsole, SW_HIDE);
	glutInitWindowSize(600, 500);
	glutInitWindowPosition(0,0);
	glutCreateWindow("OpenGL");
	glutDisplayFunc(OnDisplay);
	//glutKeyboardFunc()

	glutMainLoop();
	return 0;
}

