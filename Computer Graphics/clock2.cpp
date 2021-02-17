#include<graphics.h>
#include<iostream>
#include<math.h>

int main()
{
   int gd = DETECT,gm;
   initgraph(&gd, &gm, "X:\\TC\\BGI");
   float pie=3.141592653589793238;

 //  delay(2000);

   for(float t=0;t<=2*pie;t=t+6*pie/180)
   {
       circle(100,100,100);
       line(100,100,100+50*cos(t),100+50*sin(t));
       delay(100);
       cleardevice();
   }
   getch();
   closegraph();
   return 0;
}
