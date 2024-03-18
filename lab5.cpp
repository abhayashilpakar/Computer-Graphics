/**
 * Midpoint circle drawing by taking (r,0) as starting point.
*/

#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void Draw(int x, int y, int xc, int yc)
{
    putpixel(x+xc, y+yc, WHITE);
    putpixel(x+xc, -y+yc, WHITE);
    putpixel(-x+xc, y+yc, WHITE);
    putpixel(-x+xc, -y+yc, WHITE);

    putpixel(y+xc, x+yc, WHITE);
    putpixel(-y+xc, x+yc, WHITE);
    putpixel(y+xc, -x+yc, WHITE);
    putpixel(-y+xc, -x+yc, WHITE);
}

int main()
{
    int gd= DETECT, gm, xc, yc, xo, yo, p, r, i, x, y;
    printf("Enter center of the circle : ");
    scanf("%d%d", &xc, &yc);
    printf("Enter radius of circle : ");
    scanf("%d", &r);
    xo = r;
    yo = 0;
    p = 1-r;
    x = xo;
    y = yo;
    initgraph(&gd, &gm, "");
    Draw(x, y, xc, yc);
    printf("k\t\tp\t\t (x,y)\n");
    for ( i = 1; x < y; i++)
    {
        if(p<0)
        {
            x = x;
            y = y+1;
            p = p+2*y+1;
            printf("%d\t\t%d\t\t (%d,%d)\n", i, p, x, y);
        }else{
            x = x-1;
            y = y+1;
            p = p+2*y-2*x+1;
            printf("%d\t\t%d%d\t\t (%d,%d)\n", i, p, x, y);
        }
        Draw(x, y, xc, yc);
    }
    getch();
    return 0;
}