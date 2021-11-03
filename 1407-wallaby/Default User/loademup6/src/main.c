#include <kipr/botball.h>

int main()
{
     printf("servos get reedy.\n");
     enable_servos();   
    set_servo_position(0,1893);
    set_servo_position(3,486);  
    
    printf("moves motors1\n");
    motor(0,50);
    motor(3,50);
    msleep(3000);
    
    printf("moves motors back1\n");   
    motor(0,-50);
    motor(3,-50);
    msleep(3000);
    
    printf("turns motors\n");
    motor(0,30);
    motor(3,10);
    msleep(2000);
    
    printf("moves motors2/n");
    motor(0,50);
    motor(3,50);
    msleep(1111);
    
    printf("turns motors2/n");
    motor(0,25);
    motor(3,50);
    msleep(1000);
    
    printf("moves motors2/n");
    motor(0,50);
    motor(3,50);
    msleep(1000);
    
    printf("turns motors3/n");
    motor(3,50);
    motor(0,30);
    msleep(2800);
    
    printf("moves motors3/n");
    motor(0,40);
    motor(3,40);
    msleep(2400);
    
    printf("moves motors back2/n");
    motor(0,-50);
    motor(3,-50);
    msleep(2000);
    
    printf("moves sevros1/n");
    enable_servos();
    set_servo_position(0,1627);
    msleep(1000);
    
    printf("disables servos1");
    disable_servos();
    
    printf("turns motors4");
    motor(0,30);
    motor(3,-30);
    msleep(550);
    
    printf("moves motors4/n");
    motor(0,50);
    motor(3,50);
    msleep(2000);
    
    printf("closes servo1/n");
    enable_servos();
    set_servo_position(3,0);
    msleep(91);
    
    printf("disables servos2");
    disable_servos();
    
    printf("moves motors back3/n");
    motor(0,-50);
    motor(3,-50);
    msleep(1500);
    
   return 0;
}