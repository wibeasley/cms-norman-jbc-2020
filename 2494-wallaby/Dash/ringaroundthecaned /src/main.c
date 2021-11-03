#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    motor(0,80);
    motor(3,80);
    msleep(5000);
    
    motor(0,80);
    motor(3,0);
    msleep(3000);
    
    motor(0,80);
    motor(3,0);
    msleep(3000);
    
    motor(0,80);
    motor(3,80);
    msleep(5000);
    
    
    return 0;
}
