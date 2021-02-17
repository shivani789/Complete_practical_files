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
void midpoint_circle(int r,int xc,int yc)
{
    int x=0,y=r;
   int p=1-r;
           putpixel(x,y,WHITE);
   while(x<y)
   {
       if(p<0)
       {
           p=p+2*x+1;
           x+=1;
       }
       else
       {
           p=p+2*x-2*y+1;
           x+=1;
           y--;
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
int main()
{
   int gd = DETECT,gm;
   initgraph(&gd, &gm, "X:\\TC\\BGI");
while(1)
{
    for(int i=0;i<500;i++)
    {
        dda(50+i,370,90+i,370);
        dda(130+i,370,200+i,370);
        dda(240+i,370,300+i,370);
        dda(300+i,370,300+i,350);
        dda(300+i,350,240+i,330);
        dda(240+i,330,200+i,300);
        dda(200+i,300,110+i,300);
        dda(110+i,300,80+i,330);
        dda(80+i,330,50+i,370);
        //windows
        dda(165+i,305,165+i,330);
        dda(165+i,330,230+i,330);
        dda(230+i,330,195+i,305);
        dda(195+i,305,165+i,305);

        dda(160+i,305,165+i,330);
        dda(160+i,330,95+i,330);
        dda(95+i,330,120+i,305);
        dda(120+i,305,160+i,305);
        //wheels
        midpoint_circle(17,220+i,370);
        midpoint_circle(17,110+i,370);
        delay(10);
        cleardevice();
    }
}
    getch();
    closegraph();
    return 0;}
