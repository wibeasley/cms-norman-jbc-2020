#include <kipr/botball.h>

int main()
{
    printf("go forward\n");
    motor(0,50);
    motor(3,50);
    msleep(2000);
    ao();
    
    printf("turn left\n");
    motor(3,50);
    msleep(1500);
    ao();
    
    printf("go forward\n");
    motor(0,50);
    motor(3,50);
    msleep(550);
    ao();
    
    printf("turn right\n");
    motor(0,50);
    msleep(1000);
    ao();
    
    
    printf("Hello World\n");
    return 0;
}
