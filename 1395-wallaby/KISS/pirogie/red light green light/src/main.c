#include <kipr/botball.h>

int main()
{
    printf("green light\n");
    motor(0,40);
    motor(3,40);
    msleep(3000);
    
    printf("red light\n");
    motor(0,0);
    motor(3,0);
    msleep(2000);
    
     printf("green light\n");
    motor(0,40);
    motor(3,40);
    msleep(6000);
    
    printf("yellow light\n");
    motor(0,30);
    motor(3,0);
    msleep(2500);
    return 0;
}
