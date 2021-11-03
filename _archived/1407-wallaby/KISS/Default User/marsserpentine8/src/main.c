#include <kipr/botball.h>

int main()
{
    printf("moves motors 1/n");
    motor(0,50);
    motor(3,50);
    msleep(1000);
    
    printf("turns motors 1/n");    
    motor(0,00);
    motor(3,50);
    msleep(1000);
    
    printf("turns motors 2/n");
    motor(0,60);
    motor(3,00);
    msleep(1000);
    
    printf("moves motors 2/n");
    motor(0,50);
    motor(3,50);
    msleep(500);
    
    printf("turns motors 2/n");
    motor(0,50);
    motor(3,-10);
    msleep(1000);
    
    
    return 0;
    
    
    
    
    
}
