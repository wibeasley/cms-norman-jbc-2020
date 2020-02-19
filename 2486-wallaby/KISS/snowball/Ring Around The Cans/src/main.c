#include <kipr/botball.h>

int main()
{
    printf("go forward\n");
    motor(0, 40);
    motor(3, 40);
    msleep(7650);
 
    printf("forward\n");
    motor(3, 30);
    motor(0,  0);
    msleep(4000);
    
    return 0;
}
