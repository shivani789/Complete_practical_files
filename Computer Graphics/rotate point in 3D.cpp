#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
void Transform(float A[4], float T[4][4])
{
float R[4]={0, 0, 0, 1};
 for(int i=0;i<4;i++) {
 for(int j=0;j<4;j++){
 R[i]+=T[i][j]*A[j];
 } }
 A[0]=R[0];
 A[1]=R[1];
 A[2]=R[2];
 }

int main(){

float x[4]={0,0,0,1};
int x1,y1,z1,x2,y2,z2;
float a,b,c,m;

cout<<"Enter coordinates of point to be rotated : \n";
cin>>x[0]>>x[1]>>x[2];

cout<<"Enter coordinates of first point on axis : \n";
cin>>x1>>y1>>z1;
cout<<"Enter coordinates of second point on axis : \n";
cin>>x2>>y2>>z2;

cout<<"Enter angle in radians : \n";
cin>>m;

a=x2-x1; b=y2-y1; c=z2-z1;

float r=sqrt(a*a+b*b+c*c);
a=a/r;
b=b/r;
c=c/r;

float T[4][4]={{1,0,0,-x1},{0,1,0,-y1},{0,0,1,-z1},{0,0,0,1}};
float d=sqrt(b*b+c*c);
float Rxa[4][4]={{1,0,0,0},{0,c/d,-b/d,0},{0,b/d,c/d,0},{0,0,0,1}};
float Ryb[4][4]={{d,0,-a,0},{0,1,0,0},{a,0,d,0},{0,0,0,1}};
float Rz[4][4]={{cos(m), -sin(m),0,0},{sin(m),cos(m),0,0},{0,0,1,0},{0,0,0,1}};

Transform(x,T);
Transform(x,Rxa);
Transform(x,Ryb);

Transform(x,Rz);

T[0][3]=-T[0][3];
T[1][3]=-T[1][3];
T[2][3]=-T[2][3];

Rxa[1][2]=-Rxa[1][2];
Rxa[2][1]=-Rxa[2][1];
Ryb[0][2]=-Ryb[0][2];
Ryb[2][0]=-Ryb[2][0];

Transform(x,Ryb);
Transform(x,Rxa);
Transform(x,T);

cout<<"After specified rotation : "<<'('<<x[0]<<','<<x[1]<<','<<x[2]<<')';

getch(); }
