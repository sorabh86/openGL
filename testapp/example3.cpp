#include <windows.h>
#include <gl/glut.h>
#include <math.h>

void drawCircle(float x, float y, float rx, float ry){
    float PI = 3.14;
    glBegin(GL_LINE_LOOP);

    for(int i =0; i <= 300; i++)
    {
        float radius = 0.4;
        double angle = 2 * PI * i / 300;
        double xPos = rx * cos(angle);
        double yPos = ry * sin(angle);
        glVertex2f(x + xPos, y + yPos);
    }
    glEnd();
}

void init(void)
{
    glClearColor(1.0,1.0,1.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0,100,0,100,-1.0,1.0);
}

void draw(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0,0,0);
    drawCircle(20,20,20,20);

    glBegin(GL_LINE_LOOP);
        glVertex2f(40, 0);
        glVertex2f(40, 40);
        glVertex2f(90, 40);
        glVertex2f(90, 0);
    glEnd();
    glFlush();

    glBegin(GL_LINE_LOOP);
        glVertex2f(60, 0);
        glVertex2f(60, 39);
        glVertex2f(70, 39);
        glVertex2f(70, 0);
    glEnd();
    glFlush();

    glBegin(GL_LINE_LOOP);
        glVertex2i(40,40);
        glVertex2i(65, 100);
        glVertex2i(90, 40);
    glEnd();
    glFlush();

    drawCircle(65, 57, 17, 17);

    glutSwapBuffers();
}

int main(int argc, char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(50,50);
    glutCreateWindow("Draw Hard Wire House");
    init();
    glutDisplayFunc(draw);
    glutMainLoop();
    return 0;
}



