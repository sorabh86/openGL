#include <GL/gl.h>
#include <GL/glut.h>

void display(void)
{
    glutSwapBuffers();
}

int main( int argc, char **argv )
{
    glutInit(&argc, argv);
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_RGB );
    // glutInitWindowPosition(10,10);
    glutInitWindowSize(600,600);
    glutCreateWindow("My First OpenGL App");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
