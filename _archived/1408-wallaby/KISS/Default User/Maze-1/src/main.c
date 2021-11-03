#include <kipr/botball.h>

int main()
{
     int move(int speed_left,int speed_right,int duration){
        motor(0,speed_left);
        motor(3,speed_right);
        msleep(duration);
        // (30, 30, 500) (51, 40, 4000) (50, 50, 500) (39, 44, 2000) (100, 100, 2000)
        return 0;
    }
    move(30, 30, 500);
    move(51, 40, 4000);
    move(50, 50, 500);
    move(70, 100, 2300);
    move(70,4,1300);
    move(90,90,1500);
    move(90,90,1000);
    move(0,30,15);
    move(50,50,200);
    printf("Hello World\n");
    return 0;
}
