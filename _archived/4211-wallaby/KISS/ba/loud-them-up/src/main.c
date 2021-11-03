#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    motor(0,55);
    motor(3,55);
    msleep(3200);
    printf("5");
    motor(0,-55);
    motor(3,-55);
    msleep(2000);
    printf("k");
    motor(0,55);
    motor(3,22);
    msleep(3000);
    printf("h");
    motor(0,55);
    motor(3,55);
    msleep(1000);
    printf("j");
    motor(0,22);
    motor(3,55);
    msleep(5000);
    printf("h");
    motor(0,55);
    motor(3,55);
    msleep(3000);
    return 0;
}
