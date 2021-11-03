#include <kipr/botball.h>

int main()
{
         enable_servos(0);
    enable_servos(1);
    set_servo_position(0,1572);
    
    motor(3,50);
    motor(0,50);
    msleep(800);
    ao();
    
     set_servo_position(0,1554);
    msleep(1000);
    
    set_servo_position(1,1608);
   msleep(1000);
    
    set_servo_position(0,889);
    msleep(1000);
    
    set_servo_position(1,819);
    msleep(1000);
    
   motor(0,50);
    msleep(1500);
    ao();
    
        
    set_servo_position(0,1466);
    msleep(1000);
    
    motor(3,50);
    msleep(500);
    ao();
    
   motor(3,50);
    msleep(1000);
    ao();  
    
    motor(3,50);
    motor(0,50);
    msleep(500);
    ao();
    
        
    set_servo_position(1,1608);
   msleep(1000);
    
    set_servo_position(0,889);
    msleep(1000);
    
    set_servo_position(1,819);
    msleep(1000);
    
      set_servo_position(0,1466);
    msleep(1000);
    
   motor(0,50);
    msleep(3000);
    ao();
    
       motor(3,50);
    msleep(3500);
    ao();  
    
    motor(3,50);
    motor(0,50);
    msleep(2500);
    ao(); 
    
    
       set_servo_position(0,1554);
    msleep(1000);
    
    set_servo_position(1,1608);
   msleep(1000);
    
    set_servo_position(0,889);
    msleep(1000);
    
    set_servo_position(1,819);
    msleep(1000);
    
   motor(0,50);
    msleep(1500);
    ao();
    
        
    set_servo_position(0,1466);
    msleep(1000);
    
    motor(3,50);
    msleep(500);
    ao();
   
    motor(3,50);
    motor(0,50);
    msleep(4000);

    printf("Hello World\n");
    return 0;
}
