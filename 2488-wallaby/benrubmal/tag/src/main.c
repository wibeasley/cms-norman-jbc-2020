#include <kipr/botball.h>

int main()
{
    printf("forword\n");
    motor(0,40);
    motor(3,40);
    msleep(10000);
  
  
    printf("backword\n");
    motor(0,-40);
    motor(3,-40);
    msleep(10000);
  
  printf("forword\n");
    motor(0,40);
    motor(3,-40);
    msleep(20000);

  printf("forword\n");
    motor(0,-40);
    motor(3,40);
    msleep(20000); 
    
    printf("forword\n");
    motor(0,40);
    motor(3,40);
    msleep(10000);

  printf("backword\n");
    motor(0,-40);
    motor(3,-40);
    msleep(10000);

    printf("forword\n");
    motor(0,40);
    motor(3,-40);
    msleep(20000);
 
     printf("forword\n");
    motor(0,40);
    motor(3,-40);
    msleep(20000);
    
    
  printf("forword\n");
    motor(0,40);
    motor(3,40);
    msleep(10000);
  
 printf("backword\n");
    motor(0,-40);
    motor(3,-40);
    msleep(10000);

  printf("forword\n");
    motor(0,40);
    motor(3,-40);
    msleep(20000); 
 
printf("forword\n");
    motor(0,-40);
    motor(3,40);
    msleep(20000);     
    return 0;
}
