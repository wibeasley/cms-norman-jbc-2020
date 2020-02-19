#include <kipr/botball.h>

int main()
{
    printf("go forward until the can\n");
    enable_servos 
    set_servo_position(1,962);  
            
    int step_count = 0;
    
    // keep executing the loop as long as the sensor value is less than 2300. 
    while( analog(5) < 2300 ) { 
       step_count = step_count + 1;
       
       motor(0,30);
       motor(3,30);
        
       msleep(100); 
       
        
           
        
        
        
        
    }     
        
    return 0;
}
