#include <GL/gl.h>
#include <gl/glut.h>
#include <math.h>

void DrawCircle(float, float, float, int);
void DrawRectangle(float, float, float, float);

void Draw() {
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0, 0.0, 0.0);
    DrawCircle(0.5, 0.5, 0.3, 250);

    DrawRectangle(0.5, 0.5, 0.1, 0.1);
}

void DrawRectangle(float x, float y, float width, float height)
{
    glBegin(GL_QUADS);
      glColor3f (0.0, 0.0, 0.0);

      glVertex3f (x, y, 0.0);
      glVertex3f (width, y, 0.0);
      glVertex3f (width, height, 0.0);
      glVertex3f (x, height, 0.0);

    glEnd();

    glFlush();
}

void DrawCircle(float cx, float cy, float r, int num_segments)
{
    glBegin(GL_LINE_LOOP);
    for(int ii = 0; ii < num_segments; ii++)
    {
        float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

        float x = r * cosf(theta);//calculate the x component
        float y = r * sinf(theta);//calculate the y component

        glVertex2f(x + cx, y + cy);//output vertex

    }
    glEnd();
}


void Initialize() {
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

int main(int iArgc, char** cppArgv) {
    glutInit(&iArgc, cppArgv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(200, 200);
    glutCreateWindow("Draw Rectangle & Circle");

    Initialize();
    glutDisplayFunc(Draw);

//    glClear(GL_COLOR_BUFFER_BIT);


    glutMainLoop();
    return 0;

}
