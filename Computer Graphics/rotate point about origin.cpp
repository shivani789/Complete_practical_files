#include <math.h>
#include<iostream>
#include <graphics.h>
#define PI 22/7
using namespace std;
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\Tc\\BGI");
		float x,y,theta;
		cout<<"Enter the point to be rotated: "<<endl;
	cin>>x>>y;
	cout<<"Enter the angle: "<<endl;
	cin>>theta;
		float angle = (PI*theta)/180;
	cout<<"("<<x<<","<<y<<")"<<endl;
	putpixel(x,y,WHITE);
	float m=(cos(angle)*x)+(-(sin(angle))*y);
	float n=(sin(angle)*x)+(cos(angle)*y);
	line(x,y,m,n);
	cout<<"Point after rotation: "<<endl;
		cout<<m<<","<<n<<endl;
		putpixel(m,n,WHITE);
	getch();
	closegraph();
	return 0;
}
