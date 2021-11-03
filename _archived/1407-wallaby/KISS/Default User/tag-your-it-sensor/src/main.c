#include <kipr/botball.h>

int main()
{
    printf("prepares servos 1\n");//sensors...yay!
    enable_servos(0);
    enable_servos(3);
    set_servo_position(0,1510);
    set_servo_position(3,1024);
    msleep(500);
    
    printf("moving forward\n");
    int step_count = 0;
    while (analog (0)<=2700) {
        step_count = step_count+1;
        motor(0, 10);
        motor(3, 10);
        msleep(100);
    }
        printf("step_count:%i\n", step_count);   
               
        printf("moving backwards\n");       
        motor(0,-10);       
        motor(3,-10);       
        msleep(step_count * 100);       
               
               
               
               
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
               
               
               
               
               
               
  
    return 0;
}
