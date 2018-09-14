#include <windows.h>
#include <gl/glut.h>
#include <math.h>

#define PI 3.14

void drawCircle(){
    glBegin(GL_POLYGON);

    for(int i =0; i <= 300; i++)
    {
        float radius = 0.4;
        double angle = 2 * PI * i / 300;
        double x = radius * cos(angle);
        double y = radius * sin(angle);
        glVertex2f(0.5 + x, 0.5 + y);
    }
    glEnd();
}

void drawRect(){
    glRectf(0.4,0.4,0.6,0.6);
}

void init(void)
{
    glClearColor(1.0,1.0,1.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0,1.0,0.0,1.0,-1.0,1.0);
}

void draw(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0,0.6,0);
    drawCircle();
    glColor3f(0,0,1);
    drawRect();
    glutSwapBuffers();
}

int main(int argc, char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(320,320);
    glutInitWindowPosition(50,50);
    glutCreateWindow("Draw Rectangle & Circle");
    init();
    glutDisplayFunc(draw);
    glutMainLoop();
    return 0;
}

