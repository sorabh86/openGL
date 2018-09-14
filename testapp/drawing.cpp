#include <GL/glut.h>
#include "drawing.h"

int gridX, gridY;

void initGrid(int x, int y)
{
    gridX = x;
    gridY = y;
}

void drawGrid()
{

}

void drawRect(int x, int y, int width, int height)
{
    //glRectf(-5.0, 5.0, 5.0, -5.0);
    glBegin(GL_LINE_LOOP);
        glColor3b(0.0,0.0,1.0);
        glVertex3f(-3.0,-3.0,0.0);
        glVertex3f(3.0,-3.0,0.0);
        glVertex3f(3.0,-3.0,0.0);
        glVertex3f(3.0,-3.0,0.0);
    glEnd();
}
