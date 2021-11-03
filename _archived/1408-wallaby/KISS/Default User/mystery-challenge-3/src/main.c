#include <kipr/botball.h>

int main()
{
    printf("set servos\n");
    enable_servos();
    set_servo_position(0,1374);
    set_servo_position(1,1648);
    msleep(200);
    
    motor(0,50);
    motor(3,51);
    msleep(300);
    
    printf("set servos\n");
    enable_servos();
    set_servo_position(0,1374);
    set_servo_position(1,889);
    msleep(200);
    
    motor(0,50);
    motor(3,51);
    msleep(4500);
    
    motor(0,0);
    motor(3,0);
    msleep(1000);
    
    printf("set servos\n");
    enable_servos();
    set_servo_position(0,1374);
    set_servo_position(1,1648);
    msleep(200);
    
    motor(0,-50);
    motor(3,-51);
    msleep(7000);
    
    motor(0,50);
    msleep(800);
    
    motor(0,50);
    motor(3,51);
    msleep(1000);
    
    printf("Hello World\n");
    return 0;
}
