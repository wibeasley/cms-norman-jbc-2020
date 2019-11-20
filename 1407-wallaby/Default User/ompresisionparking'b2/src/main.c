#include <kipr/botball.h>

int move( int speed_left, int speed_right, int duration ){
    motor(0,speed_left);
    motor(3,speed_right);
    msleep(duration);
    return 0;
}


int main()
{
    printf("Hello World\n");
    printf("moves forward\n");      //starting position -2 i
    move(50,50,6500);
    printf("turns right\n");
    move(0,50,1000);
    printf("moves forward\n");
    move(50,50,1250);
    
    
    
    
    return 0;
}
