#include <kipr/botball.h>

int main()
{
    printf("go straight\n");
    motor (3,50);
    motor (0,50);
    msleep(4900);
    motor (3,-50);
    motor (0,-50);
    msleep(4900);       
    return 0;
}
