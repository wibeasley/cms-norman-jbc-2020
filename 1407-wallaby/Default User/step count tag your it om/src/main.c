#include <kipr/botball.h>

int move( int speed_left, int speed_right, int duration ){
    motor(0,speed_left);
    motor(3,speed_right);
    msleep(duration);
    return 0;
}






int main()
{
    printf("Hello World\n");           //start at coordinates 0 k
    
    clear_motor_position_counter(0);       
    while(get_motor_position_counter(0)<10,000);
    
    
    
    printf("Hello World\n");
    printf("moves forward\n");
    move(50,50,5500);
    printf("moves backwards\n");
    move(-50,-50,7000);      
    
    
    return 0;
}
