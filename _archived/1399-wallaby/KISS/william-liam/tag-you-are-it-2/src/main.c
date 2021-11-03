#include <kipr/botball.h>

int main()
{
    printf("go straight 1\n");
    motor (0,45);
    motor (0,45);
    msleep(4000);
    
    printf("stay 2\n");
    motor (0,0);
    motor (3,0);
    msleep(500);
    
    printf("go backwards 3\n");
    motor (0,-45);
    motor (0,-45);
    msleep(5000);
    return 0;
}
