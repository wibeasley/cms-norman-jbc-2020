#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    motor(3,33);
    motor(0,33);
    msleep(2000);
    printf("turn right");
    motor (0,0);
    motor (3,33); 
    msleep(7000);
    return 0;
}
