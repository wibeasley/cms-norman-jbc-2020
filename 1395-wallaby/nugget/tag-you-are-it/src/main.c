#include <kipr/botball.h>

// Start with the robot's black post at "J4"
int main()
{
    printf("Go straight forward\n");
    motor(0, +40);
    motor(3, +40);
    msleep(8000);
    
    printf("Go straight backwards\n");
    motor(0, -40);
    motor(3, -40);     
    msleep(8000);
    
    return 0;
}
