#include <kipr/botball.h>

int main()
{
    printf("set arm\n");
    
    enable_servos(0);
    set_servo_position(0,1695);
    msleep(500);
    
    printf("set arm\n");
    enable_servos(2);
    set_servo_position(2,1024);
    msleep(500);
    
    
    printf("moving forward\n");
    int step_count = 0;
    while (analog (2) <= 2700 ) {    
        step_count = step_count + 1 ;
        motor(0,10);
        motor(2,10);
        msleep(100);
    }
       printf("step_count:%i\n", step_count);   
    
      printf("moving backwards\n");
      motor(0,-10);
      motor(2,-10);
      msleep(step_count * 100);
    return 0;
}
