#include <kipr/botball.h>

int main()
{
    enable_servos(0);
    enable_servos(1);
    set_servo_position(0,1350);
    msleep(500);
    ao();
    
    set_servo_position(1,1700);
    msleep(500);
    ao();
    
    motor(0,0);
    motor(3,0);
    msleep(2000);
    
    set_servo_position(1,991);
    msleep(800);
    ao();
    
    set_servo_position(0,690);
    msleep(800);
    ao();
    
    motor(0,50);
    motor(3,50);
    msleep(1500);
    ao();
    
    set_servo_position(0,1350);
    msleep(800);
    ao();
    
    set_servo_position(1,1700);
    msleep(800);
    ao();
    
    motor(0,-50);
    motor(3,-50);
    msleep(500);
    ao();
    
    motor(0,50);
    msleep(950);
    ao();
    
    motor(3,50);
    motor(0,50);
    msleep(1000);
    ao();
    
    motor(3,50);
    msleep(1000);
    ao();
    
    motor(0,50);
    motor(3,53);
    msleep(3000);
    ao();
    
     set_servo_position(1,991);
    msleep(800);
    ao();
    
    set_servo_position(0,690);
    msleep(800);
    ao();
    
    motor(0,-50);
    motor(3,-50);
    msleep(1000);
    ao();
    
    set_servo_position(0,1350);
    msleep(800);
    ao();
    
    set_servo_position(1,1700);
    msleep(800);
    ao();
    
    motor(0,-50);
    motor(3,-50);
    msleep(5000);
    ao();
    
    printf("8 by 3\n");
    printf("Hello World\n");
    return 0;
}
