#include <kipr/botball.h>

int main()
{   printf("start position A 2");
    printf("move forewards");
    motor (0,50);
    motor (3,50);
    msleep(5000);
    
    printf("turn rigt");
    motor (0,30);
    motor (3,50);
    msleep(22000);
 
 printf("turn left");
 motor(0,40);
 motor(3,-10);
 msleep(2000);
printf("move forewards");
    motor (0,50);
    motor (3,50);
    msleep(5000);
 return 0;
}
