/*Basic 2D animations using 2D transformation*/

#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main(){
   int xc=100,yc=100,r=10,gd,gm=DETECT;
   initgraph(&gd,&gm,"");
   circle(xc,yc,r);
   setfillstyle(11,BLUE);
    floodfill(xc,yc,WHITE);
    for(int i=0;i<=50;i++){
        circle(xc+i,yc+i,r);
        setfillstyle(11,BLUE);
        floodfill(xc+i,yc+i,WHITE);
        line(10,160,500,160);
        delay(50);
        cleardevice();
    }
    xc=150;
    yc=150;
       for(int i=0;i<=50;i++){
        line(10,160,500,160);
        delay(50);
        cleardevice();
        circle(xc+i,yc-i,r);
        setfillstyle(11,BLUE);
        floodfill(xc+i,yc-i,WHITE);
        printf("%d%d",&xc+i,&yc-i);
    }


    getch();
    return 0;
}

