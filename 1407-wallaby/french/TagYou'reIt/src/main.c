#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    
    printf("Pause movement\n");
    motor(0,40);
    motor(3,40);
    msleep(1950);
    
    printf("Move forward\n");
    motor(0,40);
    motor(3,40);
    msleep(1950);
    
    printf("Pause movement\n");
    motor(0,40);
    motor(3,40);
    msleep(1950);
    
    printf("Move backwards\n");
    motor(0, -40);
    motor(3, -40);
    msleep(6000);
    
    printf("Pause movement\n");
    motor(0,-40);
    motor(3,-40);
    msleep(2000);
    
    return 0;
}
