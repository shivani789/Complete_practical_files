#include<iostream>
#include<graphics.h>
#include<math.h>
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
int main()
{
    int gd=DETECT, gm;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
    int x1,y1,x2,y2,x3,y3,X1,Y1,X2,Y2,X3,Y3,tx,ty;
   cout<<"enter the triangle coordinates"<<endl;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    cout<<"enter the value of scaling in x-axis"<<endl;
    cin>>tx;
    cout<<"enter the value of scaling in y-axis"<<endl;
    cin>>ty;
    dda(x1,y1,x2,y2);
    dda(x2,y2,x3,y3);
    dda(x1,y1,x3,y3);
    X1=x1+tx;
    Y1=y1+ty;
    X2=x2+tx;
    Y2=y2+ty;
    X3=x3+tx;
    Y3=y3+ty;
    dda(X1,Y1,X2,Y2);
    dda(X2,Y2,X3,Y3);
    dda(X1,Y1,X3,Y3);
    getch();
    closegraph();
    return 0;

}
