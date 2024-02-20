#include <kipr/botball.h>

int main()
{
         enable_servos(0);
    enable_servos(1);
    set_servo_position(0,1351);
    
    printf("go forward\n");
    motor(3,50);
    motor(0,50);
    msleep(4500);
    ao();
    
    printf("Hello World\n");
    return 0;
}
