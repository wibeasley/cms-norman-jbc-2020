#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    
    motor(3,10);
    motor(0,10);
    msleep(29000);
    
    motor(3,-10);
    motor(0,-10);
    msleep(29000);
    return 0;
}
