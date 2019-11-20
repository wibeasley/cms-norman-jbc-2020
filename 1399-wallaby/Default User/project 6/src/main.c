#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    enable_servos();
    set_servo_position(1,1829);
    set_servo_position(3,341);
    msleep(4000);
    
    enable_servos();
    set_servo_position(1,1547);
    msleep(4000); 
    
    printf("going straight\n");
    motor(0,50);
    motor(3,50);
    msleep(1000);
    
    
    ;enable_servos();
    set_servo_position(1,1684);
    msleep(500)
    
    ; printf("stoping\n");
    ;motor(3,0);
    motor(0,0);
    msleep(3000);
  
    enable_servos();
    set_servo_position(1,766);
    set_servo_position(3,862);
    msleep(4000);
    
    printf("turning\n");
    motor(3,0);
    motor(0,50);
    msleep(1300);
    
printf("going straight\n");
      motor(0,50);
    motor(3,50);
    msleep(2000);
   
    
    
    printf("turning\n");
    motor(3,50);
    motor(0,0);
    msleep(1300);
    
    
    printf("turning\n");
    motor(3,50);
    motor(0,10);
    msleep(200);
    
    
    enable_servos();
    set_servo_position(1,1850);
    msleep(2000);
    
    printf("turning\n");
    motor(3,10);
    motor(0,50);
    msleep(2080);
    
    
    printf("turning\n");
    motor(3,50);
    motor(0,10);
    msleep(300);
    
    enable_servos();
    set_servo_position(3,341);
    set_servo_position(1,1613);
    msleep(3000);
    
    
    printf("backing\n");
    motor(3,-50);
    motor(0,-50);
    msleep(3000);
    
    
    printf("turning\n");
    motor(3,50);
    motor(0,0);
    msleep(500);
    
    
    printf("going straight\n");
    motor(3,50);
    motor(0,50);
    msleep(1000);
    
    
    
    
    
    
    
    
    
    
    
    
    
    ;return 0;
}
