#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    motor(0,30);
    motor(3,30);
    msleep(5000);
    motor(0,50);
    motor(3,40);
    msleep(2000);
    motor(0,40);
    motor(3,40);
    msleep(2000);
    
    return 0;
}
