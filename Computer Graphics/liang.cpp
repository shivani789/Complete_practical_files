#include<iostream>
#include<graphics.h>
#include<conio.h>
using namespace std;
void drawline(int x1,int y1,int x2,int y2);

int main()
 {
 int gd = DETECT, gm;
 initgraph(&gd, &gm, "C:\\TC\\BGI");

float x1,x2,y1,y2,xmin,xmax,ymin,ymax;
cout<<"Enter coordinates of first end point \n";
cin>>x1>>y1;
cout<<"Enter coordinates of second end point \n";
cin>>x2>>y2;
cout<<"Enter window edges xmin, xmax, ymin, ymax in this order";
cin>>xmin>>xmax>>ymin>>ymax;

drawline(x1,y1,x2,y2);

drawline(xmin,ymin,xmax,ymin);  //Boundaries of clipping area
drawline(xmax,ymin,xmax,ymax);
drawline(xmax,ymax,xmin,ymax);
drawline(xmin,ymax,xmin,ymin);

float p1=-(x2-x1), p2=x2-x1, p3=-(y2-y1), p4=y2-y1;
float q1=x1-xmin, q2=xmax-x1, q3=y1-ymin, q4=ymax-y1;

float tmin=0, tmax=1, t1=q1/p1, t2=q2/p2, t3=q3/p3, t4=q4/p4;

if(p1<0 && t1>tmin)
 tmin=t1;
 else if(p1>0 && t1<tmax)
 tmax=t1;

if(p2<0 && t2>tmin)
tmin=t2;
else if(p2>0 && t2<tmax)
tmax=t2;

if(p3<0 && t3>tmin)
tmin=t3;
else if(p3>0 && t3<tmax)
tmax=t3;
if(p4<0 && t4>tmin)
tmin=t4;
else if(p4>0 && t4<tmax)
tmax=t4;

x2=x1+tmax*p2;
y2=y1+tmax*p4;

x1+=tmin*p2;
y1+=tmin*p4;

getch();
cleardevice();
drawline(xmin,ymin,xmax,ymin);
drawline(xmax,ymin,xmax,ymax);
drawline(xmax,ymax,xmin,ymax);
drawline(xmin,ymax,xmin,ymin);

if(tmin<tmax)
 drawline((int)(x1+0.5),(int)(y1+0.5),(int)(x2+0.5),(int)(y2+0.5));

getch();
}
