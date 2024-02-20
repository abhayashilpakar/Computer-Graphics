#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void F_Fill8C(int x,int y,int O_Color, int fill_color){
    printf("%d%d\n",x,y);
    int cc = getpixel(x,y);//Determining current color of seed pixel(x,y)
    if(cc==O_Color ){
        putpixel(x,y,fill_color);
        F_Fill8C(x,y-1,O_Color,fill_color);
        F_Fill8C(x,y+1,O_Color,fill_color);
        F_Fill8C(x-1,y,O_Color,fill_color);
        F_Fill8C(x+1,y,O_Color,fill_color);

        F_Fill8C(x+1,y-1,O_Color,fill_color);
        F_Fill8C(x-1,y-1,O_Color,fill_color);
        F_Fill8C(x+1,y+1,O_Color,fill_color);
        F_Fill8C(x-1,y+1,O_Color,fill_color);
    }
}
int main(){


    int vertices[]={100,100,400,10,600,100,400,200,100,100} ,fill_color=RED,O_Color=GREEN,gd=DETECT,gm;
    initgraph(&gd,&gm," ");
    setfillstyle(1,GREEN);
    fillpoly(5,vertices);

    int x=350,y=105; //Seed pixel(x,y)
    printf("*****************SEED TABLE ******************\n");
    F_Fill8C(x,y,O_Color,fill_color);
    getch();

    return 0;
}
