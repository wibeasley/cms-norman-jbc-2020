#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    
    
   motor(0,100);
    motor(2,100);//go striaght
    msleep(1500);
   
    motor(0,100);
    motor(2,40);//turn 
    msleep(1500);
    
    motor(0,60);
    motor(2,100);//turn
    msleep(7500);
   
    motor(0,100);
    motor(2,100);//go forward
    msleep(1000);
   
   motor(0,100);
   motor(2,20);//turn 
   msleep(1000); 
    
   motor(2,100); 
   motor(3,100); 
   msleep(2000); 
   
    ao();
    return 0;
}









 
    
    

