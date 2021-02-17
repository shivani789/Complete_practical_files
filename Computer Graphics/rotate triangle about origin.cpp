#include<iostream>
#include<graphics.h>
#include<math.h>
#define PI 22/7
using namespace std;
void dda(int X0, int Y0, int X1, int Y1)
{
    int dx = X1 - X0;
    int dy = Y1 - Y0;
    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);
    float Xinc = dx / (float) steps;
    float Yinc = dy / (float) steps;
    float X = X0;
    float Y = Y0;
    for (int i = 0; i <= steps; i++)
    {
        putpixel (X,Y,WHITE);
        X += Xinc;
        Y += Yinc;
    }
}
void triangle(float x1,float y1,float x2,float y2,float x3,float y3,float angle)
{
    float a[3][3];
	float p[3][3];
	float ans[3][3];
	a[0][0] = cos(angle);        //anticlockwise rotation
	a[1][0] = sin(angle);
	a[0][1] = -(sin(angle));
	a[1][1] = cos(angle);
	a[0][2] = 0;
	a[1][2] = 0;
	a[2][0] = 0;
	a[2][1] = 0;
	a[2][2] = 1;

	p[0][0]=x1;
	p[1][0]=y1;
	p[2][0]=1;
	p[0][1]=x2;
	p[1][1]=y2;
	p[2][1]=1;
	p[0][2]=x3;
	p[1][2]=y3;
	p[2][2]=1;

	int i,j,k;
	for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
            ans[i][j]=0;
    }
	for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            for(k = 0; k < 3; k++)
                ans[i][j] += a[i][k] * p[k][j];
        }
	}
	dda(ans[0][0],ans[1][0],ans[0][1],ans[1][1]);
	dda(ans[0][0],ans[1][0],ans[0][2],ans[1][2]);
	dda(ans[0][2],ans[1][2],ans[0][1],ans[1][1]);
	delay(5000);
}

int main()
{
    int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\Tc\\BGI");
	float x1,y1,x2,y2,x3,y3,theta;
	cout<<"Enter coordinates of triangle:"<<endl;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	cout<<"enter the angle:"<<endl;
	cin>>theta;
	float angle = (PI*theta)/180;
	dda(x1,y1,x2,y2);
    dda(x2,y2,x3,y3);
    dda(x1,y1,x3,y3);
triangle(x1,y1,x2,y2,x3,y3,angle);
/*	a[0][0] = cos(angle);        //clockwise rotation
	a[1][0] = sin(angle);
	a[0][1] = sin(angle);
	a[1][1] = cos(angle);   */
	getch();
	closegraph();
	return 0;
}
