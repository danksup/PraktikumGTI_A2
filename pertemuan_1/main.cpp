#include <GLUT/glut.h>

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    // ── GL_POINTS ──────────────────────────────
    glPointSize(5);
    glBegin(GL_POINTS);
        glColor3f(1.0f, 1.0f, 0.0f);
        glVertex3f(-0.9f,  0.8f, 0.0f);
        glVertex3f(-0.7f,  0.8f, 0.0f);
        glVertex3f(-0.5f,  0.8f, 0.0f);
    glEnd();

    // ── GL_LINES ───────────────────────────────
    glBegin(GL_LINES);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex3f(-0.9f,  0.6f, 0.0f);
        glVertex3f(-0.5f,  0.6f, 0.0f);

        glVertex3f(-0.4f,  0.6f, 0.0f);
        glVertex3f(-0.1f,  0.6f, 0.0f);
    glEnd();

    // ── GL_LINE_STRIP ──────────────────────────
    glBegin(GL_LINE_STRIP);
        glColor3f(0.0f, 1.0f, 0.0f);
        glVertex3f(-0.9f,  0.4f, 0.0f);
        glVertex3f(-0.7f,  0.5f, 0.0f);
        glVertex3f(-0.5f,  0.3f, 0.0f);
        glVertex3f(-0.3f,  0.5f, 0.0f);
        glVertex3f(-0.1f,  0.4f, 0.0f);
    glEnd();

    // ── GL_LINE_LOOP ───────────────────────────
    glBegin(GL_LINE_LOOP);
        glColor3f(0.0f, 1.0f, 1.0f);
        glVertex3f( 0.1f,  0.5f, 0.0f);
        glVertex3f( 0.3f,  0.3f, 0.0f);
        glVertex3f( 0.5f,  0.5f, 0.0f);
        glVertex3f( 0.4f,  0.6f, 0.0f);
        glVertex3f( 0.2f,  0.6f, 0.0f);
    glEnd();

    // ── GL_TRIANGLE_FAN ────────────────────────
    glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0f, 0.5f, 0.0f);
        glVertex3f(-0.7f,  0.0f, 0.0f); // pusat
        glColor3f(1.0f, 1.0f, 0.0f);
        glVertex3f(-0.9f, -0.2f, 0.0f);
        glVertex3f(-0.8f,  0.2f, 0.0f);
        glVertex3f(-0.6f,  0.2f, 0.0f);
        glVertex3f(-0.5f, -0.2f, 0.0f);
    glEnd();

    // ── GL_TRIANGLE_STRIP ──────────────────────
    glBegin(GL_TRIANGLE_STRIP);
        glColor3f(0.5f, 0.0f, 1.0f);
        glVertex3f(-0.3f,  0.2f, 0.0f);
        glVertex3f(-0.3f, -0.2f, 0.0f);
        glVertex3f(-0.1f,  0.2f, 0.0f);
        glVertex3f(-0.1f, -0.2f, 0.0f);
        glVertex3f( 0.1f,  0.2f, 0.0f);
        glVertex3f( 0.1f, -0.2f, 0.0f);
    glEnd();

    // ── GL_QUADS ───────────────────────────────
    glBegin(GL_QUADS);
        glColor3f(1.0f, 0.0f, 1.0f);
        glVertex3f( 0.2f,  0.2f, 0.0f);
        glVertex3f( 0.4f,  0.2f, 0.0f);
        glVertex3f( 0.4f, -0.0f, 0.0f);
        glVertex3f( 0.2f, -0.0f, 0.0f);

        glColor3f(0.0f, 0.5f, 1.0f);
        glVertex3f( 0.5f,  0.2f, 0.0f);
        glVertex3f( 0.7f,  0.2f, 0.0f);
        glVertex3f( 0.7f, -0.0f, 0.0f);
        glVertex3f( 0.5f, -0.0f, 0.0f);
    glEnd();

    // ── GL_QUAD_STRIP ──────────────────────────
    glBegin(GL_QUAD_STRIP);
        glColor3f(1.0f, 0.8f, 0.2f);
        glVertex3f(-0.9f, -0.4f, 0.0f);
        glVertex3f(-0.9f, -0.7f, 0.0f);
        glVertex3f(-0.6f, -0.4f, 0.0f);
        glVertex3f(-0.6f, -0.7f, 0.0f);
        glVertex3f(-0.3f, -0.4f, 0.0f);
        glVertex3f(-0.3f, -0.7f, 0.0f);
        glVertex3f( 0.0f, -0.4f, 0.0f);
        glVertex3f( 0.0f, -0.7f, 0.0f);
    glEnd();

    glFlush();
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("GL Primitives");
    glutDisplayFunc(display);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glutMainLoop();

    return 0;
}
