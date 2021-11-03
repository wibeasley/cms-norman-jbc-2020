#include <kipr/botball.h>
int main()
{
    printf("cache and daphne\n");
    enable_servos();
    set_servo_position(3,1000);
    clear_motor_position_counter(0);
    while(get_motor_position_counter(0) < 7000) {
        printf("motor position: %i\n", get_motor_position_counter(0));
        motor(0,30);
        motor(3,30);
        msleep(100);        
    }
    
    disable_servos(); 

    printf("cache and daphne\n");
    enable_servos();
    set_servo_position(3,1100);
    clear_motor_position_counter(0);
    while(get_motor_position_counter(0) < 7000) {
        printf("motor position: %i\n", get_motor_position_counter(0));
        motor(3,30);
        motor(0,0);
        msleep(100);        
    }
    
    disable_servos(); 

    
    printf("cache and daphne\n");
    enable_servos();
    set_servo_position(0,1515);
    
    
    
    return 0;
    
    }








