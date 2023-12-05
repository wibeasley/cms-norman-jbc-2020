#include <kipr/botball.h>
const float right_adjustment = 1.24;

int main()
{
    enable_servos();
    
    printf("set servos\n");
    set_servo_position(0,900);
    set_servo_position(2, 200);


    printf("move forward\n");
    motor(0, 30);
    motor(3, 30 * right_adjustment);
    msleep(8500);
   
        
        
          
    
    return 0;
}
