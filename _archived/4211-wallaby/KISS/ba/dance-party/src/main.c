#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    motor(0,-55);
    motor(3,-55);
    msleep(4000);
    printf("h");
    motor(0,66);
    motor(3,12);
    msleep(8000);
    printf("g");
    motor(0,12);
    motor(3,66);
    msleep(8000);
 printf("j");
    motor(0,-55);
    motor(3,-55);
    msleep(4000);
    return 0;
}
