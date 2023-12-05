#include <kipr/botball.h>

int main()
{
    printf("go forward\n");
    motor(0,50);
    motor(3,50);
    msleep(2000);
    ao();
    
    printf("set servos\n");
    enable_servos(0);
    enable_servos(1);
    set_servo_position(0,1484);
    
    printf("go forward\n");
    motor(0,50);
    motor(3,50);
    msleep(1000);
    ao();
    
    printf("set servos\n");
    enable_servos(0);
    enable_servos(1);
    set_servo_position(0,566);
  
    
     printf("set servos\n");
    enable_servos(0);
    enable_servos(1);
    set_servo_position(0,839);
    
    printf("set servos\n");
    enable_servos(0);
    enable_servos(1);
    set_servo_position(0,1500);
    
    
    
    printf("set servos\n");
    enable_servos(0);
    enable_servos(1);
    set_servo_position(0,839);
    
    printf("8 by 4\n");
    printf("Hello World\n");
    return 0;
}
