#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    
    printf("Move forward\n");
    motor(0, 40);
    motor(3, 40);
    msleep(5000);
    
    printf("Turn left\n");
    motor(0, 60);
    motor(3, 40);
    msleep(2000);
    
    printf("Turn right\n");
    motor(0, 40);
    motor(3, 60);
    msleep(2000);
    
    printf("Move forward\n");
    motor(0, 40);
    motor(3, 40);
    msleep(500);
    
    printf("Turn right\n");
    motor(0, 40);
    motor(3, 60);
    msleep(4000);
    
    printf("Move forward\n");
    motor(0, 40);
    motor(3, 40);
    msleep(1000);
    
    printf("Turn right\n");
    motor(0, 40);
    motor(3, 60);
    msleep(6000);
    
    printf("Move forward\n");
    motor(0, 80);
    motor(3, 80);
    msleep(3000);
    
    printf("Turn left\n");
    motor(0, 60);
    motor(3, 40);
    msleep(1000);
    
    printf("Move forward\n");
    motor(0, 60);
    motor(3, 60);
    msleep(750);
    
    printf("Turn left");
    motor(0, 60);
    motor(3, 40);
    msleep(2000);
    return 0;
}
