#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;
int main()
{
    int gd=DETECT, gm;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	int x1,y1,x2,y2,x3,y3,X1,Y1,X2,Y2,X3,Y3,m,b;
    cout<<"enter the triangle coordinates"<<endl;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    cout<<"enter the value of slope"<<endl;
    cin>>m;
    cout<<"enter the value of constant"<<endl;
    cin>>b;
    line(300,0,300,600);
    line(0,200,700,200);

    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x1,y1,x3,y3);

    X1=(x1*(1-m*m))/(1+m*m)+ (2*m*y1)/(1+m*m)-(2*b*m)/(1+m*m);
    Y1=(2*x1*m)/(1+m*m)+(y1*(m*m-1))/(1+m*m)+(2*b)/(1+m*m);

    X2=(x2*(1-m*m))/(1+m*m)+ (2*m*y2)/(1+m*m)-(2*b*m)/(1+m*m);
    Y2=(2*x2*m)/(1+m*m)+(y2*(m*m-1))/(1+m*m)+(2*b)/(1+m*m);

    X3=(x3*(1-m*m))/(1+m*m)+ (2*m*y3)/(1+m*m)-(2*b*m)/(1+m*m);
    Y3=(2*x3*m)/(1+m*m)+(y3*(m*m-1))/(1+m*m)+(2*b)/(1+m*m);

    line(X1,Y1,X2,Y2);
    line(X2,Y2,X3,Y3);
    line(X3,Y3,X1,Y1);
    getch();
    closegraph();

    return 0;

}
