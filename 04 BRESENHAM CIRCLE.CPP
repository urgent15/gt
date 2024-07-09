#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>

int main() {
    int gd = DETECT, gm;
    int x, y, r;

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");  // Initialize graphics mode

    printf("Enter the center coordinates (x, y) and radius: "); //100 100 50
    scanf("%d%d%d", &x, &y, &r);

    // Midpoint circle drawing algorithm using Bresenham's approach
    int x_current = 0, y_current = r;
    int decision_param = 3 - 2 * r;

    while (x_current <= y_current) {
        putpixel(x + x_current, y + y_current, WHITE);  // Draw white pixels
        putpixel(x - x_current, y + y_current, WHITE);
        putpixel(x + x_current, y - y_current, WHITE);
        putpixel(x - x_current, y - y_current, WHITE);
        putpixel(x + y_current, y + x_current, WHITE);
        putpixel(x - y_current, y + x_current, WHITE);
        putpixel(x + y_current, y - x_current, WHITE);
        putpixel(x - y_current, y - x_current, WHITE);

        x_current++;

        if (decision_param < 0) {
            decision_param += 4 * x_current + 6;
        } else {
            y_current--;
            decision_param += 4 * (x_current - y_current) + 10;
        }
    }

    getch();
    closegraph();
    return 0;
}