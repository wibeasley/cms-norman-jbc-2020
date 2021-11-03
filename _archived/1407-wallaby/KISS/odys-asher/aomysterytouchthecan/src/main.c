#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    printf("this is gonna be easy");
    motor(0,40);
    motor(3,40);
    msleep(9500);
    motor(3,0);
    motor(0,0);
    msleep(1000);
    motor(3,-40);
    motor(0,-40);
    msleep(9500);
    
    
    return 0;
}
