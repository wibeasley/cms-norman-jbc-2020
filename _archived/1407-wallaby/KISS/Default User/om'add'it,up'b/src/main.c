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
    printf("prepares servos\n");
    enable_servos(0);
    set_servo_position(0,123);
    ao();
    
    printf("moves forward\n");                   //starting position -1 k
    move(50,50,4000);
    
    printf("lowers servos down and up\n");
    set_servo_position(0,1843);
    msleep(3000);
    
    printf("moves forward\n");
    move(50,50,1500);
    
           
    return 0;
}
