#include <kipr/botball.h>

int main()
{
    printf("Go forward until the can\n");
    
    int step_count = 0;
    
    // Keep executing the loop as long as the sensor value is less than 2300.
    while( analog(5) < 2300 ) {
        step_count = step_count + 1;
        printf("keep going; analog 5 is %i; step_count is %i\n", analog(5), step_count);
        motor(0, 30);
        motor(3, 30);
        
        msleep(100);
    }  
    printf("The can has been reached; analog 5 is %i\n", analog(5));
    
    
    printf("Go backward the same amount of time\n");
    motor(0, -30);
    motor(3, -30);
    msleep(100 * step_count);
    
    
    return 0;
}
