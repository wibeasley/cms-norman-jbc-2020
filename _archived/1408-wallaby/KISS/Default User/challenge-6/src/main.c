
#include <kipr/botball.h>

int main()
{
         enable_servos(0);
    enable_servos(1);
    set_servo_position(0,1616);
    set_servo_position(1,1871);
    
     printf("go forward\n");
    motor(0,50);
    motor(3,50);
    msleep(2500);
    ao();
    
    printf("go backward\n");
    motor(3,-50);
    motor(0,-50);
    msleep(2000);
    ao();
    
    printf("turn left\n");
    motor(0,50);
    msleep(1000);
    ao();
    
    printf("go forward\n");
    motor(3,50);
    motor(0,50);
    msleep(500);
    ao();
    
    printf("turn right\n");
    motor(3,50);
    msleep(1000);
    ao();
    
    printf("go forward\n");
    motor(3,50);
    motor(0,50);
    msleep(3000);
    ao();
    
    printf("turn right\n");
    motor(3,50);
    msleep(1400);
    ao();
    
    printf("go forward\n");
    motor(3,50);
    motor(0,50);
    msleep(1900);
    ao();
    
    printf("go backward\n");
    motor(0,-50);
    motor(3,-50);
    msleep(1500);
    ao();
    
     printf("turn left\n");
    motor(0,50);
    msleep(950);
    ao();
    
     printf("go forward\n");
    motor(0,50);
    motor(3,50);
    msleep(500);
    ao();
    
     set_servo_position(0,1616);
    set_servo_position(1,626);
    msleep(1000);
   
    motor(0,-50);
    motor(3,-50);
    msleep(1500);
    
     set_servo_position(0,1616);
    set_servo_position(1,1871);
    msleep(1000);
    
    motor(0,-50);
    motor(3,-50);
    msleep(4500);
    ao();
    
    printf("8-3\n");
    printf("Hello World\n");
    return 0;
}
