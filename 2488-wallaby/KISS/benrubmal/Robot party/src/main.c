#include <kipr/botball.h>

int main()
{    
     printf("forword\n");
    motor(0,21);
    motor(3,20);
    msleep(22000);
     
printf("turn to face line b\n");
    motor(0,42);
    motor(3,-40);
    msleep(7000);   

    printf("turn to face line b\n");
    motor(0,42);
    motor(3,-40);
    msleep(7000);   
    
    printf("backword\n");
    motor(0,-41);
    motor(3,-41);
    msleep(20000);   
    return 0;
}
