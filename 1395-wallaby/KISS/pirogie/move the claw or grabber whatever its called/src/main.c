#include <kipr/botball.h>

int main()
{
    enable_servos();
    
    
    printf("open claw\n");
    set_servo_position(3,1111);
    msleep(1000);
    
     printf("open claw\n");
    set_servo_position(0,500);
    msleep(1000);   
    
    printf("just go forward very boring\n");
    motor(0,20);
    motor(3,20);
    msleep(1000);
    
    printf("open close\n");
    set_servo_position(3,50);
    msleep(1000);
    return 0;
}
