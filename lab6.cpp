/*Basic 2D Transformation 
i)Translation
ii)Rotation
iii)Scaling
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
void Translation(int vertices[]){
    int gd=DETECT,gm,tx,ty;
    printf("Enter tx and ty");
    scanf("%d%d",&tx,&ty);
    initgraph(&gd,&gm," ");
    drawpoly(4,vertices);
    outtextxy(30,60,"Before Translation");
    for(int i=0;i<8;i++){
        if(i%2==0){
            vertices[i]+=tx;
        }else{
            vertices[i]+=ty;
        }
    }
    drawpoly(4,vertices);
    outtextxy(200,40+ty,"After Translation");
}
void Rotation(int vertices[]){
    int gd=DETECT,gm,n;
    float angle;
    printf("Enter angle");
    scanf("%f",&angle);
    angle=(3.14/180)*angle;
    initgraph(&gd,&gm," ");
    drawpoly(4,vertices);
    outtextxy(30,60,"Before Rotation");
    for(int i=0;i<8;i++){
        if(i%2==0){
            vertices[i]=vertices[i]*cos(angle)-vertices[i]*sin(angle);
            printf("%d\t",vertices[i]);
        }else{
            vertices[i]=vertices[i-1]*sin(angle)+vertices[i]*cos(angle);
            printf("%d\t",vertices[i]);
        }
    }
    drawpoly(4,vertices);
    outtextxy(200,40,"After Rotation");
}
void Scaling(int vertices[]){
    int gd=DETECT,gm,Sx,Sy,i;
    printf("Enter Scaling Factor");
    scanf("%d%d",&Sx,&Sy);
    initgraph(&gd,&gm," ");
    drawpoly(4,vertices);
    outtextxy(30,60,"Before Scaling");
    for(i=0;i<8;i++){
        if(i%2==0){
            vertices[i]*=Sx;
        }else{
            vertices[i]*=Sy;
        }
    }
    drawpoly(4,vertices);
    outtextxy(200,40,"After Scaling");
}
int main(){
    int vertices[]={110,110,130,110,130,140,10,110},n;
    printf("1.Translation\n2.Rotation\n3.Scaling\n4.Exit\n");
    scanf("%d",&n);
    switch(n){
        case 1:
        Translation(vertices);
        break;
        case 2:
        Rotation(vertices);
        break;
        case 3:
        Scaling(vertices);
        break;
        default:
        exit(0);
    }
    getch();
    return 0;
}