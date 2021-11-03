#include <kipr/botball.h>

int move( int speed_left, int speed_right, int duration ){
   motor(0,speed_left);
   motor(3,speed_right);
   msleep(duration);
   
   return 0  ;
}

int main()
{
    printf("Hello World\n");
    printf("servos prepare for challenge\n");
    enable_servos(0,3);
    set_servo_position(0,1784);
    set_servo_position(3,0);
    msleep(2500);
    ao();
    printf("moves forward\n");
    move(30,30,1500);
    printf("turns left\n");
    move(30,-30,1000);
    printf("moves forward\n");
    move(30,30,1500);
    printf("turns right\n");
    move(-30,30,1000);
    printf("moves forward\n");
    move(30,30,3500);
    printf("turns around to finish\n");
    move(30,-30,2500);
    printf("moves forward\n");
    move(30,30,4500);
    
    return 0;
}
