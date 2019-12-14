#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    motor(0,60);
    motor(3,60);
    msleep(5000);
    
    motor(3,70);
    motor(0,0);
    msleep(10000);
    
    motor(0,70);
    motor(3,0);
    msleep(10000);
    
    motor(0,-60);
    motor(3,-60);
    msleep(5000);
    
    printf("Using Servos Now\n");
    enable_servos();
    set_servo_position(1,174);
    msleep(3000);
    disable_servos();
    
    enable_servos();
    set_servo_position(1,1134);
    msleep(3000);
    disable_servos();
    
    return 0;
}
