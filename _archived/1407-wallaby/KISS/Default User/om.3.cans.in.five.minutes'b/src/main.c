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
    printf("set servo positions\n");
    enable_servos(0,3);
    set_servo_position(0,1494);
    set_servo_position(3,513);
    msleep(3000);
    
    printf("closes servo port 3\n");
    set_servo_position(3,0);
    msleep(2000);
    
    printf("moves forward\n");
    move(50,50,2345);
    
    printf("relese 1st can");
    set_servo_position(3,543);
    msleep(2345);
    
    printf("moves backward\n");
    move(-50,-50,2345);
    
    
    
    
    return 0;
}
