#include <kipr/botball.h>

int main()
{
    printf("go forward\n");
    motor(0, 40);
    motor(3, 40);
    msleep(7650);
 
    printf("pivot\n");
    motor(3, 30);
    motor(0,  0);
    msleep(4000);

    printf("go forward");
    motor(3, 40);
    motor(0, 39);
    msleep(4000);
    
    printf("pivot");
    motor(3, 30);
    motor(0, 0);
    msleep(4000);
    
    printf("go forward");
    motor(3, 40);
    motor(0, 39);
    msleep(6000);
    
    return 0;
}
