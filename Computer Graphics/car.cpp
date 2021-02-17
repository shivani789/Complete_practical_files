#include<iostream>
#include<graphics.h>
#include<math.h>
int main(){
int gd = DETECT, gm;
initgraph(&gd, &gm, "C:\\TC\\BGI");
int x1=-50,y1=300;
double t1=1.0472*2, t2=2.0944*2, t3=0;
while(x1-60<getmaxx())
{
 cleardevice();
 line(x1-50,y1,x1+150,y1);
 line(x1-50,y1,x1-50,y1-20);
 line(x1+150,y1,x1+150,y1-20);
 line(x1-20,y1-40,x1-50,y1-20);
 line(x1+150,y1-20,x1+120,y1-40);
 line(x1+10,y1-40,x1+90,y1-40);
 line(x1-20,y1-40,x1+120,y1-40);
 line(x1,y1,x1+20*cos(t1),y1+20*sin(t1));
 line(x1,y1,x1+20*cos(t2),y1+20*sin(t2));
  line(x1,y1,x1+20*cos(t3),y1+20*sin(t3));
line(x1+100,y1,x1+100+20*cos(t1),y1+20*sin(t1));
 line(x1+100,y1,x1+100+20*cos(t2),y1+20*sin(t2));
 line(x1+100,y1,x1+100+20*cos(t3),y1+20*sin(t3));

 circle(x1,y1,20);
circle(x1+100,y1,20);

 line(0,320,640,320);
   t1+=0.05;
    t2+=0.05;
     t3+=0.05;
     x1++;
     delay(15);
       }
       return 0;
        }
