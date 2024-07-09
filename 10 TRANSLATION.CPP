#include <stdio.h> 
#include <graphics.h>
#include <process.h>
#include <conio.h> 
#include <math.h> 

void RectAngle(int x,int y,int h,int w);
void Translate(int x,int y,int h,int w);
void main()
{
    int gd,gm;
    int x,y,h,w;
    detectgraph(&gd, &gm);
    initgraph(&gd,&gm,"C://TURBOC3/BGI");
    printf("Enter the First point for the Rectangle: ");//100 100
    scanf("%d%d", &x, &y);
    printf("Enter the height and width for the Rectangle: ");//80 80
    scanf("%d%d", &h, &w);
    
    RectAngle(x,y,h,w);
    getch();
    cleardevice();

    Translate(x,y,h,w);
    RectAngle(x,y,h,w);
    getch();
}

void RectAngle(int x,int y,int h,int w)
{
   line(x,y,x+w,y);
   line(x,y,x,y+w);
   line(x+w,y,x+w,y+h);
   line(x,y+h,x+w,y+h);
}

void Translate(int x,int y,int h,int w)
{
    int Tx,Ty,a,b;
    printf("Enter the translation coordinate: ");//30 20
    scanf("%d%d", &Tx, &Ty);
    cleardevice();

    a=x+Tx;
    b=y+Ty;

    RectAngle(a,b,h,w);
    
}