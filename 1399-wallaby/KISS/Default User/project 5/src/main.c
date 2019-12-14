#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    
    enable_servos();
    set_servo_position(1,1691);
    msleep(2000);
    
    motor(2,100);
    motor(0,100);
    msleep(1000);
    
    
    enable_servos();
    set_servo_position(1,798);
    msleep(2000);
   
    printf("spining\n");
    motor(2,20);
    motor(0,100);
    msleep(9500);
    
    
    motor(2,-100);//go backwards
    motor(0,-100);
    msleep(1000);
    
    
    printf("going straight\n")
   ; motor(2,50);
    motor(0,50);
    msleep(2000);
    
   printf("going backwards\n");
    motor(2,-100);
   motor(0,-100);
   msleep(1000);  
    
  motor(2,-100);
  motor(0,-10); //spining backwards 
  msleep(1000);   
    
    printf("spining\n")
   ; motor(2,75);
    motor(0,20);
    msleep(3000);
    
  motor(2,-10);
  motor(0,-100); //spining backwards 
  msleep(6000);  
    
    
    printf("going straight\n");
   ; motor(2,100);
    motor(0,100);
    msleep(1000);
    
    return 0;
}
