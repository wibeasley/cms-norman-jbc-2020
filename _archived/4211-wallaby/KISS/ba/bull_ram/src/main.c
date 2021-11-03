#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");   
    motor(3,30);
    motor(0,-30);
    msleep(2000);
                   
    
    printf("Hello World\n");   
    motor(3,30);
    motor(0,30);
    msleep(1000);
    
    
printf("Hello World\n");  
    motor(3,-30);
    motor(0,55);
    msleep(2000);
    
    printf("Hello World\n");  
    motor(3,30);
    motor(0,30);
    msleep(8000);
    
    return 0;
}                      
