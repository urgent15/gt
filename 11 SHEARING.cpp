#include <stdio.h>
#include <graphics.h>
#include <conio.h>

void main()
{
    int gd = DETECT, gm;
    int x, y, x1, y1, x2, y2, shear_f;
    
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    printf("\n Please enter first coordinate = ");//100 100
    scanf("%d %d", &x, &y);

    printf("\n Please enter second coordinate = ");//200 100
    scanf("%d %d", &x1, &y1);

    printf("\n Please enter third coordinate = ");//150 200
    scanf("%d %d", &x2, &y2);

    printf("\n Please enter shearing factor x = ");//2
    scanf("%d", &shear_f);

    cleardevice();
    
    // Draw original triangle
    line(x, y, x1, y1);
    line(x1, y1, x2, y2);
    line(x2, y2, x, y);

    setcolor(RED);
    
    // Apply shearing transformation
    x = x + y * shear_f;
    x1 = x1 + y1 * shear_f;
    x2 = x2 + y2 * shear_f;

    // Draw sheared triangle
    line(x, y, x1, y1);
    line(x1, y1, x2, y2);
    line(x2, y2, x, y);

    getch();
    closegraph();
}