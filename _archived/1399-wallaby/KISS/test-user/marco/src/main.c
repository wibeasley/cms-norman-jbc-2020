#include <kipr/botball.h>

int main()
{
    printf("polo\n");
    
    clear_motor_position_counter(0);
    clear_motor_position_counter(3);
    
    printf("motor 0 position: %i\n", get_motor_position_counter(0));
    printf("motor 3 position: %i\n", get_motor_position_counter(3));
    
    move_to_position(0, 100, 1000);
    move_to_position(3, 300, 3000);
    //move_relative_position(0, 30, 1000);
    //move_relative_position(3, 30, 1000);
    
    
    printf("motor 0 position: %i\n", get_motor_position_counter(0));
    printf("motor 3 position: %i\n", get_motor_position_counter(3));
    
    msleep(3000);
    ao();
    
    int i = 0;
    while( i < 5 ) {
        beep();
        //move_to_position(2,3,1);
        msleep(1000);
        i++;
    }
    
    return 0;
}
