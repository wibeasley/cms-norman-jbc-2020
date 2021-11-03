#include <kipr/botball.h>

int main()
{

    
   printf("go forward");  
   motor(0,45);  
   motor(3,67);  
   msleep(3000);  
    
   printf("go forward"); 
   motor(0,67);
           
   motor(3,45);
   msleep(5000);
    
    printf("go forward\n");//step 1
    motor(0,-67);
    motor(3,-45);   
    msleep(3000);                                
        
    printf("go forward\n");//step 2        
    motor(0,-67);   
    motor(3,-45);                  
    msleep(4000);
  
        
   return 0;
        
                                              
}         
        
     
         
