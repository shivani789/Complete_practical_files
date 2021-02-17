#include<iostream>
#include<graphics.h>
#include<math.h>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main(){
 int gd=DETECT,gm;
 int i,xmid,ymid,x1,y1,x2,y2,x3,y3,x,y,dy,dx,p,gap=50,temp,option;
 int x1dash,x2dash,x3dash,y1dash,y2dash,y3dash;
 double theta;
 float m;
 char str[5];
 initgraph(&gd,&gm,"..\\bgi");
 cout<<"Enter coordinates first point of the triangle\n";
cin>>x1>>y1;
cout<<"Enter coordinates of second point of the triangle\n";
cin>>x2>>y2;
cout<<"Enter coordinates of third point of the triangle\n";
cin>>x3>>y3;

 xmid= getmaxx()/2;
 ymid= getmaxy()/2;

 line(x1+xmid,ymid-y1,x2+xmid,ymid-y2);
 line(x2+xmid,ymid-y2,x3+xmid,ymid-y3);
 line(x3+xmid,ymid-y3,x1+xmid,ymid-y1);

 cout<<"1.About X axis : \n";
 cout<<"2.About Y axis : \n";
 cout<<"3.About the line X=Y  : \n";
 cout<<" Enter your choice:";
 cin>>option;
 switch( option){
  case 1:
   y1=-y1;
   y2=-y2;
   y3=-y3;
   break;
  case 2:
   x1=-x1;x2=-x2;x3=-x3;
   break;
  case 3:
   y1=-y1;
   y2=-y2;
   y3=-y3;
      theta= ((double) 90 *3.14f )/(double)180;
      x1dash=x1*cos(theta)-y1*sin(theta);
      x2dash=x2*cos(theta)-y2*sin(theta);
      x3dash=x3*cos(theta)-y3*sin(theta);
      y1dash=x1*sin(theta)+y1*cos(theta);
      y2dash=x2*sin(theta)+y2*cos(theta);
      y3dash=x3*sin(theta)+y3*cos(theta);
      x1=x1dash;x2=x2dash;x3=x3dash;
      y1=y1dash;y2=y2dash;y3=y3dash;
   break;
}
 line(x1+xmid,ymid-y1,x2+xmid,ymid-y2);
 line(x2+xmid,ymid-y2,x3+xmid,ymid-y3);
 line(x3+xmid,ymid-y3,x1+xmid,ymid-y1);
 line(xmid,0,xmid,getmaxy());
 line(0,ymid,getmaxx(),ymid);
 getch();
 closegraph();
}
