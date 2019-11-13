#include <kipr/botball.h>

int main()
{
    printf("starting posishen a0");
    printf("move forward");
    motor(0,55);
    motor(3,55);
    msleep(3000);
    printf("turn right");
    motor(0,30);
    motor(3,55);
    msleep(3000);
    printf("turn left");
    motor(0,55);
    motor(3,30);
    msleep(22500);
    printf("move forward");
    motor(0,55);
    motor(3,55);
    msleep(5000);
    printf("turn right");
    motor(0,20);
    motor(3,55);
    msleep(3000);
    printf("forward");
    motor(3,55);
    motor(0,55);
    msleep(2000);
    
    return 0;
}
