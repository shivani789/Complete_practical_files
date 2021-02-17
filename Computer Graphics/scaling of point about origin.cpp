//scaling
#include <conio.h>
#include<iostream>
#include <graphics.h>
using namespace std;
 main()
{
	int gd=DETECT,gm,x,y,sx,sy,c;
	initgraph(&gd,&gm,"C:\\Tc\\BGI");
	cout<<"Enter the point:"<<endl;
	cin>>x>>y;
	cout<<"("<<x<<","<<y<<")"<<endl;
	putpixel(x,y,WHITE);
	cout<<"enter choice: 1. about x-axis 2. about y-axis 3. about x and y axes"<<endl;
	cin>>c;
	switch(c)
	{
    case 1:
        cout<<"Enter sx:"<<endl;
        cin>>sx;
        cout<<"("<<x*sx<<","<<y<<")"<<endl;
        putpixel(x*sx,y,WHITE);
        line(x,y,sx*x,y);
        break;
    case 2:
        cout<<"Enter sy:"<<endl;
        cin>>sy;
        cout<<"("<<x<<","<<y*sy<<")"<<endl;
        putpixel(x,y*sy,WHITE);
        line(x,y,x,y*sy);
        break;
    case 3:
        cout<<"Enter sx and sy:"<<endl;
        cin>>sx>>sy;
        cout<<"("<<x*sx<<","<<y*sy<<")"<<endl;
        putpixel(x*sx,y*sy,WHITE);
        line(x,y,x*sx,y*sy);
        break;
	}
	getch();
	closegraph();
return 0;
}
