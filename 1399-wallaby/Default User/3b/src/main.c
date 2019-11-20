#include <kipr/botball.h>

int main()
{
printf("going straight\n");
   
 motor(0,50);
 motor(2,50);   
 msleep(6000);   
    
printf("stopping\n");
motor(0,00);    
motor(2,00);    
msleep(2000);    
 
motor(0,-50);
motor(2,-50);    
msleep(2000);   
    
    
    
 ao();    
    
    
    return 0;
}
