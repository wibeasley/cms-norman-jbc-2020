#include <kipr/botball.h>

int main()
    
    
{  
    enable_servos();

    printf("Hello World\n");
    set_servo_position(2,1307); 
    set_servo_position(1,1360);
    motor(3,55);
    motor(0,-55);
    msleep(7500);
    
    return 0;
}
