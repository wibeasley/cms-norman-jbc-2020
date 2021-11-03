#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
   
    
     printf("put claw down\n");
  enable_servos();
set_servo_position(1,2035);    
   msleep(2000);  
    
    printf("stopping\n"); 
    motor(2,00);
    motor(0,00);
    msleep(2000);
    
    printf("lift claw up\n");
  enable_servos();
set_servo_position(1,792);    
   msleep(2000);
        
motor(0,50);    
motor(2,10);   
msleep(100);    

   
    
    
      printf("put claw down\n");
  enable_servos();
set_servo_position(1,2035);    
   msleep(1000);
    
    

    printf("lift claw up\n");
  enable_servos();
set_servo_position(1,792);    
   msleep(1000);   
   
   
    motor(2,00);
    motor(0,00);
    msleep(2000);
    
    motor(2,50);   
 motor(0,00);
msleep(1600);    
    
 motor(2,50);   
 motor(0,50);
msleep(1000);    
    
     printf("put claw down\n");
  enable_servos();
set_servo_position(1,2035);    
   msleep(1000);   
    
    
    
    return 0;
}
