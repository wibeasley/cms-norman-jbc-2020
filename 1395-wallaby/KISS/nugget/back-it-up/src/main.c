#include <kipr/botball.h>

int main()
{
        printf("Go straight backward\n");
    motor(0, -40);
    motor(3, -40);
    msleep(7000);
    
    printf("Go pivot left\n");
    motor(0, 40);
    motor(3, 0);     
    msleep(4500);
    
    return 0;
}
