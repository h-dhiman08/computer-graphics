#include <iostream>
using namespace std;

void drawLine(int x1, int y1, int x2, int y2) {
    int dx = x2 - x1;
    int dy = y2 - y1;

    int p = 2 * dy - dx;
    int x = x1, y = y1;

    while (x <= x2) {
        cout << "(" << x << ", " << y << ")" << endl;

        x++;

        if (p < 0) {
            p = p + 2 * dy;
        } else {
            y++;
            p = p + 2 * (dy - dx);
        }
    }
}

int main() {
    int x1 = 2, y1 = 3;
    int x2 = 10, y2 = 6;

    drawLine(x1, y1, x2, y2);

    return 0;
}