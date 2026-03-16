#include <GLUT/glut.h>

void segitiga(void){
    glClear(GL_COLOR_BUFFER_BIT);
    glTranslatef(-.50, .50, 0);
    glRotated(90.0, .0, .0, 1.0);
    
    glBegin(GL_TRIANGLES);
    glColor3f(1.0, .0f, .0f);
    glVertex3f(-0.05, -0.05, 0.00);
    glColor3f(.0, 1.0f, .0f);
    glVertex3f(0.15, -0.05, 0.00);
    glColor3f(.0, .0f, 1.0f);
    glVertex3f(-0.05, 0.05, 0.00);
    glEnd();
    
    glFlush();
}

int main(int argc, char* argv[]){
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("segi empat");
    glutDisplayFunc(segitiga);
    glClearColor(1.0f, .0f,  1, 1);
    glutMainLoop();
    return 0;
}
