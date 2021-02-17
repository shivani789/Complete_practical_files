#include<iostream>
#include<math.h>
#define PI 22/7
using namespace std;
int main()
{
	float x,y,theta,sum1=0,sum2=0;
	cin>>x>>y>>theta;
	cout<<x<<","<<y<<endl;
	float a[2][2];
	float p[2][2];
	float angle = (PI*theta)/180;
/*	a[0][0] = cos(angle);        //clockwise rotation
	a[1][0] = sin(angle);
	a[0][1] = sin(angle);
	a[1][1] = cos(angle);   */
	
	a[0][0] = cos(angle);        //anticlockwise rotation
	a[1][0] = sin(angle);
	a[0][1] = -(sin(angle));
	a[1][1] = cos(angle);
	
	p[0][0]=x;
	p[1][0]=y;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
			{		
				sum1+=(p[j][0] * a[j][0]);
				sum2+=(p[j][0] * a[j][1]);
			}
	}
	cout<<sum1<<","<<sum2<<endl;
	return 0;
}
