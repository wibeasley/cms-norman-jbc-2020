#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");

      printf("forword\n");
    motor(0,42);
    motor(3,40);
    msleep(5000);   

      printf("pause\n");
    motor(0,0);
    motor(3,0);
    msleep(2000);      
   
     printf("forword\n");
    motor(0,42);
    motor(3,40);
    msleep(7580);   

printf("turn\n");
    motor(0,42);
    motor(3,-40);
    msleep(7000);   
    
    return 0;
}
