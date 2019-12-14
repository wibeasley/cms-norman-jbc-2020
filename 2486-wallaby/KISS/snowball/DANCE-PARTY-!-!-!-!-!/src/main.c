#include <kipr/botball.h>

int main()
{
    printf("go forward\n");
    motor(0, 40);
    motor( 3, 40);
    msleep(2000);
    
    printf("pause\n");
    motor(3, 0);
    motor(0, 0);
    msleep(500);
    
    printf("go spin right\n");
    motor(0, 40);
    motor(3, -40);
    msleep(15000);
    return 0;
}   
