#include <kipr/botball.h>

int main()
{    
     printf("move forward");
    motor(0, 40);
    motor(3, 40);
    msleep(7000);
   
    printf("turn right");
    motor(0, 40);
    motor(3, 20);
    msleep(6000);
 return 0;
}
