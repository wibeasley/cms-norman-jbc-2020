#include <kipr/botball.h>

int main()
{
    printf("go forward\n");
    motor(0, 49);
    motor(3, 50);
    msleep(7500);
    return 0;
}
