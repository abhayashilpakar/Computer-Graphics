#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
int Round(float n){
	if(n-int(n)<0.5)
		return int(n);
	else
		return (int(n)+1);
}
int main(){
	int i,slen,gd=DETECT,gm;
	float x0,y0,xn,yn,dy,dx,xi,yi,x,y;
	printf("Enter x0,y0 and xn,yn");
	scanf("%f%f%f%f",&x0,&y0,&xn,&yn);
	dx=xn-x0;
	dy=yn-y0;
	if(fabs(dx)>=fabs(dy))
		slen=fabs(dx);
	else
		slen=fabs(dy);
	x=x0;
	y=y0;
	initgraph(&gd,&gm,"");
	xi=dx/slen;
	yi=dy/slen;
	putpixel(Round(x),Round(y),7);
	printf("K\t\t(X,Y)\t\tPlot(x,y)\n");
	for(i=0;i<slen;i++){
		x=x+xi;
		y=y+yi;
		putpixel(Round(x),Round(y),7);
		printf("%d\t\t(%.2f,%.2f)\t\t(%d,%d)\n",i,x,y,Round(x),Round(y));
	}
	getch();
	closegraph(0);
	return 0;
}