#include <kipr/botball.h>

int main()
{
    
     enable_servos(0);
    enable_servos(1);
    set_servo_position(0,1572);
    
    motor(0,50);
    motor(3,50);
    msleep(4800);
    ao();
    
    motor(3,50);
    msleep(1000);
    ao();
    
    motor(3,50);
    motor(0,50);
    msleep(1500);
    ao();
    
    motor(3,50);
    msleep(2500);
    ao();
    
    motor(3,50);
    motor(0,50);
    msleep(2500);
    ao();
    
    motor(3,50);
    msleep(2500);
    ao();
    
    motor(3,50);
    motor(0,50);
    msleep(5500);
    ao();
    
    printf("3-1\n");
    printf("Hello World\n");
    return 0;
}
