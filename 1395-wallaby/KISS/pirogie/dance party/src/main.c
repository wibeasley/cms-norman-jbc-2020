#include <kipr/botball.h>

int main()
{
    printf("spin\n");
    motor(0,40);
    motor(3,-40);
    msleep(6000);
    
    printf("forword\n");
    motor(0,40);
    motor(3,40);
    msleep(2000);
    return 0;
}
