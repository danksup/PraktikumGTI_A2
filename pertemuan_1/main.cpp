#include <GLUT/glut.h>


void Point(void)
{
    //membersihkan layar dan men-set dalam format warna
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(2);
    
    glBegin(GL_LINES);
    glColor3f(1.0f, 0.0f,  0.0f);
    glVertex3f(0.0, 0.0, 0.0);
    glColor3f(1.0f, 0.0f,  0.0f);
    glVertex3f(1.0, 0.0, 0.0);
    

    glEnd();
    
    glFlush();
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640,480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Titik");
    glutDisplayFunc(Point);
    glClearColor (0.0f, 0.0f, 1.0f, 1.0f);
    glutMainLoop();

    return 0;
}
