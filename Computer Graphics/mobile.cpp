#include<graphics.h>
#include<conio.h>
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
void rect(int x1,int y1,int x2,int y2)
{
  dda(x1,y1,x2,y1);
  dda(x2,y1,x2,y2);
  dda(x2,y2,x1,y2);
  dda(x1,y1,x1,y2);
}
void midpoint_circle(int r,int xc,int yc)
{
    int x=0,y=r;
   int p=1-r;
           putpixel(x,y,WHITE);
   while(x<y)
   {
       if(p<0)
       {
           p=p+2*x+1;
           x+=1;
       }
       else
       {
           p=p+2*x-2*y+1;
           x+=1;
           y--;
       }
        putpixel(xc+x,yc+y,WHITE);
    putpixel(xc-x,yc+y,WHITE);
    putpixel(xc+x,yc-y,WHITE);
    putpixel(xc-x,yc-y,WHITE);
    putpixel(xc+y,yc+x,WHITE);
    putpixel(xc-y,yc+x,WHITE);
    putpixel(xc+y,yc-x,WHITE);
    putpixel(xc-y,yc-x,WHITE);
   }

}
int main()
{
 int gd = DETECT,gm;
    initgraph(&gd, &gm, "X:\\TC\\BGI");
    rect(100,80,280,380);
    setfillstyle(SOLID_FILL, BLUE);
    floodfill(111, 111, WHITE);
    midpoint_circle(15,190,400);
    rect(185,395,195,405);
    dda(90,50,90,400);
    dda(290,50,290,400);
    dda(110,30,270,30);
    dda(110,420,270,420);
    rect(150,65,230,68);
    midpoint_circle(5,190,57);

    double x[4]={90,90,90,110},y[4]={50,30,30,30},px,py,i;

double t;
for(t=0.0;t<=1.0;t+=0.001){
px=(1-t)*(1-t)*(1-t)*x[0]+3*t*(1-t)*(1-t)*x[1]+3*t*t*(1-t)*x[2]+t*t*t*x[3];
py=(1-t)*(1-t)*(1-t)*y[0]+3*t*(1-t)*(1-t)*y[1]+3*t*t*(1-t)*y[2]+t*t*t*y[3];
putpixel(px,py,WHITE);
}

x[0]=270;
x[1]=291;
x[2]=291;
x[3]=291;
y[0]=30;
y[1]=30;
y[2]=30;
y[3]=50;

for(t=0.0;t<=1.0;t+=0.001){
px=(1-t)*(1-t)*(1-t)*x[0]+3*t*(1-t)*(1-t)*x[1]+3*t*t*(1-t)*x[2]+t*t*t*x[3];
py=(1-t)*(1-t)*(1-t)*y[0]+3*t*(1-t)*(1-t)*y[1]+3*t*t*(1-t)*y[2]+t*t*t*y[3];
putpixel(px,py,WHITE);
}
x[0]=90;
x[1]=90;
x[2]=90;
x[3]=110;
y[0]=400;
y[1]=421;
y[2]=421;
y[3]=421;

for(t=0.0;t<=1.0;t+=0.001){
px=(1-t)*(1-t)*(1-t)*x[0]+3*t*(1-t)*(1-t)*x[1]+3*t*t*(1-t)*x[2]+t*t*t*x[3];
py=(1-t)*(1-t)*(1-t)*y[0]+3*t*(1-t)*(1-t)*y[1]+3*t*t*(1-t)*y[2]+t*t*t*y[3];
putpixel(px,py,WHITE);
}
x[0]=291;
x[1]=291;
x[2]=291;
x[3]=270;
y[0]=400;
y[1]=421;
y[2]=421;
y[3]=421;

for(t=0.0;t<=1.0;t+=0.001){
px=(1-t)*(1-t)*(1-t)*x[0]+3*t*(1-t)*(1-t)*x[1]+3*t*t*(1-t)*x[2]+t*t*t*x[3];
py=(1-t)*(1-t)*(1-t)*y[0]+3*t*(1-t)*(1-t)*y[1]+3*t*t*(1-t)*y[2]+t*t*t*y[3];
putpixel(px,py,WHITE);
}
    getch();
    closegraph();
    return 0;
}
