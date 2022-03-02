#include <kipr/botball.h>

int main()
{    
     printf("forword\n");
    motor(0,21);
    motor(3,20);
    msleep(22000);
     
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
    msleep(200000);   
    return 0;
}
