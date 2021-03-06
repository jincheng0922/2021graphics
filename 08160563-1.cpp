#include <GL/glut.h>
#include <math.h>
static void display(void)
{

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
     glBegin(GL_POLYGON);
        glColor3ub(255,255,255);
        glVertex2f((0-156)/156.0,-(0-156)/156.0);
        glVertex2f((312-156)/156.0,-(0-156)/156.0);
        glVertex2f((312-156)/156.0,-(312-156)/156.0);
        glVertex2f((0-156)/156.0,-(312-156)/156.0);
    glEnd();
    glColor3ub(90,46,11);

    glBegin(GL_POLYGON);
    for(int i=0;i<30;i++){
        float a=3.1415926*2/30*i;
        glVertex2f(-0.03+0.42*cos(a),0.19+0.42*sin(a));
    }
    glEnd();
    glColor3ub(219,147,75);

    glBegin(GL_POLYGON);
    for(int i=0;i<30;i++){
        float a=3.1415926*2/30*i;
        glVertex2f(-0.03+0.4*cos(a),0.19+0.4*sin(a));
    }
    glEnd();
    glBegin(GL_POLYGON);
        glColor3ub(255,255,255);
        glVertex2f((122-156)/156.0,-(130-156)/156.0);
        glVertex2f((122-156)/156.0,-(156-156)/156.0);
        glVertex2f((125-156)/156.0,-(159-156)/156.0);
        glVertex2f((133-156)/156.0,-(161-156)/156.0);
        glVertex2f((144-156)/156.0,-(158-156)/156.0);
        glVertex2f((149-156)/156.0,-(153-156)/156.0);
        glVertex2f((153-156)/156.0,-(145-156)/156.0);
        glVertex2f((160-156)/156.0,-(144-156)/156.0);

        glVertex2f((166-156)/156.0,-(143-156)/156.0);
        glVertex2f((169-156)/156.0,-(141-156)/156.0);
        glVertex2f((173-156)/156.0,-(135-156)/156.0);
        glVertex2f((166-156)/156.0,-(137-156)/156.0);
        glVertex2f((164-156)/156.0,-(139-156)/156.0);
        glVertex2f((150-156)/156.0,-(139-156)/156.0);
        glVertex2f((140-156)/156.0,-(136-156)/156.0);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3ub(122,81,0);
        glVertex2f((130-156)/156.0,-(138-156)/156.0);
        glVertex2f((127-156)/156.0,-(144-156)/156.0);
        glVertex2f((128-156)/156.0,-(152-156)/156.0);
        glVertex2f((132-156)/156.0,-(155-156)/156.0);
        glVertex2f((140-156)/156.0,-(154-156)/156.0);
        glVertex2f((150-156)/156.0,-(142-156)/156.0);
        glVertex2f((140-156)/156.0,-(143-156)/156.0);
        glVertex2f((134-156)/156.0,-(140-156)/156.0);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3ub(255,255,255);
        glVertex2f((169-156)/156.0,-(139-156)/156.0);
        glVertex2f((164-156)/156.0,-(143-156)/156.0);
        glVertex2f((169-156)/156.0,-(147-156)/156.0);
        glVertex2f((169-156)/156.0,-(157-156)/156.0);
        glVertex2f((172-156)/156.0,-(163-156)/156.0);
        glVertex2f((179-156)/156.0,-(165-156)/156.0);
        glVertex2f((188-156)/156.0,-(163-156)/156.0);
        glVertex2f((195-156)/156.0,-(157-156)/156.0);
        glVertex2f((198-156)/156.0,-(143-156)/156.0);
        glVertex2f((188-156)/156.0,-(144-156)/156.0);
        glVertex2f((174-156)/156.0,-(143-156)/156.0);

    glEnd();
    glBegin(GL_POLYGON);
        glColor3ub(122,81,0);
        glVertex2f((173-156)/156.0,-(148-156)/156.0);
        glVertex2f((175-156)/156.0,-(156-156)/156.0);
        glVertex2f((177-156)/156.0,-(159-156)/156.0);
        glVertex2f((184-156)/156.0,-(158-156)/156.0);
        glVertex2f((189-156)/156.0,-(155-156)/156.0);
        glVertex2f((192-156)/156.0,-(149-156)/156.0);
        glVertex2f((189-156)/156.0,-(151-156)/156.0);
        glVertex2f((177-156)/156.0,-(150-156)/156.0);
    glEnd();


    glBegin(GL_POLYGON);
        glColor3ub(174,110,52);
        glVertex2f((129-156)/156.0,-(67-156)/156.0);
        glVertex2f((91-156)/156.0,-(59-156)/156.0);
        glVertex2f((87-156)/156.0,-(80-156)/156.0);
        glVertex2f((64-156)/156.0,-(81-156)/156.0);
        glVertex2f((78-156)/156.0,-(119-156)/156.0);
        glVertex2f((67-156)/156.0,-(143-156)/156.0);
        glVertex2f((93-156)/156.0,-(146-156)/156.0);
        glVertex2f((96-156)/156.0,-(139-156)/156.0);
        glVertex2f((130-156)/156.0,-(139-156)/156.0);
        glVertex2f((142-156)/156.0,-(120-156)/156.0);
        glVertex2f((136-156)/156.0,-(144-156)/156.0);
        glVertex2f((151-156)/156.0,-(144-156)/156.0);
        glVertex2f((173-156)/156.0,-(120-156)/156.0);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3ub(255,223,160);
        glVertex2f((126-156)/156.0,-(70-156)/156.0);
        glVertex2f((94-156)/156.0,-(62-156)/156.0);
        glVertex2f((90-156)/156.0,-(83-156)/156.0);
        glVertex2f((70-156)/156.0,-(84-156)/156.0);
        glVertex2f((84-156)/156.0,-(122-156)/156.0);
        glVertex2f((73-156)/156.0,-(140-156)/156.0);
        glVertex2f((90-156)/156.0,-(143-156)/156.0);
        glVertex2f((90-156)/156.0,-(136-156)/156.0);
        glVertex2f((127-156)/156.0,-(136-156)/156.0);
        glVertex2f((145-156)/156.0,-(117-156)/156.0);
        glVertex2f((139-156)/156.0,-(141-156)/156.0);
        glVertex2f((148-156)/156.0,-(141-156)/156.0);
        glVertex2f((167-156)/156.0,-(119-156)/156.0);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3ub(74,46,33);
        glVertex2f((120-156)/156.0,-(52-156)/156.0);
        glVertex2f((133-156)/156.0,-(49-156)/156.0);
        glVertex2f((165-156)/156.0,-(26-156)/156.0);
        glVertex2f((186-156)/156.0,-(21-156)/156.0);
        glVertex2f((202-156)/156.0,-(43-156)/156.0);
        glVertex2f((217-156)/156.0,-(44-156)/156.0);
        glVertex2f((224-156)/156.0,-(53-156)/156.0);
        glVertex2f((216-156)/156.0,-(101-156)/156.0);
        glVertex2f((229-156)/156.0,-(113-156)/156.0);
        glVertex2f((251-156)/156.0,-(126-156)/156.0);
        glVertex2f((267-156)/156.0,-(130-156)/156.0);
        glVertex2f((261-156)/156.0,-(142-156)/156.0);

        glVertex2f((248-156)/156.0,-(153-156)/156.0);
        glVertex2f((238-156)/156.0,-(155-156)/156.0);
        glVertex2f((195-156)/156.0,-(154-156)/156.0);
        glVertex2f((165-156)/156.0,-(129-156)/156.0);
        glVertex2f((144-156)/156.0,-(98-156)/156.0);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3ub(211,162,63);
        glVertex2f((126-156)/156.0,-(55-156)/156.0);
        glVertex2f((133-156)/156.0,-(52-156)/156.0);
        glVertex2f((165-156)/156.0,-(29-156)/156.0);
        glVertex2f((186-156)/156.0,-(24-156)/156.0);
        glVertex2f((199-156)/156.0,-(43-156)/156.0);
        glVertex2f((214-156)/156.0,-(47-156)/156.0);
        glVertex2f((221-156)/156.0,-(53-156)/156.0);
        glVertex2f((213-156)/156.0,-(101-156)/156.0);
        glVertex2f((229-156)/156.0,-(116-156)/156.0);
        glVertex2f((251-156)/156.0,-(129-156)/156.0);
        glVertex2f((261-156)/156.0,-(133-156)/156.0);
        glVertex2f((252-156)/156.0,-(145-156)/156.0);
        glVertex2f((242-156)/156.0,-(150-156)/156.0);
        glVertex2f((244-156)/156.0,-(149-156)/156.0);
        glVertex2f((237-156)/156.0,-(152-156)/156.0);
        glVertex2f((198-156)/156.0,-(151-156)/156.0);
        glVertex2f((168-156)/156.0,-(126-156)/156.0);
        glVertex2f((147-156)/156.0,-(95-156)/156.0);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3ub(174,110,52);
        glVertex2f((121-156)/156.0,-(107-156)/156.0);
        glVertex2f((85-156)/156.0,-(134-156)/156.0);
        glVertex2f((96-156)/156.0,-(139-156)/156.0);
        glVertex2f((130-156)/156.0,-(139-156)/156.0);

    glEnd();

    glBegin(GL_POLYGON);
        glColor3ub(255,223,160);
        glVertex2f((124-156)/156.0,-(107-156)/156.0);
        glVertex2f((91-156)/156.0,-(134-156)/156.0);
        glVertex2f((102-156)/156.0,-(136-156)/156.0);
        glVertex2f((129-156)/156.0,-(136-156)/156.0);

    glEnd();
    glBegin(GL_POLYGON);
        glColor3ub(174,110,52);
        glVertex2f((129-156)/156.0,-(67-156)/156.0);
        glVertex2f((91-156)/156.0,-(59-156)/156.0);
        glVertex2f((86-156)/156.0,-(89-156)/156.0);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3ub(255,223,160);
        glVertex2f((126-156)/156.0,-(70-156)/156.0);
        glVertex2f((94-156)/156.0,-(62-156)/156.0);
        glVertex2f((89-156)/156.0,-(90-156)/156.0);
    glEnd();
         glBegin(GL_POLYGON);
        glColor3ub(74,46,33);
        glVertex2f((89-156)/156.0,-(60-156)/156.0);
        glVertex2f((76-156)/156.0,-(41-156)/156.0);
        glVertex2f((75-156)/156.0,-(36-156)/156.0);
        glVertex2f((75-156)/156.0,-(28-156)/156.0);
        glVertex2f((78-156)/156.0,-(24-156)/156.0);
        glVertex2f((83-156)/156.0,-(21-156)/156.0);
        glVertex2f((88-156)/156.0,-(21-156)/156.0);
        glVertex2f((98-156)/156.0,-(24-156)/156.0);
        glVertex2f((113-156)/156.0,-(37-156)/156.0);
        glVertex2f((126-156)/156.0,-(52-156)/156.0);
        glVertex2f((133-156)/156.0,-(69-156)/156.0);

        glVertex2f((131-156)/156.0,-(73-156)/156.0);
        glVertex2f((122-156)/156.0,-(66-156)/156.0);
        glVertex2f((105-156)/156.0,-(59-156)/156.0);
        glVertex2f((98-156)/156.0,-(58-156)/156.0);
        glVertex2f((89-156)/156.0,-(60-156)/156.0);


    glEnd();
     glBegin(GL_POLYGON);
        glColor3ub(122,83,51);
        glVertex2f((90-156)/156.0,-(53-156)/156.0);
        glVertex2f((81-156)/156.0,-(39-156)/156.0);
        glVertex2f((80-156)/156.0,-(32-156)/156.0);
        glVertex2f((81-156)/156.0,-(28-156)/156.0);

        glVertex2f((82-156)/156.0,-(28-156)/156.0);
        glVertex2f((88-156)/156.0,-(27-156)/156.0);
        glVertex2f((94-156)/156.0,-(29-156)/156.0);
        glVertex2f((108-156)/156.0,-(39-156)/156.0);
        glVertex2f((121-156)/156.0,-(54-156)/156.0);
        glVertex2f((129-156)/156.0,-(67-156)/156.0);
        glVertex2f((121-156)/156.0,-(59-156)/156.0);
        glVertex2f((110-156)/156.0,-(55-156)/156.0);
        glVertex2f((98-156)/156.0,-(54-156)/156.0);
        glVertex2f((94-156)/156.0,-(53-156)/156.0);



    glEnd();
    glBegin(GL_POLYGON);
        glColor3ub(55,22,4);
        glVertex2f((142-156)/156.0,-(44-156)/156.0);
        glVertex2f((170-156)/156.0,-(71-156)/156.0);
        glVertex2f((200-156)/156.0,-(92-156)/156.0);
        glVertex2f((214-156)/156.0,-(98-156)/156.0);
        glVertex2f((217-156)/156.0,-(106-156)/156.0);
        glVertex2f((211-156)/156.0,-(116-156)/156.0);
        glVertex2f((190-156)/156.0,-(117-156)/156.0);
        glVertex2f((177-156)/156.0,-(112-156)/156.0);
        glVertex2f((168-156)/156.0,-(103-156)/156.0);
        glVertex2f((160-156)/156.0,-(94-156)/156.0);
        glVertex2f((148-156)/156.0,-(81-156)/156.0);
        glVertex2f((140-156)/156.0,-(68-156)/156.0);
        glVertex2f((135-156)/156.0,-(63-156)/156.0);
        glVertex2f((129-156)/156.0,-(53-156)/156.0);

    glEnd();
    glBegin(GL_POLYGON);
        glColor3ub(211,162,63);
        glVertex2f((142-156)/156.0,-(44-156)/156.0);
        glVertex2f((152-156)/156.0,-(61-156)/156.0);
        glVertex2f((160-156)/156.0,-(75-156)/156.0);
        glVertex2f((168-156)/156.0,-(85-156)/156.0);
        glVertex2f((175-156)/156.0,-(90-156)/156.0);
        glVertex2f((186-156)/156.0,-(98-156)/156.0);
        glVertex2f((196-156)/156.0,-(102-156)/156.0);
        glVertex2f((206-156)/156.0,-(103-156)/156.0);
        glVertex2f((210-156)/156.0,-(100-156)/156.0);
        glVertex2f((214-156)/156.0,-(96-156)/156.0);


    glEnd();
    glBegin(GL_POLYGON);
        glColor3ub(137,81,24);
        glVertex2f((135-156)/156.0,-(167-156)/156.0);
        glVertex2f((131-156)/156.0,-(171-156)/156.0);
        glVertex2f((140-156)/156.0,-(176-156)/156.0);
        glVertex2f((148-156)/156.0,-(177-156)/156.0);
        glVertex2f((161-156)/156.0,-(178-156)/156.0);
        glVertex2f((170-156)/156.0,-(177-156)/156.0);
        glVertex2f((179-156)/156.0,-(173-156)/156.0);
        glVertex2f((184-156)/156.0,-(168-156)/156.0);


    glEnd();
    glBegin(GL_POLYGON);
        glColor3ub(219,147,75);
        glVertex2f((135-156)/156.0,-(167-156)/156.0);
        glVertex2f((142-156)/156.0,-(171-156)/156.0);
        glVertex2f((148-156)/156.0,-(173-156)/156.0);
        glVertex2f((171-156)/156.0,-(173-156)/156.0);
        glVertex2f((177-156)/156.0,-(171-156)/156.0);
        glVertex2f((184-156)/156.0,-(168-156)/156.0);


    glEnd();









    glutSwapBuffers();///???s?e??
}
int main(int argc, char *argv[])///main()????
{
    glutInit(&argc, argv);///(1)Init???l??GLUT
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///(2)Init???l?? Display ???\??
    glutCreateWindow("08160563");///(3)????GLUT????
    glutDisplayFunc(display);///(4)????display()????
    glutMainLoop();///(5)?D?n?{??
}
