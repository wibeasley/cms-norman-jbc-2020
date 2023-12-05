#include <kipr/botball.h>

int main()
{
    enable_servos();
    printf("so, go to 1000\n");
    set_servo_position(0,1000);
    msleep(1000);
    
    printf("up up up to 500\n");
    set_servo_position(0,500);
    msleep(1000);
    
     printf("so, go to 1538\n");
    set_servo_position(0,1538);
    msleep(1000);
    
    printf("open claw to 1000\n");
    set_servo_position(3,1000);
    msleep(1000);
    
    printf("just go forward very boring\n");
    motor(0,40);
    motor(3,40);
    msleep(1000);
    
    printf("grab can\n");
    set_servo_position(3,50);
    msleep(1000);
    return 0;
}
