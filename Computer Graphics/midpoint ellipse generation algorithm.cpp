#include<graphics.h>
#include<iostream>
using namespace std;
void ellipse(int rx,int ry,int xc,int yc)
{
    float dx,dy,d1,d2,x,y;
    x=0;
    y=ry;
    d1=(ry*ry)-(rx*rx*ry)+(0.25*rx*rx);          // Initial decision parameter of region 1
    dx=2*ry*ry*x;
    dy=2*rx*rx*y;
    while(dx<dy)       // For region 1
    {
         // Print points based on 4-way symmetry
        putpixel(x+xc,y+yc,WHITE);
        putpixel(-x+xc,y+yc,WHITE);
        putpixel(x+xc,-y+yc,WHITE);
        putpixel(-x+xc,-y+yc,WHITE);
        // Checking and updating value of
        // decision parameter based on algorithm
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
    // Decision parameter of region 2
    d2=((ry*ry)*((x+0.5)*(x+0.5)))+((rx*rx)*((y-1)*(y-1)))-(rx*rx*ry*ry);
    // Plotting points of region 2
    while (y >= 0)
    {
        // Print points based on 4-way symmetry
        putpixel(x+xc,y+yc,WHITE);
        putpixel(-x+xc,y+yc,WHITE);
        putpixel(x+xc,-y+yc,WHITE);
        putpixel(-x+xc,-y+yc,WHITE);
        // Checking and updating parameter
        // value based on algorithm
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
int main()
{
    int xc,yc,rx,ry;
    initwindow(1000,1000);
    cout<<"Enter the center coordinates of ellipse: "<<endl;
    cin>>xc>>yc;
    cout<<"Enter the radius of x and y axes respectively: "<<endl;
    cin>>rx>>ry;
    ellipse(rx,ry,xc,yc);
    getch();
    return 0;
}
