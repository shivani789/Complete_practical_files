#include<iostream>
#include<graphics.h>
using namespace std;
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
initwindow(1000,1000);
int gm,gd=DETECT;
int r,x,y;
cout<<"Enter the radius of the circle: "<<endl;
 cin>>r;
 cout<<"Enter the coordinates of center: "<<endl;
 cin>>x>>y;
midpoint_circle(r,x,y);
getch();
return 0;
}

