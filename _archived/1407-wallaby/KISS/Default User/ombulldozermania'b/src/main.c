#include <kipr/botball.h>

int move( int speed_left, int speed_right, int duration ){
    motor(0,speed_left);
    motor(3,speed_right);
    msleep(duration);
    return 0 ;
}

int main()
{
    printf("Hello World\n");
    printf("moves servos into position\n");      
    enable_servos(0,3);
    set_servo_position(0,1706);                  // position -3 j
    set_servo_position(3,0);
    msleep(2000);
    ao();
    printf("motors turn right\n");
    move(38,58,1800);
    
    printf("motors move forward\n");
    move(55,55,1100);
         
    printf("moves motors left\n");
    move(58,38,1600);
   
    printf("moves motors forward/n");
    move(55,55,4500);
    
    printf("moves  motors left\n");
    move(78,38,4500);
    
    printf("moves motors forward\n");
    move(55,55,7000);                           
    
    
    
    
   
    return 0;
}
