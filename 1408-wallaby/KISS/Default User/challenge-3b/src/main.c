#include <kipr/botball.h>

int main()
{
        
    printf("go forward\n");
    motor(0,52);
    motor(3,50);
    msleep(7700);
    ao();
    
    printf("go backward\n");
    motor(0,-52);
    motor(3,-50);
    msleep(1800);
    ao();
    
    printf("stop\n");
    motor(0,0);
    motor(3,0);
    msleep(2500);
    ao();
    
    printf("8 by 3\n");
    printf("Hello World\n");
    return 0;
}
