#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
   
    
    
   motor(2,50);
  motor(0,50);//go forword 
  msleep(8000);  
  
 
    
  motor(0,30);
 motor(2,50); //turn right 
 msleep(4000);   
    
 motor(2,50);
 motor(0,50);//go forword
 msleep(4000);
 
    motor(0,00);
 motor(2,50); //turn right 
 msleep(2000);   
 
     
   motor(2,50);
  motor(0,50);//go forword 
  msleep(10000);  
  
 
    
    
    
    
    
    ao(); 
      
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
