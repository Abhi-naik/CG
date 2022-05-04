#include<stdio.h>
#include<GL/glut.h>
void display(void)
{
 glClear(GL_COLOR_BUFFER_BIT);
 glColor3f(1.0,0.0,0.0);
 glLineWidth(5.0);
 glColor3f(0.0,1.0,0.0);
 glBegin(GL_POLYGON);
  glColor3f(2.0,1.0,0.0);
 glVertex2f(2.0,2.0);
  glColor3f(1.0,1.0,0.0);
 glVertex2f(6.0,2.0);
  glColor3f(0.0,1.0,1.0);
 glVertex2f(6.0,6.0);
 glVertex2f(2.0,6.0);
 glEnd();
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
 gluOrtho2D(0.0,10.0,0.0,10.0);
 glutDisplayFunc(display);
 glutMainLoop();
}
