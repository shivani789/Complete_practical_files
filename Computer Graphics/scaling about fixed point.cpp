//scaling
#include <conio.h>
#include<iostream>
#include <graphics.h>
using namespace std;
 main()
{
	int gd=DETECT,gm,x,y,sx,sy,c,h,k,p,q;
	initgraph(&gd,&gm,"C:\\Tc\\BGI");
	cout<<"Enter the point to be scaled:"<<endl;
	cin>>x>>y;
	cout<<"("<<x<<","<<y<<")"<<endl;
	putpixel(x,y,WHITE);
	cout<<"point about which to be scaled:"<<endl;
	cin>>h>>k;
	cout<<"enter choice 1. about x-axis 2. about y-axis 3. about x and y axes:"<<endl;
	cin>>c;
	switch(c)
	{
    case 1:
        cout<<"enter sx:"<<endl;
        cin>>sx;
        p=sx*x-h*sx+h;
        cout<<"("<<p<<","<<y<<")"<<endl;
        putpixel(p,y,WHITE);
        line(x,y,p,y);
        break;
    case 2:
         cout<<"Enter sy:"<<endl;
        cin>>sy;
        q=sy*y-k*sy+k;
        cout<<"("<<x<<","<<p<<")"<<endl;
        putpixel(x,p,WHITE);
        line(x,y,x,p);
        break;
    case 3:
         cout<<"Enter sx and sy:"<<endl;
        cin>>sx>>sy;
        p=sx*x-h*sx+h;
        q=sy*y-k*sy+k;
        cout<<"("<<p<<","<<q<<")"<<endl;
        putpixel(p,q,WHITE);
        line(x,y,p,q);
        break;
	}
	getch();
	closegraph();

}
