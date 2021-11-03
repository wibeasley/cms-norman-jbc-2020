#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    printf("moves motors forward kinda but actually moves backwards");
    motor(0,-30);
    motor(3,-30);
    msleep(9000);
    printf("turns?");
    motor(0,-30);
    motor(3,-0);
    msleep(3000);
    printf("moves forward but actually backwards if you think about it");
    motor(0,-30);
    motor(3,-30);
    msleep(4000);
    printf("moves motors left");
    motor(0,-30);
    motor(3,-0);
    msleep(3000);
    printf("moves motors forward");
    motor(0,-30);
    motor(3,-30);
    msleep(9000);
    return 0;
}
