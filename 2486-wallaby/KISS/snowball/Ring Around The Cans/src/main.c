#include <kipr/botball.h>

int main()
{
    printf("go forward\n");
    motor(0, 40);
    motor(3, 40);
    msleep(5000);
 
    printf("turn\n");
    motor(0, 30);
    msleep(9500);
    
    return 0;
}
