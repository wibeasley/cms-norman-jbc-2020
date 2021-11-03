#include <kipr/botball.h>

int main()
{
    
    enable_servos(1);
    enable_servos(0);
    set_servo_position(0,1572);
    set_servo_position(1,1613); 
    
    motor(0,40);
    motor(3,40);
    msleep(500);
    ao();
    
     set_servo_position(1,822);
    msleep(1000);
    
    set_servo_position(0,815);
    msleep(1000);
    
    motor(0,-40);
    motor(3,-40);
    msleep(1000);
    ao();
    
    motor(3,40);
    msleep(2800);
    ao();
    
        set_servo_position(0,1566);
    msleep(1000);
    
       set_servo_position(1,1124);
    msleep(1000);
    
     set_servo_position(1,1653);
    msleep(1000);
    
    motor(0,-40);
    motor(3,-40);
    msleep(1000);
    ao();
    
    motor(0,40);
    msleep(3300);
    ao();
    
    motor(0,40);
    motor(3,40);
    msleep(1600);
    ao();
    
    set_servo_position(0,1566);
    msleep(1000);
    
       set_servo_position(1,1024);
    msleep(1000);
    
    motor(0,-40);
    motor(3,-40);
    msleep(3000);
    ao();
    
    motor(0,40);
    msleep(2800);
    ao();
    
    motor(0,0);
    motor(3,0);
    msleep(1000);
    ao();
     
         set_servo_position(1,1653);
    msleep(1000);

    motor(0,-40);
    motor(3,-40);
    msleep(1000);
    ao();
    
     motor(3,40);
    msleep(1000);
    ao();
    
    motor(0,40);
    motor(3,40);
    msleep(1500);
    ao();
    
     set_servo_position(1,1124);
    msleep(1000);
   
    motor(3,50);
    msleep(1000);
    ao();
    
    motor(0,-40);
    motor(3,-40);
    msleep(5000);
    ao();
    
    printf("5 by 8\n");
    printf("Hello World\n");
    return 0;
}

  