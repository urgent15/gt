#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
void main()
{
float x, y, x1, y1, x2, y2, dx, dy, length;
int i, gd, gm;

printf("Enter the first value of x1 = ");//100
scanf("%f",&x1);
printf("Enter the first value of y1 = ");//100
scanf("%f",&y1);
printf("Enter the first value of x2 = ");//200
scanf("%f",&x2);
printf("Enter the first value of y2 = ");//200
scanf("%f",&y2);
detectgraph(&gd, &gm);
initgraph(&gd, &gm,"C:\\TURBOC3\\BGI");
dx = abs(x2-x1);
dy = abs(y2-y1);
if(dx >= dy)
length = dx;
else
length = dy;
dx = (x2-x1)/length;
dy = (y2-y1)/length;
x=x1 + 0.5;
y=y1 + 0.5;
i=1;
while(i<=length)
{
putpixel(x, y, 15);
x= x+dx;
y = y+dy;
i=i+1;
}
getch();
closegraph();
}