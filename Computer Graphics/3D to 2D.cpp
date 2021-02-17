#include<iostream>
#include<graphics.h>
#include<conio.h>

void Project(float &x, float &y, float z, float zprp)
{   // Projecting in xy plane i.e zvp=0
x=x/(1-z/zprp);
y=y/(1-z/zprp);
 }
 void draw(int x1,int x2,int x3,int x4,int x5,int x6,int x7,int x8,int y1,int y2,int y3,int y4,int y5,int y6,int y7,int y8)
  {
  int cx=320,cy=240; // Edges on one face
  line(x1+cx,y1+cy,x2+cx,y2+cy);
  line(x2+cx,y2+cy,x3+cx,y3+cy);
  line(x3+cx,y3+cy,x4+cx,y4+cy);
  line(x4+cx,y4+cy,x1+cx,y1+cy);

// Edges on opposite face
line(x5+cx,y5+cy,x6+cx,y6+cy);
line(x6+cx,y6+cy,x7+cx,y7+cy);
line(x7+cx,y7+cy,x8+cx,y8+cy);
line(x8+cx,y8+cy,x5+cx,y5+cy);

// Edges joining the two faces
line(x1+cx,y1+cy,x5+cx,y5+cy);
line(x2+cx,y2+cy,x6+cx,y6+cy);
line(x3+cx,y3+cy,x7+cx,y7+cy);
line(x4+cx,y4+cy,x8+cx,y8+cy);
 }

int main()
{
int gd = DETECT, gm;
initgraph(&gd, &gm, "C:\\TC\\BGI");

//Vertices of a cube of side 100 pixels
float x1=0,x2=100,x3=100,x4=0,x5=0,x6=100,x7=100,x8=0;
float y1=0,y2=0,y3=100,y4=100,y5=0,y6=0,y7=100,y8=100;
float z1=0,z2=0,z3=0,z4=0,z5=100,z6=100,z7=100,z8=100;

 float zprp=700;  // Projection reference point is (0,0,700)

Project(x1,y1,z1,zprp);
Project(x2,y2,z2,zprp);
Project(x3,y3,z3,zprp);
Project(x4,y4,z4,zprp);
Project(x5,y5,z5,zprp);
Project(x6,y6,z6,zprp);
Project(x7,y7,z7,zprp);
Project(x8,y8,z8,zprp);

draw(x1,x2,x3,x4,x5,x6,x7,x8,y1,y2,y3,y4,y5,y6,y7,y8);
getch();

}
