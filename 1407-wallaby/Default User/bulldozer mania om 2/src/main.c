#include <kipr/botball.h>
int move( int speed_left, int speed_right, int duration ){
    motor(0,speed_left);
    motor(0,speed_right);
    msleep(duration);
    return 0;
}




int main()
{
    printf("Hello World\n");
    return 0;
}
