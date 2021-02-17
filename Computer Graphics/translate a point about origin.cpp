#include <conio.h>
#include<iostream>
#include <graphics.h>
using namespace std;
 main()
{
	int gd=DETECT,gm,x,y,tx,ty;
	initgraph(&gd,&gm,"C:\\Tc\\BGI");
	cin>>x>>y>>tx>>ty;
	cout<<"("<<x<<","<<y<<")"<<endl;
	putpixel(x,y,WHITE);
	cout<<"("<<x+tx<<","<<y+ty<<")"<<endl;
			putpixel(x+tx,y+ty,WHITE);
			line(x,y,x+tx,y+ty);
	getch();
	closegraph();

}
