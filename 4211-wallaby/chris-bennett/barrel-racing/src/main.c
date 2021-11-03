#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    printf("starting position p3   ");
    motor(0,55);
    motor(3,55);
    msleep(4000);
    printf("turn right");
    motor(0,10);
    motor(3,35);
    msleep(2000);
    printf("move forward");
    motor(0,55);
    motor(3,55);
    msleep(2000);
    printf("turn right");
    motor(0,15);
    motor(3,35);
    msleep(21000);
    printf("move forward");
    motor(0,55);
    motor(3,55);
    msleep(4000);
    printf("turn right");
    motor(0,0);
    motor(3,55);
    msleep(3000);
    printf("move forward");
    motor(0,55);
    motor(3,55);
    msleep(2700);
    printf("turn right");
    motor(0,0);
    motor(3,55);
    msleep(3000);
    printf("turn right");
    motor(0,19);
    motor(3,35);
    msleep(10000);
    printf("turn left");
    motor(0,35);
    motor(3,19);
    msleep(8500);
    printf("move forward");
    motor(0,55);
    motor(3,55);
    msleep(4500);
    return 0;
}
