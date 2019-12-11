#include <kipr/botball.h>

int main()
{
    printf("Go forward\n");
    motor(0, 40);
    motor(3, 40);
    msleep(7000);
    printf("Go backward\n");
    motor(0, -40);
    motor(3, -40);
    msleep(7000);
    return 0;
}