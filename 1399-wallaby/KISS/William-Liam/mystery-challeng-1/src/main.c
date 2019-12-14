#include <kipr/botball.h>

int main()
{
    printf("go straight/n");//i3
    motor (0,45);
    motor (3,45);
    msleep(11500);
    motor (0,-45);
    motor (3,-45);
    msleep(12500);
    return 0;
}
