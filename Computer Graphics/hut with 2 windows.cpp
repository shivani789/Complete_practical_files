#include<graphics.h>
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
void bresenham_circle(int xc,int yc,int r)
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
    rectangle1(150,180,250,300);
    rectangle1(250,180,420,300);
    rectangle1(180,250,220,300);
    rectangle1(300,200,350,250);

    dda(200,100,150,180);
    dda(200,100,250,180);
    dda(200,100,370,100);
    dda(370,100,420,180);

    bresenham_circle(200,160,10);
    getch();
    closegraph();
    return 0;
}
