#include <kipr/botball.h>

int main()
{
    
    enable_servos();
    set_servo_position(2,1323);
    set_servo_position(1,356);
    printf("go forward");
  motor(3,55);
    motor(0,55);            
    msleep(4000);
    printf("turn right");
   
    return 0;
};