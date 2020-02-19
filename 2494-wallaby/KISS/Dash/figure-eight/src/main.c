#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    motor(3,40);
    motor(0,40);
    msleep(6000);
    
    motor(0,40);
    motor(3,0);
    msleep(2000);
    
    return 0;
}
