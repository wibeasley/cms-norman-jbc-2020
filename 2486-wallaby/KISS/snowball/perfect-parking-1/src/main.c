#include <kipr/botball.h>

int main()
{
    printf("go forward\n");
    motor(3, 40);
    motor(0, 39);
    msleep(7000);
    
    
   printf("go backwards"); 
    motor(3, -40);      
    motor(0, -39);      
    msleep(7000);
    
    
    printf("go forward");
    motor(3, 40);
    motor(0, 39);
    msleep(9000);
    
    return 0;
}
