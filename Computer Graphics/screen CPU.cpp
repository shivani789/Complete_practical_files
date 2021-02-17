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
void ellipse1(int rx,int ry,int xc,int yc)
{
    float dx,dy,d1,d2,x,y;
    x=0;
    y=ry;
    d1=(ry*ry)-(rx*rx*ry)+(0.25*rx*rx);          // Initial decision parameter of region 1
    dx=2*ry*ry*x;
    dy=2*rx*rx*y;
    while(dx<dy)       // For region 1
    {
        putpixel(x+xc,y+yc,WHITE);
        putpixel(-x+xc,y+yc,WHITE);
        putpixel(x+xc,-y+yc,WHITE);
        putpixel(-x+xc,-y+yc,WHITE);
        if(d1<0)
        {
            x++;
            dx=dx+(2*ry*ry);
            d1=d1+dx+(ry*ry);
        }
        else
        {
            x++;
            y--;
            dx=dx+(2*ry*ry);
            dy=dy-(2*rx*rx);
            d1=d1+dx-dy+(ry*ry);
        }
    }
    d2=((ry*ry)*((x+0.5)*(x+0.5)))+((rx*rx)*((y-1)*(y-1)))-(rx*rx*ry*ry);
    while (y >= 0)
    {
        putpixel(x+xc,y+yc,WHITE);
        putpixel(-x+xc,y+yc,WHITE);
        putpixel(x+xc,-y+yc,WHITE);
        putpixel(-x+xc,-y+yc,WHITE);
        if(d2>0)
        {
            y--;
            dy=dy-(2*rx*rx);
            d2=d2+(rx*rx)-dy;
        }
        else
        {
            y--;
            x++;
            dx=dx+(2*ry*ry);
            dy=dy-(2*rx*rx);
            d2=d2+dx-dy+(rx*rx);
        }
    }
    }
int main(){
 int gd = DETECT,gm;
    initgraph(&gd, &gm, "X:\\TC\\BGI");
    rect(100,50,320,200);
    rect(110,60,310,190);
    ellipse1(55,15,210,225);
    rect(360,70,450,300);
    rect(370,100,440,120);

    midpoint_circle(10,420,140);
    putpixel(420,140,GREEN);

    dda(200,200,200,220);
    dda(220,200,220,220);

    dda(110,260,310,260);
    //line(90,360,330,360);
    dda(90,320,110,260);
    dda(330,320,310,260);
    dda(330,320,90,320);

    dda(120,270,300,270);
    dda(110,315,310,315);
    dda(120,270,110,315);
    dda(300,270,310,315);

    setfillstyle(SOLID_FILL, BLUE);
    floodfill(111, 111, WHITE);
    floodfill(371, 101, WHITE);
    setfillstyle(HATCH_FILL, CYAN);
    floodfill(121, 271, WHITE);
    getch();
    closegraph();
    return 0;
}
