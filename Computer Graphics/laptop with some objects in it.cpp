#include<iostream>
#include<graphics.h>
#include<math.h>
#include<conio.h>
void dda(int X0, int Y0, int X1, int Y1)
{
    int dx = X1 - X0;
    int dy = Y1 - Y0;
    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);
    float Xinc = dx / (float) steps;
    float Yinc = dy / (float) steps;
    float X = X0;
    float Y = Y0;
    for (int i = 0; i <= steps; i++)
    {
        putpixel (X,Y,WHITE);
        X += Xinc;
        Y += Yinc;
    }
}
void rectangle1(int x1,int y1,int x2,int y2)
{
    dda(x1,y1,x2,y1);
    dda(x1,y2,x2,y2);
    dda(x2,y1,x2,y2);
    dda(x1,y1,x1,y2);
}
int main(){
 int gd = DETECT,gm;
    initgraph(&gd, &gm, "X:\\TC\\BGI");
    rectangle1(100,100,320,260);
    rectangle1(110,110,310,250);

    dda(90,360,330,360);
    dda(90,365,330,365);
    dda(90,360,110,260);
    dda(330,360,310,260);

    dda(120,270,300,270);
    dda(110,315,310,315);
    dda(120,270,110,315);
    dda(300,270,310,315);

    dda(185,325,225,325);
    dda(180,345,230,345);
    dda(185,325,180,345);
    dda(225,325,230,345);

    setfillstyle(SOLID_FILL, 7);
    floodfill(111, 111, WHITE);
    setfillstyle(HATCH_FILL, GREEN);
    floodfill(121, 271, WHITE);
    setfillstyle(SOLID_FILL, 15);
    floodfill(186, 326, WHITE);
    outtextxy(200,200,"Windows 10");
    getch();
    closegraph();
    return 0;
}
