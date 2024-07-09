#include <stdio.h>
#include <math.h>
#include <graphics.h>
#include <conio.h>
void DrawTriangle(int x1, int y1, int x2, int y2, int x3, int y3);
void RotateTriangle(int x1, int y1, int x2, int y2, int x3, int y3, float angle);
void main()
{
    int gd,gm;
    int x1, y1, x2, y2, x3, y3;
    float angle;
    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    printf("Enter the 1st point of the triangle(x1,y1): ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the 2nd point of the triangle(x2,y2): ");
    scanf("%d %d", &x2, &y2);
    printf("Enter the 3rd point of the triangle(x3,y3): ");
    scanf("%d %d", &x3, &y3);
    cleardevice();
    DrawTriangle(x1, y1, x2, y2, x3, y3);
    printf("Enter the angle of rotation: ");
    scanf("%f", &angle);
    RotateTriangle(x1, y1, x2, y2, x3, y3, angle);
    getch();
    closegraph();
}

void DrawTriangle(int x1, int y1, int x2, int y2, int x3, int y3)
{
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
}

void RotateTriangle(int x1, int y1, int x2, int y2, int x3, int y3, float angle)
{
    int p=x2, q=y2;
    float rad = angle * (3.14159 / 180.0);

    int a1 = p+(x1-p)*cos(rad)-(y1-q)*sin(rad);
    int b1 = q+(x1-p)*sin(rad)+(y1-q)*cos(rad);
    int a2 = p+(x2-p)*cos(rad)-(y2-q)*sin(rad);
    int b2 = q+(x2-p)*sin(rad)+(y2-q)*cos(rad);
    int a3 = p+(x3-p)*cos(rad)-(y3-q)*sin(rad);
    int b3 = q+(x3-p)*sin(rad)+(y3-q)*cos(rad);
    setcolor(RED); 
    DrawTriangle(a1, b1, a2, b2, a3, b3);
}
