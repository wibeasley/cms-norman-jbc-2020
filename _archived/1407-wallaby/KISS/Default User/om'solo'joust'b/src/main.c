#include <kipr/botball.h>

int move( int speed_left, int speed_right, int duration ){
     motor(0,speed_left);
     motor(3,speed_right);
     msleep(duration);
    return 0;
}    

int main()
{
    printf("Hello World\n");
    printf("prepare servos for solo joust\n");
    enable_servos(0,3);
    set_servo_position(3,644);
    set_servo_position(0,1537);
    msleep(2500);
    ao();
    
    printf("move forward\n");
    move(100,100,3500);
    
    
    
    
    
    
    return 0;
}
