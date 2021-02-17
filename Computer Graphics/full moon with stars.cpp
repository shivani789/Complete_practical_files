#include <graphics.h>
#include<conio.h>
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
void star(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4,int x5,int y5)
{
    dda(x1,y1,x3,y3);
    dda(x1,y1,x4,y4);
    dda(x2,y2,x5,y5);
    dda(x2,y2,x4,y4);
    dda(x5,y5,x3,y3);
}
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, " ");
    midpoint_circle(70,300,300);
    star(100,100,120,90,140,100,130,120,110,120);
    star(150,150,170,140,190,150,180,170,160,170);
    star(200,200,220,190,240,200,230,220,210,220);
    getch();
    closegraph();
    return 0;
}
