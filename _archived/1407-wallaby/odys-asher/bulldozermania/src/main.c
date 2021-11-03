#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    printf("enables motors");
    motor(3,30);
    motor(0,30);
    printf("moves motors forward");
    msleep(7000);
    printf("turns motors right");
    motor(3,10);
    motor(0,20);
    msleep(17000);
    printf("move motors forward");
    motor(0,30);
    motor(3,30);
    msleep(7000);
    return 0;
}
