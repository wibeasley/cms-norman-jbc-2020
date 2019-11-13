#include <kipr/botball.h>

int main()
{
    printf("Move forward\n");
    motor (0,50);
    motor (3,50);
    msleep (5000);
    
    
    printf("Move backward\n");
    motor (0,-50);
    motor (3,-50);
    msleep (5000);
    
    printf("Finished\n");
    return 0;
}
