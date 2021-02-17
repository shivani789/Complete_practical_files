#include<iostream>
#include<graphics.h>
using namespace std;
void bresenham_circle(int r,int xc,int yc)
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
int main()
{
initwindow(1000,1000);
int gm,gd=DETECT;
int r,x,y;
 cin>>r>>x>>y;
bresenham_circle(r,x,y);
getch();
return 0;
}
