#include <kipr/botball.h>

int main()
{
    printf("Go forward.\n");
    motor(0, 30);
    motor(3, 30);
    msleep(5000);
    
    //motor 3 30 msleep 1000
 
    printf("pivot right.\n");
    motor(0, 30);
    motor(3, 0);
    msleep(5000);
       printf("Go forward.\n");
    motor(0, 30);
    motor(3, 30);
    msleep(5000);
    
    
    return 0;
}
