#include <kipr/botball.h>

int main()
{
    printf("DANCE!\n");
    
    printf("enables servos/n");
    enable_servos(0);
    enable_servos(3);
    set_servo_position(0,-50);
    set_servo_position(1,50);
    msleep(2000);
    
    enable_servos(0);
    enable_servos(3);
    set_servo_position(0,-100);
    set_servo_position(1,50);
    msleep(2000);
    
    
    motor(0,30);
    motor(3,30);
    msleep(6000);
    
    motor(0,-30);
    motor(3,-30);
    msleep(4000);
    
    motor(0,30);
    motor(3,30);
    msleep(4000);
    
    motor(0,-30);
    motor(3,-30);
    msleep(4000);
    
    motor(0,30);
    motor(3,30);
    msleep(4000);
    
    motor(0,-30);
    motor(3,-30);
    msleep(4000);
  
    motor(0,30);
    motor(3,30);
    msleep(4000);
    
    motor(0,-30);
    motor(3,-30);
    msleep(4000);
    
    motor(0,30);
    motor(3,30);
    msleep(4000);
    
    motor(0,-30);
    motor(3,-30);
    msleep(4000);
    
    motor(0,70);
    motor(3,0);
    msleep(4000); 
    
   
    
    motor(0,0);
    motor(3,70);
    msleep(4000);

    
    
    return 0;
}
