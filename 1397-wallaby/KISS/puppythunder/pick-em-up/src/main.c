#include <kipr/botball.h>

int main()
{
    enable_servos();
    
    printf("set servos\n");
    set_servo_position(0,900);
    set_servo_position(2,900);
    
    return 0;
}
