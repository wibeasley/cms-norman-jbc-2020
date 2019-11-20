#include <kipr/botball.h>

int main()
{
    printf("set servos\n");
    enable_servos();
    set_servo_position(0,1528);
    set_servo_position(1,797);
    msleep(200);
    
    printf("moving forward\n");
    int step_count = 0;
    printf("analog: %i\n", analog(0));
    while (analog(0)<=2700) {
        printf("Step: %i\n", analog(0));
        step_count = step_count + 1;
        motor(0,50);
        motor(3,50);
        msleep(100);
    }  
    printf("step_count: %i\n", step_count);
    
    printf("turn arond\n");
    motor(0,50);
    motor(3,2);
    msleep(4000);
    
    printf("go forward\n");
    motor(3,50);
    motor(0,50);
    msleep(step_count * 100);
   
    
    
    
    
    
    
    printf("turn arond\n");
    motor(0,50);
    msleep(3300);
    
    printf("Hello World\n");
    return 0;
}
