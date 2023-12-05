#include <kipr/botball.h>

int main()
{
    printf("Hadley's Ring around the Can\n");
    
    printf("dirve strait\n");
     motor(0,45);
     motor(3,34);
     msleep(6000);
    
    printf("turn right\n");
    motor(0,25); 
    motor(3,51);
    msleep(7000);
           
    printf("go home/n");    
     motor(0,45);                                                     
     motor(3,25);
     msleep(7000); 
        
    printf("Finish\n");
    return 0;    
}
