#include <iostream>
#include <graphics.h>
#include <conio.h>
#include <math.h>
#define PI 22/7
using namespace std;
 main()
{
	int gd=DETECT,gm;
	float angle,x,y,theta,h,k;
	int dx,dy;
	initgraph(&gd,&gm,"C:\\Tc\\BGI");
	cout<<"Points to be rotated:"<<endl;
	cin>>x>>y;
	cout<<"("<<x<<","<<y<<")"<<endl;
	cout<<"Point about which to rotate:"<<endl;
	cin>>h>>k;
		cout<<"("<<h<<","<<k<<")"<<endl;
	cout<<"Enter the angle of rotation:"<<endl;
	cin>>theta;
	putpixel(x,y,WHITE);
	angle=(PI*theta)/180;
	//cout<<sin(angle)<<" "<<cos(angle);
	dy=(x*sin(angle)+y*cos(angle)+k-h*sin(angle)-k*cos(angle));
	dx=(x*cos(angle)-y*sin(angle)+h-h*cos(angle)+k*sin(angle));
	cout<<"Resultant point:"<<endl;
	cout<<"("<<dx<<","<<dy<<")"<<endl;
	putpixel(dx,dy,WHITE);
	line(x,y,dx,dy);
	 getch();
	closegraph();
}

