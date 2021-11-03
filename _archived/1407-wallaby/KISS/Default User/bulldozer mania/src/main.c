#include <kipr/botball.h>

int main()
{
    printf("land on mars");
    
         printf("servos get reedy.\n");
     enable_servos();   
    set_servo_position(0,1542);
    set_servo_position(3,646);  

    printf("moves motors1/n");
    motor(0,50);
    motor(3,50);    
    msleep(5000);    
        
    printf("moves motors back1/n");    
    motor(0,-50);
    motor(3,-50);
    msleep(5000);
    
    printf("moves motors2/n");
    motor(0,100);
    motor(3,100);
    msleep(4000);
   
    printf("moves motors back2/n");
    motor(0,-100);
    motor(3,-100);
    msleep(1000);
    
    return 0;
}
