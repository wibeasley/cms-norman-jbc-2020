#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    motor(0,-40);
    motor(3,-40);
    msleep(5000);
    
    motor(0,-30);
    motor(3,-50);
    msleep(15000);
    
    motor(0,-40);
    motor(3,-40);
    msleep(5000);
    return 0;
}
