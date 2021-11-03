#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
     printf("start position 2c");
    printf("move forward");
    motor(3,-55);
    motor(0,-55);
    msleep(5000);
    printf("turn right");
    motor(0,-25);
    motor(3,-55);
    msleep(14500);
    printf("move foreward");
    motor(3,-55);
    motor(0,-55);
    msleep(6000);
    
    
    
    
    
    
    
    
    
    
    return 0;
}
