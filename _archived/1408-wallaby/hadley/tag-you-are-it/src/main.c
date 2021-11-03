#include <kipr/botball.h>

int main()
{
    printf("Hadley's Tag you are it\n");
    
    printf("Move forward\n");
    motor(0,55);
    motor(3,55);
    msleep(5000);
    
    printf("Move backwards\n");
    motor(0,-55);
    motor(3,-55);
    msleep(5000);
           
    
    
    
    printf("Finish\n");
    return 0;
    
}
