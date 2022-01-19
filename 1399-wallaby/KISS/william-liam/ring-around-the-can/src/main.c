#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");//start position 03
    motor (0,45);
    motor (3,45);
    msleep(7000);
    motor (0,55);
    motor (3,5);
    msleep(2000);
    motor (0,50);
    motor (3,50);
    msleep(2000);
    motor (0,55);
    motor (3,5);
    msleep(2800);
    motor (0,50);
    motor (3,50);
    msleep(7800);
    return 0;
}
