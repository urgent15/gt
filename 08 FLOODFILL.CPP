#include <stdio.h> 
#include <graphics.h>
#include <dos.h>
#include <conio.h> 

void flood(int,int,int,int);
void drawCircle(int,int,int);
void main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C://TURBOC3/BGI");
    drawCircle(200, 200, 24); // Draw a circle centered at (200, 200) with radius 50
    flood(200, 200, 15, 0);   // Perform flood fill at point (200, 200) with fill color 15 and default color 0
    getch();
    closegraph();
}

void flood(int x,int y,int fillcolor,int defaultcolor)
{
    if(getpixel(x,y)==defaultcolor)
    {
        delay(1);
        putpixel(x,y,fillcolor);
        flood(x+1,y,fillcolor,defaultcolor);
        flood(x,y+1,fillcolor,defaultcolor);
        flood(x-1,y,fillcolor,defaultcolor);
        flood(x,y-1,fillcolor,defaultcolor);
    }
}

void drawCircle(int xc, int yc, int r)
{
    int x = 0, y = r;
    int d = 3 - 2 * r;
    while (x <= y)
    {
        putpixel(xc + x, yc + y, WHITE);
        putpixel(xc - x, yc + y, WHITE);
        putpixel(xc + x, yc - y, WHITE);
        putpixel(xc - x, yc - y, WHITE);
        putpixel(xc + y, yc + x, WHITE);
        putpixel(xc - y, yc + x, WHITE);
        putpixel(xc + y, yc - x, WHITE);
        putpixel(xc - y, yc - x, WHITE);
        if (d < 0)
            d += 4 * x + 6;
        else
        {
            d += 4 * (x - y) + 10;
            y--;
        }
        x++;
     }
}