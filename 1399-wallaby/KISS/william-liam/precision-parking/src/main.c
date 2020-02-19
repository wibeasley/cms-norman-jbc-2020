#include <kipr/botball.h>

int main()
{
    printf("go straight\n");//start position i3
    motor (0,50);
    motor (3,50);
    msleep(5800);
    motor (0,0);
    motor (3,0);
    msleep(500);
    motor (0,-50);
    motor (3,-50);
    msleep(5800);
    motor (0,0);
    motor (3,0);
    msleep(500);
    motor (0,50);
    motor (3,50);
    msleep(7800);
    motor (0,5);
    motor (3,40);
    msleep(1200);
    motor (0,50);
    motor (3,50);
    msleep(24000);
    motor (0,0);
    motor (3,0);
    msleep(500);
    motor (0,-50);
    motor (3,-50);
    msleep(2000);
    motor (3,40);
    msleep(4800);
    motor (0,50);
    motor (3,50);
    msleep(8000);
    return 0;
}
 