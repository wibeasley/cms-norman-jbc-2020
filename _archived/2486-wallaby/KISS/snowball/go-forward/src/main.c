#include <kipr/botball.h>

int main()
{
    printf("go straight\n");
    

    motor(0, 50);
    motor(3, 51);
    msleep(15000);
    return 0;
}