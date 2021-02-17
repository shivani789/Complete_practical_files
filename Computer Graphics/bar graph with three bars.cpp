#include<iostream>
#include<graphics.h>
using namespace std;
void DDA(int X0, int Y0, int X1, int Y1)
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
int main()
{
    int gd = DETECT,gm;
    initgraph(&gd, &gm, "X:\\TC\\BGI");
    DDA(100,300,100,100);
    DDA(100,300,300,300);
    DDA(125,300,125,200);
    DDA(135,300,135,200);
    DDA(125,200,135,200);
    DDA(150,300,150,250);
    DDA(160,300,160,250);
    DDA(150,250,160,250);
    DDA(175,300,175,150);
    DDA(185,300,185,150);
    DDA(175,150,185,150);
    getch();
    closegraph();
    return 0;}
