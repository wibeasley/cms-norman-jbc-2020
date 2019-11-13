#include <kipr/botball.h>

int main()
{   printf("start position A 2");
    printf("move forewards");
    motor (0,50);
    motor (3,50);
    msleep(4000);
    
    printf("turn rigt");
    motor (0,30);
    motor (3,50);
    msleep(14000);
    return 0;
}
