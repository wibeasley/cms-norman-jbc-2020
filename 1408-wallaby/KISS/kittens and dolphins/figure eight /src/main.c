#include <kipr/botball.h>

int main()
{
    printf("go forward\n");
motor(0,40);    
motor(3,40);    
msleep(5000);    
    printf("turn left\n");
    motor(0,50);
    motor(3,40);
    msleep(4000);
printf("turn right\n");    
    motor(0,40);
    motor(3,60);
    msleep(7000);
           
    
    
    
    
    return 0;
}
