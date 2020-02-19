#include <kipr/botball.h>

int main()
{
    printf("DANCE!\n");
    motor(0,30);
    motor(3,30);
    msleep(4000);
    motor(0,30);
    motor(3,0);
    msleep(7000);
    motor(0,0);
    motor(2,40);
    msleep(7000);
    motor(0,10);
    motor(3,10);
    msleep(2000);
    motor(0,-30);
    motor(3,-20);
    
    return 0;
}
