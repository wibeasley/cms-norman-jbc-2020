#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    
    printf(" straight to line A\n");
    motor(0, 40);
    motor(3, 40);
    msleep(4000); 
    
    printf(" pause on line A\n ");
    motor(0, 0);
    motor(3, 0);
    msleep(2000);
   
    
    printf(" pivot left\n");
    motor(0, -20);
    motor(3,  20);
    msleep(3000);  
    
   printf(" straight to line A\n");
    motor(0, 40);
    motor(3, 40);
    msleep(3000); 
  
 printf(" pivot left\n");
    motor(0, -20);
    motor(3,  20);
    msleep(3000);
 printf("pivot right\n");
    motor(0,-20);
    motor(3,20);
    msleep(3000);
    
    printf("move forward"0
    
    
    return 0;
}
  