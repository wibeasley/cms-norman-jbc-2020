#include <kipr/botball.h>

int main()
{
    enable_servos(0);
    enable_servos(1);
    set_servo_position(0,1248);
    set_servo_position(1,1913);
    
    enable_servos(0);
    enable_servos(1);
    set_servo_position(0,1248);
    set_servo_position(1,369);
    
    
    
    printf("Hello World\n");
    return 0;
}
