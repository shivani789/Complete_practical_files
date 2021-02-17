//reflection about x axis
#include <conio.h>
#include<math.h>
#include<iostream>
#include <graphics.h>
#define PI 22/7
using namespace std;
void print(float a[3][3])
{
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
    cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
}
 main()
{
	int gd=DETECT,gm;
	float x,y,r[3][3],p[3][3],b[3][3],theta,angle,s[3][3],ans[3][3],h,k;
	initgraph(&gd,&gm,"C:\\Tc\\BGI");
	cout<<"Point about which to rotate:"<<endl;
	cin>>h>>k;
	cout<<"Point to be rotated:"<<endl;
	cin>>x>>y;
	cout<<"Enter the angle of rotation:"<<endl;
	cin>>theta;
	cout<<"("<<x<<","<<y<<")"<<endl;
	putpixel(x,y,WHITE);
	//translate to that point
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        p[0][2]=-h;
    p[1][2]=-k;
    if(i==j)
        p[i][j]=1;
    else
        p[i][j]=0;
    }
}
cout<<"Matrix after shifting the origin to that point:"<<endl;
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        cout<<p[i][j]<<" ";
    }
    cout<<endl;
}
cout<<"Rotation Matrix:"<<endl;
angle=(PI*theta)/180;
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        if((i==0&&j==0)||(i==1&&j==1))
            r[i][j]=cos(angle);
        else
            r[i][j]=0;
        r[2][2]=1;
        int k=-sin(angle);
        r[0][1]=k;
        r[1][0]=sin(angle);
        }
}
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        cout<<r[i][j]<<" ";
    }
    cout<<endl;
}
cout<<"After multiplying rotation and origin shifted matrices : "<<endl;
//multiplication
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        b[i][j]+=(r[i][j]*p[j][i]);
    }
}
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        cout<<b[i][j]<<" ";
    }
    cout<<endl;
}
cout<<"Matrix after translating back to that point:"<<endl;
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        s[0][2]=x;
    s[1][2]=y;
    if(i==j)
        s[i][j]=1;
    else
        s[i][j]=0;
    }
}
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
    cout<<s[i][j]<<" ";
    }
    cout<<endl;
}
cout<<"Answer Matrix:"<<endl;
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        ans[i][j]+=(s[i][j]*b[j][i]);
    }
}
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
    cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}
cout<<"The resultant point:"<<endl;


    getch();
	closegraph();
}
