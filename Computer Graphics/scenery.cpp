#include <iostream>
#include <graphics.h>
#include<cmath>
using namespace std;
void bezier (int x[],int y[])
{
int i;
double t,xt,yt;
for (t = 0.0; t < 1.0; t += 0.005)
{
xt = (1-t)*(1-t)*(1-t)*x[0]+3*t*(1-t)*(1-t)*x[1]+3*t*t*(1-t)*x[2]+t*t*t*x[3];
yt = (1-t)*(1-t)*(1-t)*y[0]+3*t*(1-t)*(1-t)*y[1]+3*t*t*(1-t)*y[2]+t*t*t*y[3];
putpixel (xt, yt,WHITE);
}

}
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
        initwindow(1000,1000);
       /* int x[]={20,80,120,160};
        int y[]={300,250,360,320};
        bezier(x,y);
        x[0]=160,x[1]=220,x[2]=280,x[3]=340;
        y[0]=320,y[1]=250,y[2]=360,y[3]=300;
        bezier(x,y);
        x[0]=340,x[1]=420,x[2]=500,x[3]=540;
        y[0]=300,y[1]=250,y[2]=360,y[3]=300;
        bezier(x,y); */
       /* dda(20,350,100,300);
   int p[]={120,150,200,250};
        int q[]={350,390,420,380};
        bezier(p,q); */
        int p[]={80,150,250,400};
        int q[]={300,50,50,300};
        bezier(p,q);
        int s[]={700,730,750,740};
        int r[]={100,105,115,135};
        bezier(s,r);
        int a[]={740,770,790,780};
        int b[]={135,120,120,100};
        bezier(a,b);
        /*for(int i=10;i<1000;i+=10)
        {
            bezier(s+i,r);
            bezier(a+i,b);
            delay(500);
            cleardevice();
        } */
        // s[0]=740,s[1]=770,s[2]=790,s[3]=780;
        //r[0]=135,r[1]=120,r[2]=120,r[3]=100;
        //bezier(s,r);
        p[0]=370,p[1]=500,p[2]=600,p[3]=680;
        q[0]=300,q[1]=20,q[2]=50,q[3]=300;
        bezier(p,q);
        dda(10,300,730,300);
            int x[]={100,150,250,350};
        int y[]={300,150,150,300};
        // x[0]=50,x[1]=150,x[2]=250,x[3]=300;
        //y[0]=300,y[1]=220,y[2]=220,y[3]=300;
        bezier(x,y);
       for(int k=900;k>10;k--)
        {
            for(int i=0;i<4;i++)
            {
          for(int j=10;j<900;j++)
          {
              x[i]=x[i]+j;
              y[i]=y[i]+k;
            bezier(x,y);
          }
        }
        }
       // x[0]=50,x[1]=150,x[2]=250,x[3]=300;
        //y[0]=300,y[1]=220,y[2]=220,y[3]=300;
        //bezier(x,y);

          getch();
        closegraph();
        return 0;
    }
