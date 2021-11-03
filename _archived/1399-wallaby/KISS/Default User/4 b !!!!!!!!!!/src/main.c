#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
   
 printf("go forward\n");
  motor(0,50);  
  motor(2,50);
  msleep(5300);  
    
  printf("tuning\n");
  motor(2,20); 
  motor(0,50); 
  msleep(10700); 
  
  printf("go straight \n");
  motor(0,50);  
  motor(2,50);
  msleep(2500);    
    
 printf("tuning\n");
  motor(2,50); 
  motor(0,20); 
  msleep(10599);    
 
    printf("going straight\n");
    motor(2,50); 
  motor(0,50); 
  msleep(2000);    
   
  printf("tuning\n");
  motor(2,20); 
  motor(0,50); 
  msleep(10599);      

    printf("going backwards\n");
  motor(0,-50);  
  motor(2,-50);
  msleep(6998);      
    ao();
    
   return 0;
}    
