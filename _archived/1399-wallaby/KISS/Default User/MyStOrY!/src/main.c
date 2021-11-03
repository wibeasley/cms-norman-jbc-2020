#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
   
    motor(2,50);
    motor(0,50);
    msleep(6500);
    
    motor(2,33);
    motor(0,60);
    msleep(9500);
    
    motor(2,-50);
    motor(0,-50);
    msleep(800);      
    
    
    motor(2,-50);
   motor(0,-30);    
   msleep(3500); 
    
     motor(2,-50);
    motor(0,-50);
    msleep(1000); 
 
    motor(2,-50);
   motor(0,-30);    
   msleep(4000); 
    
     motor(2,-50);
    motor(0,-50);
    msleep(1000); 
    
    motor(2,-50);
   motor(0,-30);    
   msleep(4000); 
    
     motor(2,-50);
    motor(0,-50);
    msleep(1800);
    
     motor(2,50);
    motor(0,50);
    msleep(4000);
    return 0;
}
