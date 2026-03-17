#include <GL/glut.h>
#include <iostream>
using namespace std;

void drawPixel(int x, int y)
{
    glBegin(GL_POINTS);
    glVertex2i(x, y);
    glEnd();
}

void bresenhamLine(int x1, int y1, int x2, int y2)
{
    int dx = x2 - x1;
    int dy = y2 - y1;

    int p = 2 * dy - dx;
    int x = x1, y = y1;

    while (x <= x2)
    {
        drawPixel(x, y);

        x++;

        if (p < 0)
        {
            p += 2 * dy;
        }
        else
        {
            y++;
            p += 2 * (dy - dx);
        }
    }
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0, 1.0, 1.0); // white color

    bresenhamLine(50, 50, 300, 200);

    glFlush();
}

void init()
{
    glClearColor(0, 0, 0, 0);
    gluOrtho2D(0, 500, 0, 500);
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Bresenham Line");

    init();
    glutDisplayFunc(display);

    glutMainLoop();
    return 0;
}