#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    motor(3,40);
    motor(0,40);
    msleep(15000);
    
    motor(0,40);
    motor(3,0);
    msleep(3000);
    
    motor(0,40);
    motor(3,0);
    msleep(1000);
    
    motor(0,40);
    motor(3,40);
    msleep(5000);
    
    motor(0,40);
    motor(3,0);
    msleep(3000);
    
    motor(0,40);
    motor(3,40);
    msleep(5000);
    
    motor(0,-40);
    motor(3,-40);
    msleep(3000);
    
    motor(3,40);
    motor(0,0);
    msleep(3000);
    
    motor(3,40);
    motor(0,40);
    msleep(3000);
    
    
    
    return 0;
}
