#include <kipr/botball.h>

int main()
{
    printf("straight\n");
    
    motor(3,42);
    motor(0,40);
    msleep(19000);
    
    printf("backwards\n");
    
    motor(3,-40);
    motor(0,-40);
    msleep(14000);
    return 0;
}
