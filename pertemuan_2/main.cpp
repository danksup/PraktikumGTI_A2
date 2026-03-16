#include <GLUT/glut.h>

void segiEmpat(void){
    glClear(GL_COLOR_BUFFER_BIT);
    glTranslatef(-.50, .50, 0);
    glColor3f(1, 0, 0);
    glRectf(-.18, .18, .18, -.18);
    glFlush();
}

int main(int argc, char* argv[]){
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("segi empat");
    glutDisplayFunc(segiEmpat);
    glClearColor(.0f, .0f,  1, 1);
    glutMainLoop();
    return 0;
}
