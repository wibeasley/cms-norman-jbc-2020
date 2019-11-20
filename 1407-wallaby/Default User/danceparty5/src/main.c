#include <kipr/botball.h>

int main()
{
    
    printf("enables servos and sets position\n"); 
    enable_servos(0);
    set_servo_position(0,1563);
    
    printf("moves motors\n");
    motor(0,50);
    motor(3,50);//needs a claw
    msleep(3000);
    ao();
    printf("enables servos and sets position\n"); 
    enable_servos(0);
    set_servo_position(0,863);
    msleep(8000);
    
    printf("disables servos\n"); 
    disable_servos(0);
    
    printf("turns motors1\n");
    motor(0,50);
    motor(3,20);
    msleep(11000);
    ao();
    
    printf("moves motors2\n");
    motor(0,50);
    motor(3,50);
    msleep(5000);
    ao();
    
    printf("moves motors back1/n");
    motor(0,-50);
    motor(3,-50); 
    msleep(5000);
    
    printf("turns motors2/n"); 
    motor(0,-50);
    motor(3,-20);
    msleep(11000);
    
    
    
    
    
  return 0;
}