#include <kipr/botball.h>

int main()
{
    printf("go forward\n");

    motor(0, 60);
    motor(3, 61);
    
    motor(0, 60);
    msleep(4000);
    
    return 0;
}