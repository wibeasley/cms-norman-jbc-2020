#include <kipr/botball.h>

int main()
{
    printf("starting position h0");
    printf("Hello World\n");
    motor(3,55);
    motor(0,55);
    msleep(3000);
    printf("backwards");
    motor(3,-55);
    motor(0,-55);
    msleep(3000);
     printf("forward");
    motor(3,55);
    motor(0,55);
    msleep(6500);
    
    return 0;
}
