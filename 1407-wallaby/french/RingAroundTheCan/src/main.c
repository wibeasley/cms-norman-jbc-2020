#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    
    printf("Pause movement\n");
    motor(0, 40);
    motor(3, 40);
    msleep(3000);
        
    printf("Move forward\n");
    motor(0, 40);
    motor(3, 40);
    msleep(3000);
    
    printf("Turn\n");
    motor(0, 90);
    motor(3, 40);
    msleep(3500);
    
    printf("Move forward\n");
    motor(0, 40);
    motor(3, 40);
    msleep(6000);
    
    return 0;
}
