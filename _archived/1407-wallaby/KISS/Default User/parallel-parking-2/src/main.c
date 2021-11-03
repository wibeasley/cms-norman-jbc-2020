#include <kipr/botball.h>

int main()
{
    printf("move motors 1\n");//blue garage
    motor(0,55);
    motor(3,50);
    msleep(5000);
    
    printf("turns motors 1\n");
    motor(0,00);
    motor(3,50);
    msleep(560);
    
    printf("moves motors 2\n");
    motor(0,55);
    motor(3,50);
    msleep(2000);
    
    printf("moves motors backwards 1\n");
    motor(0,-55);
    motor(3,-50);
    msleep(1500);
    
    
    
    
    
    
    
    
    
    return 0;
}
