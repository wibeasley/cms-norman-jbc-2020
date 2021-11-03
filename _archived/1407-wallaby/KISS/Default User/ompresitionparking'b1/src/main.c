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
    printf("moves forward");
    move(50,50,4500);       //starting position -2 i servos at 525
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
