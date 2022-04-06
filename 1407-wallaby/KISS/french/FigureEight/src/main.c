#include <kipr/botball.h>

int main()
{
    printf("Move forward\n");
    motor(0, 30);
    motor(3, 30);
    msleep(7000);
    
    printf("Turn left\n");
    motor(0, 30);
    motor(3, 0);
    msleep(2500);
    
    printf("Move forward\n");
    motor(0, 30);
    motor(3, 30);
    msleep(4000);
    
    printf("Turn right\n");
    motor(0, 0);
    motor(3, 30);
    msleep(2250);
    
    printf("Move forward\n");
    motor(0, 30);
    motor(3, 30);
    msleep(3000);
    return 0;
}
