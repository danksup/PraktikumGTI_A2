#define GL_SILENCE_DEPRECATION //buat hilangin deprecation warning di xcode (macOS)
#include <GLUT/glut.h>
#include <math.h>
#define PI 3.1415926535898
#define radius  0.1

GLint circle_points = 100;
int i;
float angle;



void mobil(void){
    glClear(GL_COLOR_BUFFER_BIT);

    //background
    glPushMatrix();
    glLineWidth(2.0f);
    
    glBegin(GL_QUADS);
    
    glColor3f(0, 1, 0);
    glVertex3f(-1, -.3, 0);
    glVertex3f(1, -.3, 0);
    glVertex3f(1, -1, 0);
    glVertex3f(-1, -1, 0);

    glEnd();
    glPopMatrix();
    
    
    //jalan
    glPushMatrix();
    glLineWidth(2.0f);
    
    glBegin(GL_QUADS);
    
    glColor3f(0.3f, 0.3f, 0.3f);
    glVertex3f(-1, -.3, 0);
    glVertex3f(1, -.3, 0);
    glVertex3f(1, -0.45, 0);
    glVertex3f(-1, -0.45, 0);

    glEnd();
    glPopMatrix();
    
    //badan mobil
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.8f, 0.2f, 0.2f);
    glVertex3f(-.3f, -.1f, .0f);
    glVertex3f(-.55f, -.12f, .0f);
    glVertex3f(-.57f, -.3f, .0f);
    glVertex3f(.65f, -.3f, .0f);
    glVertex3f(.6f, -.1f, .0f);
    glVertex3f(.25f, -.1f, .0f);
    glEnd();
    glPopMatrix();
    
    //jendela
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.7f, 0.9f, 1.0f);
    
    //depan
    glVertex3f(-0.25f, -0.1f, 0.0f);
    glVertex3f( 0.0f, 0.08f, 0.0f);
    glVertex3f( 0.23f, 0.08f, 0.0f);
    glVertex3f( 0.23f, -0.1f, 0.0f);
    
   //beakang
    glVertex3f( 0.27f, -0.1f, 0.0f);
    glVertex3f( 0.27f, 0.08f, 0.0f);
    glVertex3f( 0.43f, 0.08f, 0.0f);
    glVertex3f( 0.52f, -0.1f, 0.0f);
    glEnd();
    glPopMatrix();
    
    //kerangka mobil
    glPushMatrix();
    glLineWidth(2.0f);
    
    glBegin(GL_LINE_STRIP);
    glColor3f(.2f, .1f, .4f);
    
    //top
    glVertex3f(-.3f, -.1f, .0f);
    glVertex3f(.0f, .1f, .0f);
    glVertex3f(.25f, .1f, .0f);

    glVertex3f(.25f, -.1f, .0f);
    
    glVertex3f(.54f, -.1f, .0f);
    glVertex3f(.45f, .1f, .0f);
    
    glVertex3f(.25f, .1f, .0f);
    glVertex3f(.25f, -.1f, .0f);
    glVertex3f(-.3f, -.1f, .0f);
    
    //bawah
    glVertex3f(-.55f, -.12f, .0f);
    glVertex3f(-.57f, -.3f, .0f);
    glVertex3f(.65f, -.3f, .0f);
    glVertex3f(.6f, -.1f, .0f);
    glVertex3f(.25f, -.1f, .0f);
    
    glEnd();
    glPopMatrix();
    
    //roda depan
    glPushMatrix();
    
    glTranslatef(-.3f, -.3f, .0f);
    glBegin(GL_POLYGON);
    glColor3f(0.15f, 0.15f, 0.15f);
    
    for (i = 0; i < circle_points; i++) {
        angle = 2 * PI * i / circle_points;
        glVertex2f(cos(angle) * radius, sin(angle) * radius);
    }

    glEnd();
    glPopMatrix();
    
    //roda belakang
    glPushMatrix();
    
    glTranslatef(.3f, -.3f, .0f);
    glBegin(GL_POLYGON);
    glColor3f(0.15f, 0.15f, 0.15f);
    
    for (i = 0; i < circle_points; i++) {
        angle = 2 * PI * i / circle_points;
        glVertex2f(cos(angle) * radius, sin(angle) * radius);
    }

    glEnd();
    glPopMatrix();
    
    //headlight
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.6f);
    glVertex3f(-0.55f, -0.15f, 0.0f);
    glVertex3f(-0.52f, -0.15f, 0.0f);
    glVertex3f(-0.52f, -0.22f, 0.0f);
    glVertex3f(-0.56f, -0.22f, 0.0f);
    glEnd();
    glPopMatrix();

    //lampu merah belaknga
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.6f, 0.0f, 0.0f);
    glVertex3f( 0.61f, -0.15f, 0.0f);
    glVertex3f( 0.64f, -0.15f, 0.0f);
    glVertex3f( 0.65f, -0.22f, 0.0f);
    glVertex3f( 0.62f, -0.22f, 0.0f);
    glEnd();
    glPopMatrix();
    
    //awan1
    glPushMatrix();
    glColor3f(1.0f, 1.0f, 1.0f);
    glTranslatef(-.4f, 0, 0);
    glBegin(GL_QUADS);
    
    glVertex3f(-0.4f, 0.5f, 0.0f);
    glVertex3f( 0.4f, 0.5f, 0.0f);
    glVertex3f( 0.4f, 0.6f, 0.0f);
    glVertex3f(-0.4f, 0.6f, 0.0f);

    glVertex3f(-0.2f, 0.6f, 0.0f);
    glVertex3f( 0.3f, 0.6f, 0.0f);
    glVertex3f( 0.3f, 0.7f, 0.0f);
    glVertex3f(-0.2f, 0.7f, 0.0f);

    glVertex3f( 0.0f, 0.7f, 0.0f);
    glVertex3f( 0.2f, 0.7f, 0.0f);
    glVertex3f( 0.2f, 0.8f, 0.0f);
    glVertex3f( 0.0f, 0.8f, 0.0f);

    glEnd();
    glPopMatrix();
    
    //awan2
    glPushMatrix();
    glColor3f(1.0f, 1.0f, 1.0f);
    glTranslatef(.95f, 0, 0);
    glBegin(GL_QUADS);
    
    glVertex3f(-0.75f, 0.60f, 0.0f);
    glVertex3f(-0.25f, 0.60f, 0.0f);
    glVertex3f(-0.25f, 0.68f, 0.0f);
    glVertex3f(-0.75f, 0.68f, 0.0f);


    glVertex3f(-0.60f, 0.68f, 0.0f);
    glVertex3f(-0.30f, 0.68f, 0.0f);
    glVertex3f(-0.30f, 0.76f, 0.0f);
    glVertex3f(-0.60f, 0.76f, 0.0f);


    glVertex3f(-0.50f, 0.76f, 0.0f);
    glVertex3f(-0.35f, 0.76f, 0.0f);
    glVertex3f(-0.35f, 0.84f, 0.0f);
    glVertex3f(-0.50f, 0.84f, 0.0f);

    glEnd();
    glPopMatrix();
    
    //matahari
    glPushMatrix();
    
    glTranslatef(.0f, .8f, .0f);
    glBegin(GL_POLYGON);
    glColor3f(0.99f, 0.85f, 0.15f);
    
    for (i = 0; i < circle_points; i++) {
        angle = 2 * PI * i / circle_points;
        glVertex2f(cos(angle) * radius/1.5, sin(angle) * radius/1.5);
    }

    glEnd();
    glPopMatrix();
    
    //pohon
    glPushMatrix();
    glTranslatef(-0.7f, -0.3f, 0.0f);

    //batang
    glBegin(GL_QUADS);
    glColor3f(0.4f, 0.2f, 0.0f);
    glVertex3f(-0.02f, 0.0f, 0.0f);
    glVertex3f( 0.02f, 0.0f, 0.0f);
    glVertex3f( 0.02f, 0.2f, 0.0f);
    glVertex3f(-0.02f, 0.2f, 0.0f);
    glEnd();

    //daun
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex3f(-0.1f, 0.2f, 0.0f);
    glVertex3f( 0.1f, 0.2f, 0.0f);
    glVertex3f( 0.1f, 0.45f, 0.0f);
    glVertex3f(-0.1f, 0.45f, 0.0f);
    glEnd();

    glPopMatrix();



