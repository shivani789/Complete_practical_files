#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
void Bresenham(float x1,float y1,float x2,float y2)
{
    float x,y;
    float dx=x2-x1;
    float dy=y2-y1;
    x=x1;
    y=y1;
    float p=2*dy-dx;
    while(x<x2)
    {
    	if(p<0)
        {
            putpixel(x,y,WHITE);
          p=p+2*dy;
        }
    	else
        {
            putpixel(x,y,WHITE);
          p=p+2*dy-2*dx;
          y=y+1;
        }
    	x++;
	}
}
int main()
{
initwindow(1000,1000);
float x1,x2,y1,y2;
cin>>x1>>y1>>x2>>y2;
Bresenham(x1,y1,x2,y2);
getch();
}
