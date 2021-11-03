#include <kipr/botball.h>

int main()
{

    printf("turn servos on\n");
    enable_servos();
    
    printf("move servo to position\n");
    set_servo_position(1,1417); 
    msleep(500);
    
    
    printf("go forward\n");
    int step_count = 0;
    while (analog(5)<=2920) {
        step_count = step_count +1;
        motor(0,10);
        motor(3,10);
        msleep(100);    
    }    
    printf("step_count: %i\n ", step_count);
    
    printf("go backward\n");
    motor(0,-10);
    motor(3,-10);
    msleep(step_count * 100);

    return 0;
}
