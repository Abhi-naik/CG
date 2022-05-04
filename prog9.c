#include<stdio.h>
#include<GL/glut.h>
void display(void)
{
 glClear(GL_COLOR_BUFFER_BIT);
 glColor3f(1.0,0.0,0.0);
 glPushMatrix();//cloud1
 glTranslatef(250.0,250.0,0.0);
 glutSolidSphere(50.0,100.0,100.0);
 glPopMatrix();
 glColor3f(0.0,1.0,0.0);
  glPushMatrix();//clud2
 glTranslatef(200.0,200.0,0.0);
 glutSolidSphere(50.0,100.0,100.0);
 glPopMatrix();
 glColor3f(0.0,0.0,1.0);
  glPushMatrix();//cloud3
 glTranslatef(225.0,225.0,0.0);
 glutSolidSphere(50.0,100.0,100.0);
 glPopMatrix();
 glColor3f(0.0,1.0,1.0);
  glPushMatrix();//cloud4
 glTranslatef(275.0,275.0,0.0);
 glutSolidSphere(50.0,100.0,100.0);
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
