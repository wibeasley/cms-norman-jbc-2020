#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    
   	printf("My name is Wallaby\n");
    
    
    printf("Move backward.\n");
    motor(0, -40);
    motor(3, -40);
    msleep(300);
        
    return 0;
           
}