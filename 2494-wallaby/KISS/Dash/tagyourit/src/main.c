#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    
    motor(3,40);
    motor(0,40);
    msleep(6000);
    
    motor(3,-40);
    motor(0,-40);
    msleep(6000); 
    
    motor(3,70);
    motor(0,10);
    msleep(6000);
    return 0;
}
