//reflection about x axis
#include <conio.h>
#include<iostream>
#include <graphics.h>
using namespace std;
 main()
{
	int gd=DETECT,gm,x,y,a[3][3],p[3][1],b[3][1]={0,};
	initgraph(&gd,&gm,"C:\\Tc\\BGI");
	cin>>x>>y;
	cout<<"Point to be reflected:"<<endl;
	cout<<"("<<x<<","<<y<<")"<<endl;
	putpixel(x,y,WHITE);
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
    if((i==0&&j==0)||(i==2&&j==2))
        a[i][j]=1;
    else if(i==1&&j==1)
        a[i][j]=-1;
        else
            a[i][j]=0;
    }
}
cout<<"Reflection matrix:"<<endl;
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
    cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
p[0][0]=x;
p[1][0]=y;
p[2][0]=1;
cout<<"Coordinate Matrix:"<<endl;
for(int i=0;i<3;i++)
{
        cout<<p[i][0]<<endl;
}
//multiplication
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        b[i][0]+=(a[i][j]*p[j][0]);
    }

}
cout<<"after multiplication:"<<endl;
for(int i=0;i<3;i++)
{
        cout<<b[i][0]<<endl;
}
putpixel(b[0][0],b[1][0],WHITE);
    getch();
	closegraph();
}
