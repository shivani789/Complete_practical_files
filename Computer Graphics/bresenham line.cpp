#include<iostream>
#include<graphics.h>
using namespace std;
void drawline(int x1,int y1,int x2,int y2){
  int temp;
  if(x1==x2)
  {
      if(y2<y1)
   {
       temp=y1;
        y1=y2;
        y2=temp;
    }
    while(y1<y2)
   putpixel(x1,y1++,WHITE);
    }
    if(y1==y2)
  {
      if(x2<x1)
   {
       temp=x1;
        x1=x2;
        x2=temp;
    }
    while(x1<x2)
   putpixel(x1++,y1,WHITE);
    }
    if(x1>x2)
  {
      temp=x1;
      x1=x2;
      x2=temp;

    temp=y1;
    y1=y2;
    y2=temp;
   }
if(y2>y1 && x2-x1>y2-y1)
{
  putpixel(x1,y1,WHITE);
  int deltay=y2-y1;
  int deltax=x2-x1;
  int p=2*deltay-deltax;
  while(x1<x2||y1<y2)
  {
      if(p<0)
  {
      x1++;
      putpixel(x1,y1,WHITE);
      p=p+2*deltay;}
  else{
        x1++;
  y1++;
   putpixel(x1,y1,WHITE);
   p=p+2*deltay-2*deltax;
   }
   }
}
if(y2>y1 && x2-x1<y2-y1)
{
temp=x1;
x1=y1;
y1=temp;

temp=x2;
x2=y2;
y2=temp;

putpixel(y1,x1,WHITE);
  int deltay=y2-y1;
  int deltax=x2-x1;
  int p=2*deltay-deltax;
  while(x1<x2||y1<y2)
  {
      if(p<0)
  {
      x1++;
      putpixel(y1,x1,WHITE);
       p=p+2*deltay;
       }
  else
    {
        x1++;
        y1++;
        putpixel(y1,x1,WHITE);
         p=p+2*deltay-2*deltax;
    }
   }
}
if(y1>y2 && x2-x1>y1-y2)
    {
  y2+=2*(y1-y2);
  int initialy=y1;
  putpixel(x1,y1,WHITE);
  int deltay=y2-y1;
  int deltax=x2-x1;
  int p=2*deltay-deltax;
  while(x1<x2||y1<y2)
  {
      if(p<0)
        {
      x1++;
      putpixel(x1,-y1+2*initialy,WHITE);
       p=p+2*deltay;
       }
  else
    {
        x1++;
        y1++;
        putpixel(x1,-y1+2*initialy,WHITE);
         p=p+2*deltay-2*deltax;
    }
    }
}
if(y1>y2 && x2-x1<y1-y2)
    {
 y2+=2*(y1-y2);
 int initialy=y1;

temp=x1;
x1=y1;
y1=temp;

temp=x2;
x2=y2;
y2=temp;

putpixel(y1,x1,WHITE);
  int deltay=y2-y1;
  int deltax=x2-x1;
  int p=2*deltay-deltax;
  while(x1<x2||y1<y2)
  {
      if(p<0)
  {
      x1++;
        putpixel(y1,x1-2*(x1-initialy),WHITE);
        p=p+2*deltay;
        }
  else
    {
        x1++;
        y1++;
        putpixel(y1,x1-2*(x1-initialy),WHITE);
         p=p+2*deltay-2*deltax;
    }
   }
 }
}
int main()
{
    int gd=DETECT, gm, x0, y0, x1, y1;
    initgraph(&gd, &gm, "c:\\turboc3\\bgi");
   cout<<"Enter co-ordinates of first point: "<<endl;
    cin>>x0>>y0;
    cout<<"Enter co-ordinates of second point: "<<endl;
   cin>>x1>>y1;
    drawline(x0, y0, x1, y1);
    getch();
    return 0;
}
