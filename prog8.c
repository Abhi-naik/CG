#include<stdio.h>
#include<GL/glut.h>
void display(void)
{
 glClear(GL_COLOR_BUFFER_BIT);
 glColor3f(1.0,0.0,0.0);
 glLineWidth(6.0);
 glColor3f(0.0,0.0,1.0);
 glBegin(GL_POLYGON);// polygon for sky
 glVertex2f(0.0,500.0);
 glVertex2f(500.0,500.0);
 glVertex2f(500.0,250.0);
 glVertex2f(0.0,250.0);
 glEnd();
 glColor3f(0.33,0.075,0.004);
 glBegin(GL_POLYGON);// polygon for land
 glVertex2f(0.0,0.0);
 glVertex2f(0.0,250.0);
 glVertex2f(500.0,250.0);
 glVertex2f(500.0,0.0);
 glEnd();
 glColor3f(0.99,0.1243,0.4560);
 glBegin(GL_POLYGON);//roofing
 glVertex2f(50.0,150.0);
 glVertex2f(225.0,150.0);
 glVertex2f(125.5,200.0);
 glEnd();
 glColor3f(0.0765,0.76,0.033);
 glBegin(GL_POLYGON);//body of the house
 glVertex2f(50.0,150.0);
 glVertex2f(225.0,150.0);
 glVertex2f(225.0,0.0);
 glVertex2f(50.0,0.0);
 glEnd();
 glColor3f(1.0,0.0,1.0);
 glBegin(GL_POLYGON);//door of the house
 glVertex2f(100.0,0.0);
 glVertex2f(100.0,100.0);
 glVertex2f(175.0,100.0);
 glVertex2f(175.0,0.0);
 glEnd();
 glBegin(GL_POLYGON);//hot icyyyy mountain--1
 glVertex2f(0.0,250.0);
 glVertex2f(166.0,250.0);
 glVertex2f(82.0,500.0);
 glEnd();
  glBegin(GL_POLYGON);//hot icyyyy mountain--2
 glVertex2f(166.0,250.0);
 glVertex2f(332.0,250.0);
 glVertex2f(260.0,500.0);
 glEnd();
  glBegin(GL_POLYGON);//hot icyyyy mountain--3
 glVertex2f(332.0,250.0);
 glVertex2f(400.0,500.0);
 glVertex2f(500.0,250.0);
 glEnd();
 glColor3f(1.0,1.0,1.0);
 glPushMatrix();//cloud1
 glTranslatef(350.0,345.0,0.0);
 glutSolidSphere(50.0,100.0,100.0);
 glPopMatrix();
 glColor3f(1.0,1.0,1.0);
  glPushMatrix();//clud2
 glTranslatef(300.0,365.0,0.0);
 glutSolidSphere(50.0,100.0,100.0);
 glPopMatrix();
 glColor3f(1.0,1.0,1.0);
  glPushMatrix();//cloud3
 glTranslatef(325.0,325.0,0.0);
 glutSolidSphere(50.0,100.0,100.0);
 glPopMatrix();
 glColor3f(1.0,1.0,1.0);
  glPushMatrix();//cloud4
 glTranslatef(375.0,375.0,0.0);
 glutSolidSphere(50.0,100.0,100.0);
 glPopMatrix();
 glPushMatrix();//ventilator of the house
 glTranslatef(75.0,185.0,0.0);
 glutSolidSphere(10.0,100.0,100.0);
 glPopMatrix();
 glFlush();
}
int main(int argc, char **argv)
{
 printf("\nhello\n");
 glutInit(&argc,argv);
 glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
 glutInitWindowSize(500,500);
 glutInitWindowPosition(100,100);
 glutCreateWindow("first lab program");
 glClearColor(1.0,1.0,1.0,0);
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 glOrtho(0.0,500.0,0.0,500.0,-500.0,+500.0);
 glutDisplayFunc(display);
 glutMainLoop();
}
