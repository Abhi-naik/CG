#include<stdio.h>
#include<GL/glut.h>
void display(void)
{
 glClear(GL_COLOR_BUFFER_BIT);
 glColor3f(1.0,0.0,0.0);
 glLineWidth(6.0);
 glColor3f(0.0,0.0,1.0);
 glBegin(GL_POLYGON);
 glVertex2f(2.0,7.0);
 glVertex2f(5.0,7.0);
 glVertex2f(3.5,9.0);
 glEnd();
 glColor3f(1.0,0.0,0.0);
 glBegin(GL_LINE_LOOP);
 glVertex2f(2.0,7.0);
 glVertex2f(5.0,7.0);
 glVertex2f(5.0,2.0);
 glVertex2f(2.0,2.0);
 glEnd();
 glColor3f(1.0,0.0,1.0);
 glBegin(GL_POLYGON);
 glVertex2f(3.0,2.0);
 glVertex2f(3.0,4.0);
 glVertex2f(4.2,4.0);
 glVertex2f(4.2,2.0);
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
