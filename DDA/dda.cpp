#include <GL/glut.h>
#include <cmath>
#include <iostream>
using namespace std;

int x_start = 100, y_start = 100, x_end = 400, y_end = 300;

// DDA Algorithm
void ddaLine(int x1, int y1, int x2, int y2)
{
    float dx = x2 - x1;
    float dy = y2 - y1;

    float steps = (abs(dx) > abs(dy)) ? abs(dx) : abs(dy);

    float xInc = dx / steps;
    float yInc = dy / steps;

    float x = x1;
    float y = y1;

    glBegin(GL_POINTS);

    for (int i = 0; i <= steps; i++)
    {
        glVertex2i((int)round(x), (int)round(y));
        x += xInc;
        y += yInc;
    }

    glEnd();
}

// Display
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0, 0.0, 0.0);
    glPointSize(2.0);

    ddaLine(x_start, y_start, x_end, y_end);

    glFlush();
}

// Init
void init()
{
    glClearColor(0, 0, 0, 0);
    gluOrtho2D(0, 500, 0, 500);
}

// Main
int main(int argc, char **argv)
{
    cout << "Enter x1 y1 x2 y2: ";
    cin >> x_start >> y_start >> x_end >> y_end;

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("DDA Line Drawing");

    init();
    glutDisplayFunc(display);

    glutMainLoop();
    return 0;
}