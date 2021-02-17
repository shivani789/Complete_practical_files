#include <conio.h>
#include<math.h>
#include<iostream>
#include <graphics.h>
using namespace std;
 main()
{
    int gd=DETECT,gm;
	int x1,y1,x2,y2,x3,y3;
	initgraph(&gd,&gm,"C:\\Tc\\BGI");
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);

	  getch();
	closegraph();
}

