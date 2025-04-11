#include<windows.h>
#include<GL/glut.h>
#include<stdlib.h>
#include<math.h>
double  r=.2,s=.3;
int i;
float  tx=10;

void init()
{
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glOrtho(-210,210,-220,310,-210,310);
}

void cloud(double x, double y)
{
    glBegin(GL_TRIANGLE_FAN);
        for(i=0;i<360;i++)
        {
            x=x+cos((i*3.14)/180)*r;
            y=y+sin((i*3.14)/180)*r;
            glVertex2d(x,y);
        }
    glEnd();
}

void sun(double x, double y)
{
    glBegin(GL_TRIANGLE_FAN);
        for(i=0;i<360;i++)
        {
            x=x+cos((i*3.14)/180)*s;
            y=y+sin((i*3.14)/180)*s;
            glVertex2d(x,y);
        }
    glEnd();
}

void fence(int x)
{
    glBegin(GL_POLYGON);
        glColor3ub(184,134,11);
        glVertex2i(190-x,130);
        glVertex2i(190-x,70);
        glVertex2i(187-x,70);
        glVertex2i(187-x,130);
        glVertex2i(190-x,130);
    glEnd();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    // Sky
    glColor3ub(135,206,250);
    glRecti(-200,300,200,100);

    // Field
    glBegin(GL_POLYGON);
        glColor3ub(0,100,0);
        glVertex2i(-200,100);
        glVertex2i(-100,160);
        glVertex2i(0,100);
        glVertex2i(50,70);
        glVertex2i(100,180);
        glVertex2i(200,100);
        glColor3ub(255,215,0);
        glVertex2i(200,-200);
        glVertex2i(-200,-200);
        glColor3ub(255,215,0);
        glVertex2i(-200,100);
    glEnd();

    // Sun
    glColor3ub(255,215,0);
    sun(90,250);

    // Fence
    int x=0;
    for(int i=0;i<39;i++)
    {
        fence(x);
        x+=10;
    }
    glColor3ub(184,134,11);
    glRecti(-200,120,200,115);
    glRecti(-200,100,200,95);
    glRecti(-200,85,200,80);

    // Tree
    glColor3ub(139,69,19);
    glRecti(-20,200,-13,140);
    glColor3ub(0,100,0);
    sun(-30,190);
    sun(0,190);
    sun(-10,210);
    sun(-30,175);
    sun(-0,170);
    glBegin(GL_POLYGON);
        glColor3ub(139,69,19);
        glVertex2i(-170,160);
        glVertex2i(-168,120);
        glVertex2i(-178,40);
        glVertex2i(-145,40);
        glVertex2i(-153,120);
        glVertex2i(-150,160);
        glVertex2i(-170,160);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3ub(139,69,19);
        glVertex2i(-153,100);
        glVertex2i(-100,200);
        glVertex2i(-95,200);
        glVertex2i(-153,80);
        glVertex2i(-153,100);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3ub(139,69,19);
        glVertex2i(-170,160);
        glVertex2i(-185,210);
        glVertex2i(-190,210);
        glVertex2i(-168,90);
        glVertex2i(-170,160);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3ub(139,69,19);
        glVertex2i(-160,160);
        glVertex2i(-150,210);
        glVertex2i(-140,210);
        glVertex2i(-150,160);
        glVertex2i(-160,160);
    glEnd();
    glColor3ub(0,128,0);
    sun(-95,200);
    sun(-80,180);
    sun(-110,180);
    sun(-120,200);
    sun(-150,200);
    sun(-130,180);
    sun(-125,220);
    sun(-140,230);
    sun(-190,210);
    sun(-180,200);
    sun(-175,225);
    sun(-195,190);

    // House one
    glBegin(GL_POLYGON);
        glColor3ub(128,0,0);
        glVertex2i(-58,115);
        glVertex2i(-75,145);
        glVertex2i(-115,150);
        glVertex2i(-90,100);
        glVertex2i(-62,100);
        glVertex2i(-58,115);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3ub(120,0,0);
        glVertex2i(-115,150);
        glVertex2i(-130,100);
        glVertex2i(-120,100);
        glVertex2i(-108,137);
        glVertex2i(-115,150);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3ub(46,139,87);
        glVertex2i(-108,137);
        glVertex2i(-120,100);
        glVertex2i(-120,45);
        glVertex2i(-90,40);
        glVertex2i(-90,100);
        glVertex2i(-108,137);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3ub(143,188,143);
        glVertex2i(-90,40);
        glVertex2i(-60,45);
        glVertex2i(-60,100);
        glVertex2i(-90,100);
    glEnd();
    glColor3ub(120,0,0);
    glRecti(-75,80,-65,40);
    glColor3ub(120,0,0);
    glRecti(-110,90,-100,70);
    glBegin(GL_POLYGON);
        glColor3ub(0,0,0);
        glVertex2i(-90,40);
        glVertex2i(-123,45);
        glVertex2i(-123,35);
        glVertex2i(-90,30);
        glVertex2i(-90,40);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3ub(0,0,0);
        glVertex2i(-90,40);
        glVertex2i(-55,45);
        glVertex2i(-55,35);
        glVertex2i(-90,30);
        glVertex2i(-90,40);
    glEnd();

    // House two
    glBegin(GL_POLYGON);
        glColor3ub(25,25,112);
        glVertex2i(-50,140);
        glVertex2i(0,149);
        glVertex2i(-12,88);
        glVertex2i(-65,89);
        glVertex2i(-50,140);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(70,130,180);
        glVertex2i(-60,90);
        glVertex2i(-60,30);
        glVertex2i(-10,25);
        glVertex2i(-10,95);
    glEnd();
    glColor3ub(25,25,112);
    glRecti(-45,70,-30,27);
    glBegin(GL_POLYGON);
    glColor3ub(95,158,160);
        glVertex2i(-10,25);
        glVertex2i(18,35);
        glVertex2i(18,100);
        glVertex2i(0,148);
        glVertex2i(-10,100);
        glVertex2i(-10,25);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(25,25,112);
        glVertex2i(-1,150);
        glVertex2i(20,100);
        glVertex2i(17,90);
        glVertex2i(-4,140);
        glVertex2i(-1,150);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(25,25,112);
        glVertex2i(0,70);
        glVertex2i(10,73);
        glVertex2i(10,32);
        glVertex2i(0,29);
        glVertex2i(0,70);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3ub(0,0,0);
        glVertex2i(-10,25);
        glVertex2i(-10,15);
        glVertex2i(20,27);
        glVertex2i(20,37);
        glVertex2i(-10,25);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3ub(0,0,0);
        glVertex2i(-10,25);
        glVertex2i(-62,30);
        glVertex2i(-62,20);
        glVertex2i(-10,15);
        glVertex2i(-10,25);
    glEnd();

    // House three (New house on the right side)
    glBegin(GL_POLYGON);  // Main structure
        glColor3ub(0,152,180);
        glVertex2i(50,130);
        glVertex2i(50,70);
        glVertex2i(100,70);
        glVertex2i(100,130);
        glVertex2i(75,150);  // Roof peak
        glVertex2i(50,130);
    glEnd();
    glBegin(GL_POLYGON);  // Roof
        glColor3ub(25,25,112); // color roof
        glVertex2i(45,130);
        glVertex2i(105,130);
        glVertex2i(75,160);
        glVertex2i(45,130);
    glEnd();
    glColor3ub(0,81,15); // color door
    glRecti(70,100,80,70);
    glBegin(GL_POLYGON);  // Base
        glColor3ub(0,0,0);
        glVertex2i(45,70);
        glVertex2i(45,60);
        glVertex2i(105,60);
        glVertex2i(105,70);
        glVertex2i(45,70);
    glEnd();



        // Tubewell
    glBegin(GL_POLYGON);
        glColor3ub(0,100,0);
        glVertex2i(115,65);
        glVertex2i(95,5);
        glVertex2i(145,5);
        glVertex2i(165,65);
        glVertex2i(115,65);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3ub(143,188,143);
        glVertex2i(120,58);
        glVertex2i(104,13);
        glVertex2i(140,12);
        glVertex2i(155,58);
        glVertex2i(120,58);
    glEnd();
    glColor3ub(0,0,0);
    glRecti(95,5,145,-6);
    glBegin(GL_POLYGON);
        glColor3ub(0,0,0);
        glVertex2i(165,65);
        glVertex2i(166,55);
        glVertex2i(145,-6);
        glVertex2i(145,5);
        glVertex2i(165,65);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3ub(184,134,11);
        glVertex2i(120,85);
        glVertex2i(120,30);
        glVertex2i(125,28);
        glVertex2i(130,30);
        glVertex2i(130,85);
        glVertex2i(125,87);
        glVertex2i(120,85);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3ub(255,215,0);
        glVertex2i(120,85);
        glVertex2i(125,80);
        glVertex2i(130,85);
        glVertex2i(125,87);
        glVertex2i(120,85);
    glEnd();
    glColor3ub(205,133,63);
    glRecti(123,100,126,85);
    glBegin(GL_POLYGON);
        glColor3ub(139,69,19);
        glVertex2i(126,100);
        glVertex2i(128,102);
        glVertex2i(128,110);
        glVertex2i(126,113);
        glVertex2i(124,111);
        glVertex2i(100,80);
        glVertex2i(90,70);
        glVertex2i(90,65);
        glVertex2i(100,73);
        glVertex2i(126,100);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3ub(210,105,30);
        glVertex2i(130,70);
        glVertex2i(140,70);
        glVertex2i(140,50);
        glVertex2i(136,50);
        glVertex2i(136,60);
        glVertex2i(130,60);
        glVertex2i(130,70);
    glEnd();
    glColor3ub(210,105,30);
    glRecti(123,29,127,20);
    glColor3ub(139,69,19);
    glRecti(118,22,132,14);



    // River
    glBegin(GL_POLYGON);
        glColor3ub(30,144,255);
        glVertex2i(-200,-50);
        glVertex2i(200,-30);
        glColor3ub(0,0,128);
        glVertex2i(200,-200);
        glVertex2i(-200,-200);
        glVertex2i(-200,-50);
    glEnd();

    glBegin(GL_POLYGON);  // Original river border (kept for continuity)
        glColor3ub(128,128,0);
        glVertex2i(-200,-45);
        glVertex2i(200,-25);
        glVertex2i(200,-30);
        glVertex2i(-200,-50);
        glVertex2i(-200,-45);
    glEnd();


    // Cloud
    glPushMatrix();
    glColor3ub(220,220,220);
    glTranslatef(tx,0,0);
    cloud(0,250);
    cloud(15,245);
    cloud(10,240);
    cloud(-2,243);
    cloud(-80,250);
    cloud(-95,245);
    cloud(-90,240);
    cloud(-90,243);
    cloud(-75,243);
    glPopMatrix();
    tx+=.01;
    if(tx>200)
    tx=-200;

    glutPostRedisplay();
    glColor3ub(255,255,255);
    glRecti(-210,310,-200,-210);
    glRecti(200,310,210,-210);

    glFlush();
}

int main(int argc,char *argv[])
{
    glutInit(&argc,argv);
    glutInitWindowSize(1200,800);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutCreateWindow(" OpenGL Village Scene Using glut, C++ ");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
