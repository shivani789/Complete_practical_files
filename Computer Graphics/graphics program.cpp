#include <conio.h>
#include<iostream>
#include <graphics.h>
using namespace std;
 main()
{
	int gd=DETECT,gm,n;
	initgraph(&gd,&gm,"C:\\Tc\\BGI");
	cout<<"Number of sides of polygon:"<<endl;
	cin>>n;

	getch();
	closegraph();

}
