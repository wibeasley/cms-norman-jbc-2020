#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    motor(0,55);
    motor(3,0);
    msleep(5000);
    printf("L");
    motor(3,55);
    motor(0,55);
    msleep(3000);
    printf("K");
    motor(0,55);
    motor(3,0);
    msleep(5000);
}
    return 0; 