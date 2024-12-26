#include <Windows.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>
#include <time.h>

GLfloat xRotated, yRotated, zRotated, roloi, xb1, yb1, circle, roloi2, roloi3;
void init(void)
{
glClearColor(0,0,0,1);
 
}
void DrawStar(float xc,float yc,float f){
	
  //////////////////////////////////////BLOCK TRIGWNOY///////////////////////
  glBegin(GL_TRIANGLE_FAN);  
  ///proto part
	glVertex2f(xc+0*f,yc+5*f);
	glVertex2f(xc+0*f,yc-2*f);
	glVertex2f(xc+3*f,yc-4*f); 
	glEnd();
	//deutero part
	glBegin(GL_TRIANGLE_FAN); 
	glVertex2f(xc+0*f,yc+5*f);
	glVertex2f(xc+0*f,yc-2*f);
	glVertex2f(xc-3*f,yc-4*f); 
  glEnd();
  //deutero TRITO
	glBegin(GL_TRIANGLE_FAN); 
	glVertex2f(xc-5*f,yc+1*f);
	glVertex2f(xc+5*f,yc+1*f);
	glVertex2f(xc-0*f,yc-2*f); 
  glEnd();
	
}
	void drawFilledSun(float x, float y, float radius, int num_segments){
    		float i;
		    double twicePi = 2.0 * 3.142;
    		glBegin(GL_TRIANGLE_FAN); // ARXH DHMIOYRGIAS KYKLOY
    			glVertex2f(x, y); // KENTRO KYKLOY
    			for (i = 0; i <= num_segments; i++)   {
        			glVertex2f (
            			(x + (radius * cos(i * twicePi / num_segments))), (y + (radius * sin(i * twicePi / num_segments)))
            		);
    			}
    		glEnd(); }


