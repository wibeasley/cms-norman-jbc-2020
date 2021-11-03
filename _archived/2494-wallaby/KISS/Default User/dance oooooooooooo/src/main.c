#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    
    motor(3,80);
    motor(0,80);
    msleep(5000);
    
    motor(3,80);
    motor(0,0);
    msleep(9000);
    
    motor(0,80);
    motor(3,0);
    msleep(9000);
    
    motor(0,-80);
    motor(3,-80);
    msleep(6000);
    return 0;
}
