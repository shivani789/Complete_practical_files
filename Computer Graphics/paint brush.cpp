#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;
int main()
{
    int gd=DETECT,gm;
    initwindow(1000,1000);
   for(int i=1;i<=600;i=i+7)
   {

            setcolor(WHITE);
       rectangle(250+i,260,256+i,300);
    circle(253+i,303,5);

            setcolor(GREEN);
        line(253,307,253+i,307);
         line(253,308,253+i,308);
         delay(100);
         cleardevice();
            setcolor(GREEN);
        line(253,307,253+i,307);
         line(253,308,253+i,308);

   }
    getch();
    closegraph();
    return 0;
    }
