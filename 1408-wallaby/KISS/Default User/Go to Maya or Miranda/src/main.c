#include <kipr/botball.h>

int main()
{
     printf("set servos\n");
    enable_servos();
    set_servo_position(0,593);
    set_servo_position(1,797);
    msleep(200);
    
    printf("moving forward\n");
    while (analog(0)>=1000) {
       
        motor(0,100);
        motor(3,100);
        msleep(100);
    }  
    
    //turn left
    //go forward
    //grab can 
    //go backwards little bit
    //turn left
    //drop can
    //backwards little bit
    //turn left
    //go forward
    //turn right
    //go forward
    //turn right
    //turn left
    //go forward
    //grab can
    //go backwards
    //turn right
    //go backwards
    printf("Hello World\n");
    return 0;
}
