#include <kipr/botball.h>

int main()
{
    printf("going straight\n");
    
    
 motor(0,50);   
 motor(2,50);   
 msleep(4900);   
    
printf("turning\n");
     
 motor(0,20);
 motor(2,50);   
 msleep(1500);   

motor(2,50);    
motor(0,50);
msleep(2000);
    
motor(0,-48);
motor(2,-50);    
msleep(2000);   
     ao();
    
    
    
    return 0;
}
