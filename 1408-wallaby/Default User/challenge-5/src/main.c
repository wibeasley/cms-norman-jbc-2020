#include <kipr/botball.h>

int main()
{
     enable_servos(0);
    enable_servos(1);
    set_servo_position(0,1572);
    set_servo_position(1,817);
    
    motor(0,50);
    motor(3,50);
    msleep(3500);
    ao();
    
    motor(0,50);
    msleep(7500);
    ao();
    
    motor(3,50);
    msleep(7500);
    ao();
    
    set_servo_position(0,957);
    msleep(1000);
   
    set_servo_position(0,1603);
    msleep(1000);    
    
    motor(0,-50);
    motor(3,-50);
    msleep(4000);
    ao();


    
    
    printf("6-2\n");
    printf("Hello World\n");
    return 0;
}
