#include <kipr/botball.h>

int main()
{
    printf("move foreward");
    motor(0,55);
    motor(3,55);
    msleep(7500); 
    printf("spin");
    motor(0,-55);
    motor(3,55);
    msleep(5000);
    printf("move backwards");
    motor(0,-55);
    motor(3,-55);
    msleep(5000);
    printf("turn right");
    motor(0,33);
    motor(3,55);
    msleep(4500); 
    printf("move foreward");
    motor(0,55);
    motor(3,55);
    msleep(6000);
    
    return 0;
}
