#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
void main()
{
float x, y, x1, y1, x2, y2, dx, dy, e;
int i, gd, gm;
printf("Enter the first value of x1 = ");//100
scanf("%f",&x1);
printf("Enter the first value of y1 = ");//200
scanf("%f",&y1);
printf("Enter the first value of x2 = ");//200
scanf("%f",&x2);
printf("Enter the first value of y2 = ");//200
scanf("%f",&y2);
detectgraph(&gd, &gm);
initgraph(&gd, &gm,"C:\\TURBOC3\\BGI");
x=x1;
y=y1;
dx=abs(x2-x1);
dy=abs(y2-y1);
e=2*dy-dx;
i=1;
do{
putpixel(x,y,15);
while(e>=0)
{
y=y+1;
e=e-2*dx;
}
x=x+1;
e=e+2*dy;
i=i+1;
}
while(i<=dx);
getch();
closegraph();
}