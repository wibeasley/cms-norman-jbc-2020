#include <kipr/botball.h>

int main()
{
    printf("go forward\n");
    motor(0, 50);
    motor(3, 49);
    msleep(3500);
    
    printf('go around can');
    motor(0, 23);
    motor(3, 48);
    msleep(8500);
}
