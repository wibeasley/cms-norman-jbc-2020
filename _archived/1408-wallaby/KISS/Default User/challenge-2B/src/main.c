#include <kipr/botball.h>

int main()
{
    printf("Go Foward\n");
    motor(0,50);
    motor(3,50);
    msleep(9000);
    ao();
    
    printf("Turn Right\n");
    motor(3,50);
    msleep(1800);
    ao();
    
    printf("Go Foward\n");
    motor(0,50);
    motor(3,50);
    msleep(5000);
    ao();
    
    printf("Turn Right\n");
    motor(3,50);
    msleep(1800);
    ao();
    
    printf("Go Foward\n");
    motor(0,50);
    motor(3,50);
    msleep(10000);
    ao();
    
    printf("3 by 0\n");
    printf("Hello World\n");
    return 0;
}
