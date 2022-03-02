#include <kipr/botball.h>

int main()
{
      printf("into green garage\n");
    motor(0,40);
    motor(3,38);
    msleep(7000);
    
 printf("pause in green garage\n");
    motor(0,0);
    motor(3,0);
    msleep(2000);   
    
    printf("out of green garage\n");
    motor(0,-40);
    motor(3,-38);
    msleep(7000);
    
  printf("forward to blue garage\n");
    motor(0,40);
    motor(3,38);
    msleep(10000);
    
printf("turn around\n");
    motor(0,0);
    motor(3,40);
    msleep(1500);   

   printf("into green garage\n");
    motor(0,40);
    motor(3,38);
    msleep(2500);
    return 0;
}
