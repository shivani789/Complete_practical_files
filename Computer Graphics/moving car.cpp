#include <graphics.h>
#include <iostream>
#include<math.h>
using namespace std;
void car(void) {

    int i, j = 0, gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    while(1)
        {
    for (i = 10; i <= 400; i = i + 10) {
        if(210+i>580){
                i-=10;
            break;
        }
        rectangle(20,400,580,50);
        line(0 + i, 300, 210 + i, 300);
        line(50 + i, 300, 75 + i, 270);
        line(75 + i, 270, 150 + i, 270);
        line(150 + i, 270, 165 + i, 300);
        line(0 + i, 300, 0 + i, 330);
        line(210 + i, 300, 210 + i, 330);

        circle(65 + i, 330,15);
        //circle(2,65 + i, 330);

        circle(145 + i, 330,15);
        //circle(145 + i, 330,2);

        line(0 + i, 330, 50 + i, 330);
        line(80 + i, 330, 130 + i, 330);
        line(210 + i, 330, 160 + i, 330);

        delay(50);
        cleardevice();
    }
}
    getch();
closegraph();
}
int main()
{
    car();
    return 0;
}
