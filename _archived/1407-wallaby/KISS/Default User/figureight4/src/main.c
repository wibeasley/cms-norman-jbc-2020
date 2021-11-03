#include <kipr/botball.h>

int main()
{
    printf("Huston we have a problem");
    motor(0,75);
    motor(3,70);
    msleep(1500);
    
    motor(0,95);
    motor(3,50);
    msleep(1500);
    
    motor(0,55);
    motor(3,90);
    msleep(1500);
    
    motor(0,40);
    motor(3,90);
    msleep(1500);
    
    motor(0,40);
    motor(3,78);
    msleep(3000);
    
    motor(0,70);
    motor(3,40);
    msleep(4000);
    
    motor(0,40);
    motor(3,40);
    msleep(3500);
    return 0;
}
