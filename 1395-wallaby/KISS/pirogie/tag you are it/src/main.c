#include <kipr/botball.h>

int main()
{
    printf("forward\n");
    motor(0,40);
    motor(3,40);
    msleep(5000);
    
     printf("backward\n");
    motor(0,-40);
    motor(3,-40);
    msleep(5000);
    
    printf("spin\n");
    motor(0,-40);
    motor(3,40);
    msleep(5000);
    
    printf("tag\n");
    motor(0,40);
    motor(3,40);
    msleep(25000);
    return 0;
}
