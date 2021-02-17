#include<math.h>
#include<dos.h>
#include<iostream>
#include<graphics.h>

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	float theta=6,x1,x2,y2,y1,x3,y3;
	circle(300,200,100);
		line(300,200,380,200);
   x1=300,y1=200,x2=380,y2=200;
   for(float j=0;;j+=0.104719755)
   {for(float i=0;i<=6.28318531;i=i+0.104719755)
    {
	line(x1,y1,x1+50*cos(j),y1+50*sin(j));
	circle(300,200,100);

	line(x1,y1,x1+80*cos(i),y1+80*sin(i));
       delay(500);
       cleardevice();
	}

    }
	closegraph();
	return 0;
}
