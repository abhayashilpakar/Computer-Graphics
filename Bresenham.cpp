
#include <stdio.h>
#include <stdlib.h>

void draw_line(int x0, int y0, int x1, int y1) {
    int dx = abs(x1 - x0);
    int dy = abs(y1 - y0);
    int sx = x0 < x1 ? 1 : -1;
    int sy = y0 < y1 ? 1 : -1;
    int err = (dx > dy ? dx : -dy) / 2;
    int e2;

    while (x0 != x1 || y0 != y1) {
        // Plot pixel at (x0, y0) here
        printf("(%d, %d)\n", x0, y0);

        e2 = err;
        if (e2 > -dx) {
            err -= dy;
            x0 += sx;
        }
        if (e2 < dy) {
            err += dx;
            y0 += sy;
        }
    }
    // Plot the last pixel at (x1, y1) here
    printf("(%d, %d)\n", x1, y1);
}

int main() {
    int x0 = 1, y0 = 1, x1 = 8, y1 = 5;
    draw_line(x0, y0, x1, y1);
    return 0;
}
