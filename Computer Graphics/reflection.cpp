#include<iostream>
#include<graphics.h>
#include<math.h>
#include<conio.h>
using namespace std;
struct point{
 int x;
 int y;
 };

point centre(int x,int y)
{
point result;
 result.x=x+639/2;
  result.y=y+479/2;
  return result;
  }

int main()
{ //clrscr();
 int gd = DETECT, gm;
 initgraph(&gd, &gm, "C:\\TC\\BGI");
 double square[3][4]= {{0,0,0,0},{0,0,0,0},{0,0,0,0}};
int triangle[2][0]=triangle[2][1]=triangle[2][2]=1;//square[2][3]=1;
       line(639/2,0,639/2,479); // Y axis
       line(0,479/2,639,479/2); // X axis
       for(int j=0;j<4;j++)
       {
        cout<<"Enter "<<j+1<<"th coordinate";
         cin>>triangle[0][j]>>triangle[1][j];
             }
 double resultant[3][4]={0};
  //double R[3][3]={0};
   double R[2][2]=1;
    R[0][0]=1;         //=-1 for reflection about Y axis
    R[1][1]=-1;       // =-1 for reflection about X axis

  double sum=0;

 for(int i=0;i<3;i++)
 {
 for(int j=0;j<3;j++)
 {
  for(int k=0;k<3;k++)
  {
  sum +=R[i][k]*triangle[k][j];
  }
  resultant[i][j]=sum;
   sum=0;
    }
     }
     point point1=centre(resultant[0][0],resultant[1][0]);
       point point2=centre(resultant[0][1],resultant[1][1]);
         point point3=centre(resultant[0][2],resultant[1][2]);
        // point point4=centre(resultant[0][3],resultant[1][3]);
         line(point1.x,point1.y,point2.x,point2.y);
          line(point2.x,point2.y,point3.x,point3.y);
           line(point3.x,point3.y,point4.x,point4.y);
         //  line(point4.x,point4.y,point1.x,point1.y);
           point1=centre(triangle[0][0],triangle[1][0]);
           point2=centre(triangle[0][1],triangle[1][1]);
           point3=centre(triangle[0][2],triangle[1][2]);
          //  point4=centre([0][3],square[1][3]);
            line(point1.x,point1.y,point2.x,point2.y);
            line(point2.x,point2.y,point3.x,point3.y);
            line(point3.x,point3.y,point4.x,point4.y);
           // line(point4.x,point4.y,point1.x,point1.y);

  getch();
   }
