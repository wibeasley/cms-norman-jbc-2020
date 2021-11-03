#include <kipr/botball.h>

int main()
{ 
    printf("go down\n");
    enable_servos();
    set_servo_position(1,1682);    
       msleep(2000);
    
    printf("go straight\n");
    motor(0,50); 
    motor(2,50);
    msleep(1000);
    
    printf("close claw\n");
    enable_servos();
    set_servo_position(2,515);    
       msleep(2000);
    
    
    
    
    
  
     ao();    
    return 0;
}
