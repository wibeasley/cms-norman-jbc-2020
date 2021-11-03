#include <kipr/botball.h>

int main()
{
    enable_servos();
    //set position

    printf("forward");
    motor(0,50);
    motor(3,50);
    msleep(6000);
    printf("around");
    motor(0,22);
    motor(3,50);
    msleep(8700);
    printf("back");
    motor(0,50);
    motor(3,50);
    msleep(6500);
    //disable
    return 0;
}    

