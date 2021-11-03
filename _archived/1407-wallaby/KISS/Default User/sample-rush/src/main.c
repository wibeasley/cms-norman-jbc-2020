#include <kipr/botball.h>

int main()
{
    printf("moves motors 1\n");
    motor(0,54);
    motor(3,50);
    msleep(8000);
    
    printf("turns motors 1\n");
    motor(0,80);       
    motor(3,30);       
    msleep(3800);       
    
    printf("moves motors 2\n");
    motor(0,94);
    motor(3,90);
    msleep(2000);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
    
}
