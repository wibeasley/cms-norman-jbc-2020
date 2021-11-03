#include <kipr/botball.h>

int main()
{   enable_servos();
    set_servo_position(0,1306);
    set_servo_position(3,1677);
    printf("more forward");
    motor(0,36);
    motor(3,40);
    msleep(7000);
    set_servo_position(0,510);
    set_servo_position(3,822);
    printf("turn around hi bennett");
    motor(0,-36);
    motor(3,40);
    msleep(23000); 
    set_servo_position(0,1306);
    set_servo_position(3,1677);
    printf("turn around are we olmost done what's your");
    motor(0,36);
    motor(3,-40);
    msleep(23000);
    set_servo_position(0,510);
    set_servo_position(3,822);
    printf("turn around");
    motor(0,-36);
    motor(3,-40);
    msleep(3000);
    set_servo_position(0,1306);
    set_servo_position(3,1677);
    printf("turn around");
    motor(0,36);
    motor(3,40);
    msleep(1500);
    set_servo_position(0,510);
    set_servo_position(3,822);
    printf("turn slightly hi bennett are we olmost done");
    motor(0,40);
    motor(3,2);
    msleep(4000);
    set_servo_position(0,1306);
    set_servo_position(3,1677);
    return 0;
}
