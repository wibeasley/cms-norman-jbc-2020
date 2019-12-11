#include <kipr/botball.h>

int main()
{
    printf("Go straight forward\n");
    motor(0, 40);
    motor(3, 40);
    msleep(4500);
    return 0;
}
