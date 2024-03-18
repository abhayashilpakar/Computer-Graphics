
//to implement Area filling algorithms (flood Fill & boundary Fill algorithm )
//Task Important Boundary fill Algorithm

#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void B_Fill4C(int x,int y,int B_Color, int fill_color){
    printf("%d%d\n",x,y);
    int cc = getpixel(x,y);//Determining current color of seed pixel(x,y)
    if(cc!=fill_color && cc!=B_Color){
        putpixel(x,y,fill_color);
        B_Fill4C(x,y-1,B_Color,fill_color);
        B_Fill4C(x,y+1,B_Color,fill_color);
        B_Fill4C(x-1,y,B_Color,fill_color);
        B_Fill4C(x+1,y,B_Color,fill_color);
    }
}
int main(){


    int vertices[]={100,100,400,10,600,100,400,200,100,100} ,fill_color=RED,B_Color=WHITE,gd=DETECT,gm;
    initgraph(&gd,&gm," ");
    drawpoly(5,vertices);

    int x=350,y=105; //Seed pixel(x,y)
    printf("*****************SEED TABLE ******************\n");
    B_Fill4C(x,y,B_Color,fill_color);
    getch();

    return 0;
}
