#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
   
    
     printf("forword\n");
    motor(0,21);
    motor(3,20);
    msleep(19000);
     
   printf("backword\n");
    motor(0,-40);
    motor(3,-40);
    msleep(20000);   
    return 0;
}
