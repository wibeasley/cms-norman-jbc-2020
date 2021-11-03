#include <kipr/botball.h>

int main()
{
    enable_servos();
        
    set_servo_position(3, 1290);    
    set_servo_position(0, 1500);
 
    motor(0, 30);
    motor(3, 30);
    msleep(2000);
    set_servo_position(0, 987);
    msleep(1000);
    set_servo_position(3, 980);
    msleep(2000);
    motor(0, 30);
    motor(3, 30);
    msleep(2000);
    set_servo_position(3, 1290);
    msleep(1000);
    set_servo_position(0, 1500);
    motor(0, -50);
    motor(3, -50);  
    msleep(4000);
    
    
    
    
    disable_servos();
    
    return 0;
}
