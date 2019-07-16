#include<winbgim.h>
#include <graphics.h>
#include <stdio.h>

int main()
{
    int gd = DETECT;
    int gm;
    char driver[] = "C:\\TC\\BGI";
    initgraph(&gd, &gm, driver);

    printf("gm :%d", gd);

    arc(200, 200, 0, 130, 50);

    closegraph();
    return 0;
}