//marka
    glPushMatrix();
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_QUADS);
    
    glVertex3f(-0.8f, -0.36f, 0.0f);
    glVertex3f(-0.5f, -0.36f, 0.0f);
    glVertex3f(-0.5f, -0.38f, 0.0f);
    glVertex3f(-0.8f, -0.38f, 0.0f);

    glVertex3f(-0.15f, -0.36f, 0.0f);
    glVertex3f( 0.15f, -0.36f, 0.0f);
    glVertex3f( 0.15f, -0.38f, 0.0f);
    glVertex3f(-0.15f, -0.38f, 0.0f);

    glVertex3f( 0.5f, -0.36f, 0.0f);
    glVertex3f( 0.8f, -0.36f, 0.0f);
    glVertex3f( 0.8f, -0.38f, 0.0f);
    glVertex3f( 0.5f, -0.38f, 0.0f);

    glEnd();
    glPopMatrix();

//pohon2
    glPushMatrix();
    glTranslatef(.8f, -0.5f, 0.0f);

    //batang
    glBegin(GL_QUADS);
    glColor3f(0.4f, 0.2f, 0.0f);
    glVertex3f(-0.02f, 0.0f, 0.0f);
    glVertex3f( 0.02f, 0.0f, 0.0f);
    glVertex3f( 0.02f, 0.2f, 0.0f);
    glVertex3f(-0.02f, 0.2f, 0.0f);
    glEnd();

    //daun
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex3f(-0.1f, 0.2f, 0.0f);
    glVertex3f( 0.1f, 0.2f, 0.0f);
    glVertex3f( 0.1f, 0.45f, 0.0f);
    glVertex3f(-0.1f, 0.45f, 0.0f);
    glEnd();

    glPopMatrix();
    
    //anjing
    glPushMatrix();
    glTranslatef(-0.85f, -0.3f, 0.0f);
    
    glBegin(GL_QUADS);
    glColor3f(0.5f, 0.35f, 0.05f);
    
    //badan
    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(0.12f, 0.0f, 0.0f);
    glVertex3f(0.12f, 0.15f, 0.0f);
    glVertex3f(0.0f, 0.15f, 0.0f);
    
    //kepala
    glVertex3f(0.08f, 0.12f, 0.0f);
    glVertex3f(0.18f, 0.12f, 0.0f);
    glVertex3f(0.18f, 0.22f, 0.0f);
    glVertex3f(0.08f, 0.22f, 0.0f);
    
    //ekor
    glVertex3f(-0.04f, 0.08f, 0.0f);
    glVertex3f(0.0f, 0.08f, 0.0f);
    glVertex3f(0.0f, 0.12f, 0.0f);
    glVertex3f(-0.04f, 0.12f, 0.0f);

    //mata
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex3f(0.14f, 0.18f, 0.0f);
    glVertex3f(0.16f, 0.18f, 0.0f);
    glVertex3f(0.16f, 0.20f, 0.0f);
    glVertex3f(0.14f, 0.20f, 0.0f);
    
    glEnd();
    glPopMatrix();
    
    glFlush();
    }

int main(int argc, char* argv[]){
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Agung Rama Pramana Putra - 24060124120007");
    glutDisplayFunc(mobil);
    glClearColor(.53f, .81f,  1.0f, 1);
    glutMainLoop();
    return 0;
}
