#include <kipr/botball.h>

int main()
{
 printf("Move Forward\n");
    motor(0,35);
    motor(3,36);
    msleep(15000);
 printf("Turn right\n");
    motor(0,20);
    motor(3,30);
    msleep(28000);
 printf("Move Forward\n");
    motor(0,35);
    motor(3,36);
    msleep(17000);
    return 0;
}
