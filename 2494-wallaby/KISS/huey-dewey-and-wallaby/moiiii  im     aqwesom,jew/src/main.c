#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    enable_servos(1);
    enable_servos(3);
    set_servo_position(1, 335);
    msleep(500);
    printf("open the claw\n");
    set_servo_position(3, 1343);
    msleep(500);
    
    
    
    return 0;
}
