#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    printf("enables motors");
    motor(3,30);
    motor(0,30);
    printf("moves motors forward");
    msleep(7000);
    printf("turns motors left");
    motor(3,20);
    motor(0,0);
    msleep(7800);
    motor(0,30);
    motor(3,30);
    msleep(6000);
    return 0;
}
