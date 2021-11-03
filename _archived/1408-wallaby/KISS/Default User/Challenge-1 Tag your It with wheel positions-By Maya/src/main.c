#include <kipr/botball.h>

int main()
{
    clear_motor_position_counter(3);

    while (get_motor_position_counter(3) <4500)
    {
        motor(3,50);
        motor(0,65);
    }
    ao();
    
    clear_motor_position_counter(3);
    while (get_motor_position_counter(3) >-5000)
    {
        motor(3,-50);
        motor(0,-65);
    }
    ao();
    
    return 0;
}
