#include <kipr/botball.h>
int move( int speed_left, int speed_right, int duration){
    motor(0,speed_left);
    motor(3,speed_right);
    msleep(duration);
    return 0;
}

int main()
{
    printf("Hello World\n");
    printf("moves forward\n");
    move(50,50,6000);
    
    
    return 0;
}
