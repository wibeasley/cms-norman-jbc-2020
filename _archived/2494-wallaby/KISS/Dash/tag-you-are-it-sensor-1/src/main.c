#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    
    while (analog(5) <=2700){
        
    motor(0,31);
    motor(3,30);
    msleep(4000);
        
        
    }
    return 0;
        
        
    }
