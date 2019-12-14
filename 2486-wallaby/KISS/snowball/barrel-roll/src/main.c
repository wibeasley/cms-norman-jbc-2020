#include <kipr/botball.h>

int main()
{
    printf("go forward\n");
    motor(0, 40);
    motor( 3, 41);
    msleep(2000);

    motor(0, 40);
    msleep(500);
    return 0;
}   
