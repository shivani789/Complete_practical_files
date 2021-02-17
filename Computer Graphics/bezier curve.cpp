#include <iostream>
#include <graphics.h>
#include<cmath>
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
void bezier (int x[],int y[])
{
int i;
double t,xt,yt;
for (t = 0.0; t < 1.0; t += 0.005)
{
xt = (1-t)*(1-t)*(1-t)*x[0]+3*t*(1-t)*(1-t)*x[1]+3*t*t*(1-t)*x[2]+t*t*t*x[3];
yt = (1-t)*(1-t)*(1-t)*y[0]+3*t*(1-t)*(1-t)*y[1]+3*t*t*(1-t)*y[2]+t*t*t*y[3];
putpixel (xt, yt,WHITE);
}

}
    int main()
    {
        initwindow(1000,1000);
      //   int gd = DETECT, gm;
    //initgraph(&gd, &gm, "");
    int x[]={130,150,150,120};
     int y[]={100,120,130,140};
    bezier(x,y);
    x[0]=130,x[1]=110,x[2]=130,x[3]=140;
    y[0]=100,y[1]=110,y[2]=120,y[3]=110;
    bezier(x,y);
     x[0]=120,x[1]=110,x[2]=135,x[3]=135;
    y[0]=140,y[1]=125,y[2]=120,y[3]=170;
    bezier(x,y);
    dda(170,100,170,170);
    dda(100,100,100,170);
    x[0]=100,x[1]=130,x[2]=150,x[3]=170;
    y[0]=100,y[1]=30,y[2]=50,y[3]=100;
    bezier(x,y);
    dda(220,100,220,170);
    x[0]=220,x[1]=170,x[2]=170,x[3]=220;
    y[0]=125,y[1]=130,y[2]=150,y[3]=155;
    bezier(x,y);
    dda(240,100,240,170);
    dda(300,100,300,170);
    dda(300,135,260,135);
    x[0]=260,x[1]=265,x[2]=275,x[3]=280;
    y[0]=135,y[1]=155,y[2]=155,y[3]=135;
    bezier(x,y);
    dda(320,100,320,170);
    x[0]=300,x[1]=305,x[2]=315,x[3]=320;
    y[0]=100,y[1]=60,y[2]=60,y[3]=100;
    bezier(x,y);
    dda(80,100,350,100);
    dda(420,100,420,150);
    x[0]=420,x[1]=400,x[2]=410,x[3]=420;
    y[0]=135,y[1]=140,y[2]=150,y[3]=150;
    bezier(x,y);
    dda(450,100,450,160);
     x[0]=450,x[1]=455,x[2]=430,x[3]=455;
    y[0]=170,y[1]=180,y[2]=160,y[3]=160;
    bezier(x,y);
    x[0]=450,x[1]=470,x[2]=430,x[3]=420;
    y[0]=160,y[1]=180,y[2]=175,y[3]=170;
    bezier(x,y);
    x[0]=470,x[1]=465,x[2]=470,x[3]=490;
    y[0]=100,y[1]=120,y[2]=130,y[3]=135;
    bezier(x,y);
    dda(530,100,530,170);
    x[0]=530,x[1]=480,x[2]=482,x[3]=510;
    y[0]=130,y[1]=125,y[2]=160,y[3]=170;
    bezier(x,y);
    dda(550,100,550,170);
    dda(390,100,570,100);
    getch();
        closegraph();
        return 0;
    }
