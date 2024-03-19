
#include<graphics.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    setbkcolor(BLACK);
    settextstyle(1,0,6);
    setcolor(WHITE);
    outtextxy(500,150,'2D shapes');
    setcolor(WHITE);
    setlinestyle(0,0,3);
    line(500,202,880,202);
    settextstyle(1,0,4);
    setcolor(WHITE);
    line(50,250,120,490);
    outtextxy(30,500,'LINE');
    int triangle[] = {250,490,400,490,350,300,250,490};
    setfillstyle(1,GREEN);
    fillpoly(4, triangle);
    outtextxy(30,500,'TRIANGLE');
    int rectangle[] = {450,300,750,300,750,490,450,490,450,300};
    setfillstyle(1, BLUE);
    fillpoly(5,rectangle);
    int pentagon[] = {800,350,900,300,1000,350,950,450,850,450,800,350};
    setfillstyle(1, YELLOW);
    fillpoly(6, pentagon);
    outtextxy(780,500,'PENTAGON');
    int hexagon[] = {1120, 370,1170,320,1270,320,1320,370,1270,420,1170,420,1120,370};
    setfillstyle(1, RED);
    fillpoly(7,hexagon);
    outtextxy(1080,500,'HEXAGON');


    closegraph()
    getch();
}
