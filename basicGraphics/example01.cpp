#include<graphics.h>

int main()
{
    int gd = DETECT;
    int gm;

    initgraph(&gd, &gm, "");

    circle(200,200,100);
    getch();
    closegraph();
    return 0;
}
