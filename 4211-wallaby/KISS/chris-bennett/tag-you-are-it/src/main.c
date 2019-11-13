#include <kipr/botball.h>

int main()
{
    printf("move foreward");
    motor(0,55);
    motor(3,55);
    msleep(4000);
    printf("move backwards");
    motor(0,-55);
    motor(3,-55);
    msleep(4000);
    
    
    return 0;
}
