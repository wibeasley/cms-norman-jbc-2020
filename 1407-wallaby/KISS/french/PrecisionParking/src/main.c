#include <kipr/botball.h>

int main()
{
    printf("Move forward\n");
    motor(0, 40);
    motor(3, 40);
    msleep(5000);
    
    printf("Move backwards\n");
    motor(0, -30);
    motor(3, -30);
    msleep(5000);
    
    printf("Turn right\n");
    motor(0, 40);
    motor(3, 60);
    msleep(2000);
    
    printf("Turn left\n");
    motor(0, 80);
    motor(3, 40);
    msleep(2520);
    
    printf("Move forward\n");
    motor();
    
    printf("Turn right\n");
    motor(0, 0);
    motor(3, 80);
    msleep(700);
    return 0;
}
