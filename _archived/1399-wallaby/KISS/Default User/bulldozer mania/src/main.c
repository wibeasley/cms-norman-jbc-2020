#include <kipr/botball.h>

int main()
{
   
  motor(2,50);
  motor(0,50);//go forword 
  msleep(8000);  
  

    
  motor(0,0);
 motor(2,50); //turn right 
 msleep(4000);   
 
 motor(2,50);
 motor(0,50);//go forword
 msleep(5000);    
    
motor(0,50);
 motor(2,-20); //turn right 
 msleep(500);       
    
 motor(2,50);
 motor(0,50);//go forword
 msleep(6000);
  
  ao();  
    
    
    
    
    
     printf("Hello World\n"); 
    
 return 0;
}
