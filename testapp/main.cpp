#include <GL/gl.h>
#include <GL/glut.h>
#include <stdio.h>
#include "drawing.h"

#define COLUMNS 40
#define ROWS 40

void display_callback();
void resize_callback(int, int);
void init();

int main( int argc, char **argv )
{
    glutInit(&argc, argv);
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_RGB );
    glutInitWindowPosition(10,10);
    glutInitWindowSize(600,600);
    glutCreateWindow("My First OpenGL App");
    glutDisplayFunc(display_callback);
    glutReshapeFunc(resize_callback);

    init();
    glutMainLoop();
    return 0;
}

void display_callback()
{
    glClear(GL_COLOR_BUFFER_BIT);
//    drawRect(0,0,10,10);
    //glBegin(gl_);


    glutSwapBuffers();
}

void resize_callback (int width, int height)
{
    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, COLUMNS, 0, ROWS, -1.0, 1.0);
    glMatrixMode(GL_MATRIX_MODE);
}

void init()
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
    initGrid(COLUMNS, ROWS);
}
