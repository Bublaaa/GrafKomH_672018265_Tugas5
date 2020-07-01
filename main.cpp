#include <Windows.h>
#include <iostream>
#include <GL/freeglut.h>
void myinit(void);
void display(void);
void keyboard(unsigned char, int, int);
void ukuran(int, int);
int is_depth;
void display(void) {
	if (is_depth)
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	else 
	glClear(GL_COLOR_BUFFER_BIT);

	//depan
	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(2.0, -8.0, 12.0);
	glVertex3f(2.0, 2.0, 12.0);
	glVertex3f(-2.0, 2.0, 12.0);
	glVertex3f(-2.0, -8.0, 12.0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(3.0 -6.0, -3.0 + 2.0, 12.0);
	glVertex3f(3.0 - 6.0, 3.0 + 2.0, 12.0);
	glVertex3f(-3.0 - 6.0, 3.0 + 2.0, 12.0);
	glVertex3f(-3.0 - 6.0, -3.0 + 2.0, 12.0);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(3.0 + 6.0, -3.0 + 2.0, 12.0);
	glVertex3f(3.0 + 6.0, 3.0 + 2.0, 12.0);
	glVertex3f(-3.0 + 6.0, 3.0 + 2.0, 12.0);
	glVertex3f(-3.0 + 6.0, -3.0 + 2.0, 12.0);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(1.0, 1.0, 1.0);
		glVertex3f(-12.0, -8.0, 12.0);
		glVertex3f(-12.0, 10.0, 12.0);
		glVertex3f(12.0, 10.0, 12.0);
		glVertex3f(12.0, -8.0, 12.0);
	glEnd();
	

	//belakang
	glBegin(GL_QUADS);
		glColor3f(1.0, 1.0, 0.0);
		glVertex3f(-12.0, -8.0, -12.0);
		glVertex3f(-12.0, 10.0, -12.0);
		glVertex3f(12.0, 10.0, -12.0);
		glVertex3f(12.0, -8.0, -12.0);
	glEnd();

	//kanan
	glBegin(GL_QUADS);
		glColor3f(0.0, 1.0, 1.0);
		glVertex3f(12.0, 10.0, 12.0);
		glVertex3f(12.0, -8.0, 12.0);
		glVertex3f(12.0, -8.0, -12.0);
		glVertex3f(12.0, 10.0, -12.0);
	glEnd();

	//kiri
	glBegin(GL_QUADS);
		glColor3f(1.0, 0.0, 1.0);
		glVertex3f(-12.0, 10.0, 12.0);
		glVertex3f(-12.0, -8.0, 12.0);
		glVertex3f(-12.0, -8.0, -12.0);
		glVertex3f(-12.0, 10.0, -12.0);
	glEnd();

	//atas
	glBegin(GL_QUADS);
		glColor3f(0.1, 0.0, 0.0);
		glVertex3f(-20.0, 10.0, 20.0);
		glVertex3f(20.0, 10.0, 20.0);
		glVertex3f(20.0, 10.0, -20.0);
		glVertex3f(-20.0, 10.0, -20.0);
	glEnd();

	//teras
	glBegin(GL_QUADS);
		glColor3f(0.2, 0.2, 0.2);
		glVertex3f(-20.0, -10.0, 20.0);
		glVertex3f(20.0, -10.0, 20.0);
		glVertex3f(20.0, -10.0, -20.0);
		glVertex3f(-20.0, -10.0, -20.0);
	glEnd();
		glBegin(GL_QUADS);
		glColor3f(0.2, 0.2, 0.2);
		glVertex3f(-20.0, -8.0, 20.0);
		glVertex3f(20.0, -8.0, 20.0);
		glVertex3f(20.0, -8.0, -20.0);
		glVertex3f(-20.0, -8.0, -20.0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.2, 0.2, 0.2);
	glVertex3f(-20.0, -8.0, -20.0);
	glVertex3f(20.0, -8.0, -20.0);
	glVertex3f(20.0, -10.0, -20.0);
	glVertex3f(-20.0, -10.0, -20.0);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.2, 0.2, 0.2);
	glVertex3f(-20.0, -8.0, -20.0);
	glVertex3f(20.0, -8.0, -20.0);
	glVertex3f(20.0, -10.0, -20.0);
	glVertex3f(-20.0, -10.0, -20.0);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.2, 0.2, 0.2);
	glVertex3f(20.0, -8.0, -20.0);
	glVertex3f(20.0, -8.0, 20.0);
	glVertex3f(20.0, -10.0, 20.0);
	glVertex3f(20.0, -10.0, -20.0);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.2, 0.2, 0.2);
	glVertex3f(20.0, -8.0, 20.0);
	glVertex3f(-20.0, -8.0, 20.0);
	glVertex3f(-20.0, -10.0, 20.0);
	glVertex3f(20.0, -10.0, 20.0);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.2, 0.2, 0.2);
	glVertex3f(-20.0, -8.0, 20.0);
	glVertex3f(-20.0, -8.0, -20.0);
	glVertex3f(-20.0, -10.0, -20.0);
	glVertex3f(-20.0, -10.0, 20.0);
	glEnd();

	//genteng
	glBegin(GL_QUADS);
		glColor3f(0.7, 0.2, 0.3);
		glVertex3f(-20.0, 10.0, 20.0);
		glVertex3f(20.0, 10.0, 20.0);
		glVertex3f(10.0, 17.0, 10.0);
		glVertex3f(-10.0, 17.0, 10.0);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.7, 0.2, 0.3);
		glVertex3f(20.0, 10.0, 20.0);
		glVertex3f(20.0, 10.0, -20.0);
		glVertex3f(10.0, 17.0, -10.0);
		glVertex3f(10.0, 17.0, 10.0);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0.7, 0.2, 0.3);
		glVertex3f(20.0, 10.0, -20.0);
		glVertex3f(-20.0, 10.0, -20.0);
		glVertex3f(-10.0, 17.0, -10.0);
		glVertex3f(10.0, 17.0, -10.0);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0.7, 0.2, 0.3);
		glVertex3f(-20.0, 10.0, -20.0);
		glVertex3f(-20.0, 10.0, 20.0);
		glVertex3f(-10.0, 17.0, 10.0);
		glVertex3f(-10.0, 17.0, -10.0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.5, 0.0, 0.1);
	glVertex3f(-10.0, 17.0, 10.0);
	glVertex3f(10.0, 17.0, 10.0);
	glVertex3f(8.0, 24.0, 0.0);
	glVertex3f(-8.0, 24.0, 0.0);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.0, 0.1);
	glVertex3f(-10.0, 17.0, -10.0);
	glVertex3f(10.0, 17.0, -10.0);
	glVertex3f(8.0, 24.0, 0.0);
	glVertex3f(-8.0, 24.0, 0.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.3, 0.0, 0.0);
	glVertex3f(10.0, 17.0, 10.0);
	glVertex3f(10.0, 17.0, -10.0);
	glVertex3f(8.0, 24.0, 0.0);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.3, 0.0, 0.0);
	glVertex3f(-10.0, 17.0, -10.0);
	glVertex3f(-10.0, 17.0, 10.0);
	glVertex3f(-8.0, 24.0, 0.0);
	glEnd();

	glPushMatrix();
	glPopMatrix();
	glutSwapBuffers();
}
void keyboard(unsigned char key, int x, int y) {
	switch (key) {
	case 'w' :
		glTranslatef(0.0, 0.0, 3.0);
		break;
	case 'a':
		glTranslatef(-3.0, 0.0, 0.0);
		break;
	case 's':
		glTranslatef(0.0, 0.0, -3.0);
		break;
	case 'd':
		glTranslatef(3.0, 0.0, 0.0);
		break;
	case '7':
		glTranslatef(0.0, 3.0, 0.0);
		break;
	case '9':
		glTranslatef(0.0, -3.0, 0.0);
		break;
	case '2':
		glRotatef(2.0, 1.0, 0.0,0.0);
		break;
	case '8':
		glRotatef(-2.0, 1.0, 0.0, 0.0);
		break;
	case '6':
		glRotatef(2.0, 0.0, 1.0, 0.0);
		break;
	case '4':
		glRotatef(-2.0, 0.0, 1.0, 0.0);
		break;
	case '1':
		glRotatef(2.0, 0.0, 0.0, 1.0);
		break;
	case '3':
		glRotatef(-2.0, 0.0, 0.0, 1.0);
		break;
	case '5':
		if (is_depth) {
			is_depth = 0;
			glDisable(GL_DEPTH_TEST);
		}
		else {
			is_depth = 1;
			glEnable(GL_DEPTH_TEST);
		}
	}
	display();
}
void ukuran(int lebar, int tinggi) {
	if (tinggi == 0) tinggi = 1;

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(50.0, lebar / tinggi, 5.0, 500.0);
	glTranslated(0.0, -5.0, -150.0);
	glMatrixMode(GL_MODELVIEW);
}
void myinit() {
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glEnable(GL_DEPTH_TEST);
	is_depth = 1;
	glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(250, 80);
	glutCreateWindow("Tugas 5");
	myinit();
	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);
	glutReshapeFunc(ukuran);
	glutMainLoop();
	return 0;
}