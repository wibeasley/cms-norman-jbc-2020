#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    motor(0,55);
    motor(3,55);
    msleep(3000);
    printf("tt");
    motor(0,33);
    motor(3,55);
    msleep(4000);
    printf("f");
    motor(0,55);
    motor(3,33);
    msleep(4000);
    printf("h");
    motor(0,60);
    motor(3,24);
    msleep(9000);
    printf("g");
    motor(0,40);
    motor(3,60);
    msleep(5000);
    printf("h");
    motor(0,55);
    motor(3,55);
    msleep(4000);
    
    return 0;
}
