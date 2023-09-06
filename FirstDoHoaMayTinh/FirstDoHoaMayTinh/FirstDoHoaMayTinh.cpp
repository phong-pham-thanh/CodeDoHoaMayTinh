// FirstDoHoaMayTinh.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include<GL/glut.h>

using namespace std;

void abc() {
    glClearColor(255.0 / 255.0, 255.0 / 255.0, 0, 1);
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
        glVertex2f(-0.5, -0.5);
        glVertex2f(-0.5, 0.5);
        glVertex2f(0.5, 0.5);
        glVertex2f(0.5, -0.5);
    glEnd();
    glFlush();

}

int main()
{
    glutCreateWindow("123");
    glutDisplayFunc(abc);
    glutMainLoop();


    cout << "Hello World!\n";
}