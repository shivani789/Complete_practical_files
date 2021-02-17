//shearing menu driven program
#include <conio.h>
#include<iostream>
#include <graphics.h>
using namespace std;
 main()
{
	int gd=DETECT,gm,x,y,a[3][3],p[3][1],b[3][1]={0,},c,shx,shy;
	initgraph(&gd,&gm,"C:\\Tc\\BGI");
	cout<<"Enter the point"<<endl;
	cin>>x>>y;
	cout<<"Point to be sheared"<<endl;
	cout<<"("<<x<<","<<y<<")"<<endl;
	cout<<"Enter choice"<<endl<<"1.About x-axis"<<endl<<"2.About y-axis"<<endl<<"3.About x and y axes"<<endl;
	cin>>c;
	p[0][0]=x;
    p[1][0]=y;
    p[2][0]=1;
    cout<<"Coordinate Matrix:"<<endl;
for(int i=0;i<3;i++)
{
        cout<<p[i][0]<<endl;
}
	putpixel(x,y,WHITE);
	switch(c)
	{
    case 1:
        cout<<"Enter Shx:"<<endl;
        cin>>shx;
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        a[1][0]=shx;
        if(i==j)
            a[i][j]=1;
        else
            a[i][j]=0;
    }
}
cout<<"shearing matrix for x axis:"<<endl;
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
    cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
//multiplication
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        b[i][0]+=(a[i][j]*p[j][0]);
    }
}
cout<<"after multiplication about x-axis:"<<endl;
for(int i=0;i<3;i++)
{
        cout<<b[i][0]<<endl;
}
putpixel(b[0][0],b[1][0],WHITE);
line(x,y,b[0][0],b[1][0]);
        break;
    case 2:
        cout<<"Enter Shy:"<<endl;
        cin>>shy;
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        a[0][1]=shy;
        if(i==j)
            a[i][j]=1;
        else
            a[i][j]=0;
    }
}
cout<<"shearing matrix for y axis:"<<endl;
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
    cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        b[i][0]+=(a[i][j]*p[j][0]);
    }
}
cout<<"after multiplication about y-axis:"<<endl;
for(int i=0;i<3;i++)
{
        cout<<b[i][0]<<endl;
}
putpixel(b[0][0],b[1][0],WHITE);
line(x,y,b[0][0],b[1][0]);
        break;
    case 3:
         cout<<"Enter Shx and Shy:"<<endl;
        cin>>shx>>shy;
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        a[1][0]=shx;
        a[0][1]=shy;
        if(i==j)
            a[i][j]=1;
        else
            a[i][j]=0;
    }
}
cout<<"shearing matrix for x and y axes:"<<endl;
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
    cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        b[i][0]+=(a[i][j]*p[j][0]);
    }
}
cout<<"after multiplication about x and y axes:"<<endl;
for(int i=0;i<3;i++)
{
        cout<<b[i][0]<<endl;
}
putpixel(b[0][0],b[1][0],WHITE);
line(x,y,b[0][0],b[1][0]);
        break;
	}
	getch();
	closegraph();
}
