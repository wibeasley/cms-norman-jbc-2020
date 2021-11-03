#include <kipr/botball.h>

int move( int speed_left, int speed_right, int duration){
    motor(0,speed_left);
    motor(3,speed_right);
    msleep(duration);
    return 0;
}     
 
int main() {
    printf("Hello World\n");
    
    
    printf("opens claw\n");
    enable_servos(0,3);
    set_servo_position(0,0);
    set_servo_position(3,0);
        
    printf("moves forward to about #8\n");    
    clear_motor_position_counter(0);
    while( get_motor_position_counter(0)<4500 ) {
        printf("motor position: %i\n", get_motor_position_counter(0));
    	move(15, 15, 100);
    }

    printf("pivot left 90 degrees\n");    
    //TODO: add the pivot left
    move(15,-15,2400);
    
    printf("move to the about circle #6\n");    
    clear_motor_position_counter(0);
    while( get_motor_position_counter(0)<3000 ) {
        printf("motor position: %i\n", get_motor_position_counter(0));
    	move(15, 15, 100);
    }
    
    printf("pivot left 90 degrees\n");    
    //TODO: add the pivot left
    move(15,-15,2400);
    printf("return to start line\n");    
    clear_motor_position_counter(0);
    while( get_motor_position_counter(0)<5000 ) {
        printf("motor position: %i\n", get_motor_position_counter(0));
    	move(15,15,100);
    }
    
    return 0;
}
