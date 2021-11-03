#include <kipr/botball.h>

int main()
{
    
 enable_servos();
set_servo_position(1,1294);
set_servo_position(2,2047);
printf("spin");
motor(0,55);			
motor(3,-55); 
msleep(1000);	
printf("move forwards");
motor(0,55)
motor(3,55);
msleep(1800);
    set_servo_position(2,116);
    set_servo_position(1,1217);
    
printf("move backwards");
motor(0,-55);
motor(3,-55);
msleep(1000);
    
    
printf("move backwards");
motor(3,-55);
motor(0,-55);      
msleep(500);
    printf("spin ");
motor(3,55);
motor(0,-55);      
msleep(1000);
    
printf("move forward");
    motor(3,55);
    motor(0,55);
    msleep(9999);
    
    printf("spin");
    motor(3,-55);
    motor(0,55);
    msleep(5000);
    printf("move forward");
    motor(3,55);
    motor(0,55);
    msleep(4000);
    printf("turn left ");
     motor(3,-22);
    motor(0,55);
    msleep(800);  
    printf("move forward ");
     motor(3,-22);
    motor(0,55);
    msleep(800);  
    
    
    printf("turn left ");
     motor(3,-22);
    motor(0,32);
    msleep(300);
    
    
     printf("turn left ");
     motor(3,55);
    motor(0,55);
    msleep(3000);
    printf("move forward");
   
    
   
     return 0;
}