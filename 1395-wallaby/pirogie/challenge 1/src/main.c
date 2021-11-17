#include <kipr/botball.h>

int main()
{
     printf("super tag\n");
    motor(0,20);
    motor(3,20);
    msleep(14000);
    
    printf("super tag\n");
    motor(0,-20);
    motor(3,-20);
    msleep(14000);
    
    printf("super spin\n");
    motor(0,-40);
    motor(3,40);
    msleep(10000);
    return 0;
}