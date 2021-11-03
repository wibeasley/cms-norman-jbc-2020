#include <kipr/botball.h>

int main()
{
    enable_servos(0);
    enable_servos(1);
    set_servo_position(1,1045);
    set_servo_position(0,753);

    printf("go forward\n");
    motor(0,45);
    motor(3,45);
    msleep(590);
    ao();

    printf("set servos\n");
    set_servo_position(0,1744);
    msleep(1000);
    set_servo_position(0,753);
    msleep(1000);
    
    printf("go forward\n");
    motor(0,50);
    motor(3,50);
    msleep(750);
    ao();
    
    printf("set servos\n");
    set_servo_position(0,1744);
    msleep(1000);
    set_servo_position(0,753);
    msleep(1000);
    
    printf("go forward\n");
    motor(0,45);
    motor(3,45);
    msleep(1350);
    ao();
    
    printf("set servos\n");
    set_servo_position(0,1744);
    msleep(1000);
    set_servo_position(0,753);
    msleep(1000);
    
    printf("go backward\n");
    motor(0,-45);
    motor(3,-45);
    msleep(3500);
    ao();
    
    printf("8 by 5\n");
    printf("Hello World\n");
    return 0;
}
