#include<iostream>
#include<graphics.h>
using namespace std;
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
int main()
{
initwindow(1500,1500);
int x1,y1,x2,y2;
cin>>x1>>y1>>x2>>y2;
dda(x1,y1,x2,y2);
getch();

}
