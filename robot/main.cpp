#include <GL/glut.h>
float angle=0;
void hand()///關節1
{
    glPushMatrix();
        glScalef(0.5,0.1,0);
        glColor3f(1,0,0);
        glutSolidCube(1);
    glPopMatrix();
}
void hand1()///關節2
{
    glPushMatrix();
        glScalef(0.1,0.1,0);
        glColor3f(0.5,0.5,0.5);
        glutSolidCube(1);
    glPopMatrix();
}
void hand2()///關節3
{
    glPushMatrix();
        glScalef(0.3,0.1,0);
        glColor3f(0,0,1);
        glutSolidCube(1);
    glPopMatrix();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glPushMatrix();///身體
        glTranslatef(0,-0.5,0);
        glScalef(0.8,0.5,0);
        glColor3f(1,0.5,0);
        glutSolidCube(1);
    glPopMatrix();
    glPushMatrix();///頭
        glTranslatef(0,-0.25,0);
        glColor3f(1,0.5,0);
        glutSolidCube(0.5);
    glPopMatrix();
    glPushMatrix();///左眼
        glTranslatef(-0.1,-0.1,0);
        glColor3f(0,0,0);
        glutSolidCube(0.1);
    glPopMatrix();
    glPushMatrix();///右眼
        glTranslatef(0.1,-0.1,0);
        glColor3f(0,0,0);
        glutSolidCube(0.1);
    glPopMatrix();

    glPushMatrix();///右手
        glTranslatef(0.4,-0.25,0);
        glRotatef(angle,0,0,1);
        glTranslatef(0.15,0,0);
        hand2();
        glPushMatrix();
            glTranslatef(0.15,0,0);
            glRotatef(angle,0,0,1);
            glTranslatef(0.05,0,0);
            hand1();
            glPushMatrix();
                glTranslatef(0.05,0,0);
                glRotatef(angle,0,0,1);
                glTranslatef(0.25,0,0);
                hand();
            glPopMatrix();
        glPopMatrix();
    glPopMatrix();
     glPushMatrix();///左手
        glTranslatef(-0.4,-0.25,0);
        glRotatef(angle,0,0,1);
        glTranslatef(-0.15,0,0);
        hand2();
        glPushMatrix();
            glTranslatef(-0.15,0,0);
            glRotatef(angle,0,0,1);
            glTranslatef(-0.05,0,0);
            hand1();
            glPushMatrix();
                glTranslatef(-0.05,0,0);
                glRotatef(angle,0,0,1);
                glTranslatef(-0.25,0,0);
                hand();
            glPopMatrix();
        glPopMatrix();
    glPopMatrix();

    glutSwapBuffers();
    angle+=0.05;
}


int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("08160563 Good!");
    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutMainLoop();
}