void DrawAnimation(void)
{
   	 glMatrixMode(GL_MODELVIEW);
	 glClear(GL_COLOR_BUFFER_BIT);
     glLoadIdentity();
	 glClearColor(0.156,0.20,0.611,0);
glColor3f(0.764,0.788,0.333);
drawFilledSun(50,60,40,1000);

//elato
	glColor3f(0.133,0.694,0.298);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(50, 10);
		glVertex2f(62, 30);
		glVertex2f(38, 30);
	glEnd();
	
glBegin(GL_TRIANGLE_FAN);
		glVertex2f(50, 23);
		glVertex2f(67, 48);
		glVertex2f(33, 48);
	glEnd();
glBegin(GL_TRIANGLE_FAN);
		glVertex2f(50, 34);
		glVertex2f(75, 68);
		glVertex2f(25, 68);
	glEnd();
	//kormos
glColor3f(0.541,0.403,0);
glBegin(GL_TRIANGLE_FAN);
		glVertex2f(56, 89);
		glVertex2f(56, 100);
		glVertex2f(44, 100);
		glVertex2f(44, 89);
	glEnd();
glColor3f(0.133,0.694,0.298);
glBegin(GL_TRIANGLE_FAN);
		glVertex2f(50, 51);
		glVertex2f(83, 92);
		glVertex2f(18, 92);
	glEnd();
//lampes
glColor3f(0.7,0,0.5);
drawFilledSun(52,27,2,1000);
glColor3f(0.7,0,0.5);
drawFilledSun(27,86,2.5,1000);
glColor3f(0.54,0,0.8);
drawFilledSun(68,61,1.9,1000);
glColor3f(0.54,0,0.8);
drawFilledSun(44,44,1.5,1000);
glColor3f(0.54,0.8,0.8);
drawFilledSun(47,69,2,1000);
glColor3f(0.54,0.8,0.8);
drawFilledSun(43,25,1.4,1000);
glColor3f(0.7,0.7,0.5);
drawFilledSun(43,59,1.6,1000);
glColor3f(0.3,0.2,0.7);
drawFilledSun(60,69,2,1000);
glColor3f(0.5,0.2,0.2);
drawFilledSun(50,85,2,1000);
glColor3f(0.6,0.254,0.2);
drawFilledSun(49,45,2,1000);
glColor3f(0.3,0,0.5);
drawFilledSun(60,39,1.7,1000);
glColor3f(0.387,0.23,0.598);
drawFilledSun(68,87,2,1000);
glColor3f(0.1355,0.45,0.123);
drawFilledSun(39,80,2,1000);

//asteri
glColor3f(0.988,0.909,0.305);
DrawStar(50, 10,1);

//lampionia
//kitrina
if (roloi3<=101)
{glColor3f(0.988,0.909,0.305);
drawFilledSun(42,36,0.4,800);
drawFilledSun(42+3+3,36-1-1,0.4,800);
drawFilledSun(42+12,36-4,0.4,800);
drawFilledSun(42+12,36-6,0.4,800);
drawFilledSun(42+6,36-7,0.4,800);
drawFilledSun(42,36-9,0.4,800);
drawFilledSun(42+6,36-11,0.4,800);
drawFilledSun(42+12,36-13,0.4,800);
drawFilledSun(42+6,36+3,0.4,800);
drawFilledSun(42+12,36+5,0.4,800);
drawFilledSun(42+18,36+7,0.4,800);
drawFilledSun(42+18,36+9,0.4,800);
drawFilledSun(42+12,46+1,0.4,800);
drawFilledSun(42+6,46+3,0.4,800);
drawFilledSun(42,46+5,0.4,800);
drawFilledSun(42-3,46+6,0.4,800);
drawFilledSun(42-6,46+7,0.4,800);
drawFilledSun(42,46+9,0.4,800);
drawFilledSun(42+6,56+1,0.4,800);
drawFilledSun(42+12,56+3,0.4,800);
drawFilledSun(42+18,56+5,0.4,800);
drawFilledSun(42+24,56+7,0.4,800);
drawFilledSun(42+30,56+9,0.4,800);
drawFilledSun(42+24,66+1,0.4,800);
drawFilledSun(42+18,66+3,0.4,800);
drawFilledSun(42+12,66+5,0.4,800);
drawFilledSun(42+6,66+7,0.4,800);
drawFilledSun(42,66+9,0.4,800);
drawFilledSun(42-6,76+1,0.4,800);
drawFilledSun(42-12,76+3,0.4,800);
}
else
{glColor3f(1,1,1);
drawFilledSun(42,36,0.5,800);
drawFilledSun(42+3+3,36-1-1,0.5,800);
drawFilledSun(42+12,36-4,0.5,800);
drawFilledSun(42+12,36-6,0.5,800);
drawFilledSun(42+6,36-7,0.5,800);
drawFilledSun(42,36-9,0.5,800);
drawFilledSun(42+6,36-11,0.5,800);
drawFilledSun(42+12,36-13,0.5,800);
drawFilledSun(42+6,36+3,0.5,800);
drawFilledSun(42+12,36+5,0.5,800);
drawFilledSun(42+18,36+7,0.5,800);
drawFilledSun(42+18,36+9,0.5,800);
drawFilledSun(42+12,46+1,0.5,800);
drawFilledSun(42+6,46+3,0.5,800);
drawFilledSun(42,46+5,0.5,800);
drawFilledSun(42-3,46+6,0.5,800);
drawFilledSun(42-6,46+7,0.5,800);
drawFilledSun(42,46+9,0.5,800);
drawFilledSun(42+6,56+1,0.5,800);
drawFilledSun(42+12,56+3,0.5,800);
drawFilledSun(42+18,56+5,0.5,800);
drawFilledSun(42+24,56+7,0.5,800);
drawFilledSun(42+30,56+9,0.5,800);
drawFilledSun(42+24,66+1,0.5,800);
drawFilledSun(42+18,66+3,0.5,800);
drawFilledSun(42+12,66+5,0.5,800);
drawFilledSun(42+6,66+7,0.5,800);
drawFilledSun(42,66+9,0.5,800);
drawFilledSun(42-6,76+1,0.5,800);
drawFilledSun(42-12,76+3,0.5,800);
}




//aspra
if (roloi3<=101)
{glColor3f(1,1,1);
drawFilledSun(42+3,36-1,0.5,800);
drawFilledSun(42+9,36-3,0.5,800);
drawFilledSun(42+15,36-4,0.5,800);
drawFilledSun(42+9,36-6,0.5,800);
drawFilledSun(42+3,36-8,0.5,800);
drawFilledSun(42+3,36-10,0.5,800);
drawFilledSun(42+9,36-12,0.5,800);
drawFilledSun(42+13,36-15,0.5,800);
drawFilledSun(42+3,36+2,0.5,800);
drawFilledSun(42+9,36+4,0.5,800);
drawFilledSun(42+15,36+6,0.5,800);
drawFilledSun(42+21,36+8,0.5,800);
drawFilledSun(42+15,46,0.5,800);
drawFilledSun(42+9,46+2,0.5,800);
drawFilledSun(42+3,46+4,0.5,800);
drawFilledSun(42-3,46+6,0.5,800);
drawFilledSun(42-3,46+8,0.5,800);
drawFilledSun(42+3,56,0.5,800);
drawFilledSun(42+9,56+2,0.5,800);
drawFilledSun(42+15,56+4,0.5,800);
drawFilledSun(42+21,56+6,0.5,800);
drawFilledSun(42+27,56+8,0.5,800);
drawFilledSun(42+27,66,0.5,800);
drawFilledSun(42+21,66+2,0.5,800);
drawFilledSun(42+15,66+4,0.5,800);
drawFilledSun(42+9,66+6,0.5,800);
drawFilledSun(42+3,66+8,0.5,800);
drawFilledSun(42-3,76,0.5,800);
drawFilledSun(42-9,76+2,0.5,800);
drawFilledSun(42-15,76+5,0.5,800);
}
else
{glColor3f(0.988,0.909,0.305);
drawFilledSun(42+3,36-1,0.4,800);
drawFilledSun(42+9,36-3,0.4,800);
drawFilledSun(42+15,36-4,0.4,800);
drawFilledSun(42+9,36-6,0.4,800);
drawFilledSun(42+3,36-8,0.4,800);
drawFilledSun(42+3,36-10,0.4,800);
drawFilledSun(42+9,36-12,0.4,800);
drawFilledSun(42+13,36-15,0.4,800);
drawFilledSun(42+3,36+2,0.4,800);
drawFilledSun(42+9,36+4,0.4,800);
drawFilledSun(42+15,36+6,0.4,800);
drawFilledSun(42+21,36+8,0.4,800);
drawFilledSun(42+15,46,0.4,800);
drawFilledSun(42+9,46+2,0.4,800);
drawFilledSun(42+3,46+4,0.4,800);
drawFilledSun(42-3,46+6,0.4,800);
drawFilledSun(42-3,46+8,0.4,800);
drawFilledSun(42+3,56,0.4,800);
drawFilledSun(42+9,56+2,0.4,800);
drawFilledSun(42+15,56+4,0.4,800);
drawFilledSun(42+21,56+6,0.4,800);
drawFilledSun(42+27,56+8,0.4,800);
drawFilledSun(42+27,66,0.4,800);
drawFilledSun(42+21,66+2,0.4,800);
drawFilledSun(42+15,66+4,0.4,800);
drawFilledSun(42+9,66+6,0.4,800);
drawFilledSun(42+3,66+8,0.4,800);
drawFilledSun(42-3,76,0.4,800);
drawFilledSun(42-9,76+2,0.4,800);
drawFilledSun(42-15,76+5,0.4,800);
}




// 1 frame
		if ((roloi==1))
		{
		}
	
	
// 2 frame
		if ((roloi==2))
		{
		}

// 3 frame
		if ((roloi==3))
		{
		}

	
// 4 frame
		if ((roloi==4))
		{
		}
			
//5 frame
		if ((roloi==5))
		{
		}

// 6 frame
		if ((roloi==6))
		{
		}
		
// telos
		if ((roloi>6))
		{
		}


glFlush();
}

		
void animation(void)
{
 	// Roloi elegxou emfanisis kare
 	roloi+=1;
	DrawAnimation();
	
	//periodiki kinhsh
	/*roloi2+=1;
	if (roloi==2000)
		{roloi2=0.0;
		}*/
	roloi3+=1;
	if (roloi3==201)
		{roloi3=0;
			}
	//roloi2+=1;
	if (roloi3<1000.0)
		{	roloi2+=1;
		}
	else {
	roloi2=roloi2-1;
	}
}



void reshape(int x, int y)
{
    glMatrixMode(GL_PROJECTION);  
    glLoadIdentity();
    glOrtho(0, 100.0, 100.0, 00.0, -100.0,100.0);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv){

glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(640,480);
glutInitWindowPosition(0, 0);
glMatrixMode(GL_PROJECTION);
glOrtho(0, 100.0, 100.0, 00.0, -100.0,100.0);
glutCreateWindow(argv[0]);
init();
glutDisplayFunc(DrawAnimation);
glutReshapeFunc(reshape);
glutIdleFunc(animation);
glutMainLoop();
return 0;
}
