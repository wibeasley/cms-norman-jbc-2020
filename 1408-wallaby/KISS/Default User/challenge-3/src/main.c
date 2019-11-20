#include <kipr/botball.h>

int main()
{
     enable_servos(0);
    enable_servos(1);
    set_servo_position(0,690);
    
    motor(0,52);
    motor(3,50);
    msleep(7100);
    ao();
    
    motor(0,52);
    msleep(1800);
    ao();
    
    motor(0,52);
    motor(3,50);
    msleep(1500);
    ao();
    
    motor(0,50);
    msleep(2000);
    ao();
    
    motor(0,52);
    motor(3,50);
    msleep(1160);
    ao();
    
    printf("14 by 6\n");
    printf("Hello World\n");
    return 0;
}
