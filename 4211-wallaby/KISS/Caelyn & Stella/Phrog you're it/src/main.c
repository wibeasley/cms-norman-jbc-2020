#include <kipr/botball.h>

int main()
{
    printf("Go forward then go back, smacks lips beautiful\n");
    motor(0, 38);
    motor(3, 39);
    msleep(4000);
    
    motor(0, -38);
    motor(3, -39);
    msleep(3000);
    return 0;
}
