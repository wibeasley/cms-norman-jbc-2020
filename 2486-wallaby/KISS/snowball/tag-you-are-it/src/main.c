#include <kipr/botball.h>

int main()
{
    printf("Go forward\n");
    motor(0, 40);
    motor(3, 41);
    //old value: 13500 for the mystery challenge
    msleep(6500);
    printf("Go backward\n");
    motor(0, -40);
    motor(3, -41);
    msleep(6500);
    return 0;
}