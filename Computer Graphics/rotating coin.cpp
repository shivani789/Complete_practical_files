#include<graphics.h>
#include<iostream>
using namespace std;
void midpoint_ellipse(int rx,int ry,int xc,int yc)
{
    float dx,dy,d1,d2,x,y;
    x=0;
    y=ry;
    d1=(ry*ry)-(rx*rx*ry)+(0.25*rx*rx);
    dx=2*ry*ry*x;
    dy=2*rx*rx*y;
    while(dx<dy)
    {
        putpixel(x+xc,y+yc,WHITE);
        putpixel(-x+xc,y+yc,WHITE);
        putpixel(x+xc,-y+yc,WHITE);
        putpixel(-x+xc,-y+yc,WHITE);
        if(d1<0)
        {
            x++;
            dx=dx+(2*ry*ry);
            d1=d1+dx+(ry*ry);
        }
        else
        {
            x++;
            y--;
            dx=dx+(2*ry*ry);
            dy=dy-(2*rx*rx);
            d1=d1+dx-dy+(ry*ry);
        }
    }
    d2=((ry*ry)*((x+0.5)*(x+0.5)))+((rx*rx)*((y-1)*(y-1)))-(rx*rx*ry*ry);
    while (y >= 0)
    {
        putpixel(x+xc,y+yc,WHITE);
        putpixel(-x+xc,y+yc,WHITE);
        putpixel(x+xc,-y+yc,WHITE);
        putpixel(-x+xc,-y+yc,WHITE);
        if(d2>0)
        {
            y--;
            dy=dy-(2*rx*rx);
            d2=d2+(rx*rx)-dy;
        }
        else
        {
            y--;
            x++;
            dx=dx+(2*ry*ry);
            dy=dy-(2*rx*rx);
            d2=d2+dx-dy+(rx*rx);
        }
    }
    }
void bressenham_circle(int xc,int yc,int r)
{
    int x=0;
    int y=r;
    int d=3-2*r;

    while(y>=x)
    {
        x++;
            if(d<0)
            {
            d=d+4*x+6;
            }
            else if(d>=0)
            {
            d=d+4*x-4*y+10;
            y=y-1;
            }
    putpixel(xc+x,yc+y,WHITE);
    putpixel(xc-x,yc+y,WHITE);
    putpixel(xc+x,yc-y,WHITE);
    putpixel(xc-x,yc-y,WHITE);
    putpixel(xc+y,yc+x,WHITE);
    putpixel(xc-y,yc+x,WHITE);
    putpixel(xc+y,yc-x,WHITE);
    putpixel(xc-y,yc-x,WHITE);
    }

}
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
    int gm,gd=DETECT;
    initgraph(&gd, &gm, "d:\\tc\\bgi");
while(1){
    bressenham_circle(300,200,100);
    dda(200,300,400,300);
        outtextxy(290,170,"rupees");
      outtextxy(290,200,"100");
      outtextxy(260,230 ,"Govt. of India");
      outtextxy(280,260,"2019");
        delay(100);
        cleardevice();
        midpoint_ellipse(20,100,300,200);
        dda(200,300,400,300);
        delay(100);
        cleardevice();
        midpoint_ellipse(30,100,300,200);
        dda(200,300,400,300);
        delay(100);
        cleardevice();
         midpoint_ellipse(40,100,300,200);
         dda(200,300,400,300);
        delay(100);
        cleardevice();
        midpoint_ellipse(10,100,300,200);
        dda(200,300,400,300);
        delay(100);
        cleardevice();
}
getch();
return 0;
}
