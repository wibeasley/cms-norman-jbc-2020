#include <kipr/botball.h>

int main()
{
    

    printf("forword\n");
    motor(0,31);
    motor(3,30);
    msleep(15000);
     
printf("turn around\n");
    motor(0,42);
    motor(3,-40);
    msleep(7250);   

    printf("turn around\n");
    motor(0,-42);
    motor(3,40);
    msleep(7250);   
    
    printf("backword\n");
    motor(0,-41);
    motor(3,-41);
    msleep(9000);   
    return 0;
}
