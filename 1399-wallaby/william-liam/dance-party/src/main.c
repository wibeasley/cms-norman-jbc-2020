#include <kipr/botball.h>

int main()
{
    printf("go straight\n");
    motor (0,45);
    motor (3,45);
    msleep(5000);
    
    printf("turn\n");
    motor (0,55);
    motor (3,0);
    msleep(10000);
    
    printf("turn\n");
    motor (0,0);
    motor (3,55);
    msleep(10000);
    
    printf("go straight\n");
    motor (0,-45);
    motor (3,-45);
    msleep(8000);
    
    return 0;
}
