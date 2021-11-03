#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    printf("starting position Q -1\n");
    printf("enables motors\n");
    motor(3,40);
    motor(0,40);
    printf("moves motors forward\n");
    msleep(6000);
    printf("moves motors left\n");
    motor(0,30);
    motor(3,-30);
    msleep(1000);
    printf("moves motors forward\n");
    motor(0,50);
    motor(3,50);
    msleep(3000);
    printf("moves motors left\n");
    motor(0,50);
    motor(3,-50);
    msleep(1000);
    printf("move motors forward\n");
    motor(0,50);
    motor(3,50);
    msleep(6000);
    return 0;
}
