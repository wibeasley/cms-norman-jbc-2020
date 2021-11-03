#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    
    printf("moves motor 1\n");
    motor(0,50);
    motor(3,50);
    msleep(1500);
    
    printf("turns motors 1\n");
    motor(0,00);
    motor(3,50);
    msleep(1500);    
        
    printf("moves motors 2\n");
    motor(0,50);       
    motor(3,50);       
    msleep(3000);       
           
    printf("turns motors 2\n");
    motor(0,50);
    motor(3,00);       
    msleep(4000);      
        
    printf("moves motors3\n");    
    motor(0,50);    
    motor(3,50);    
    msleep(2000);    
    
    printf("turns motors3\n");    
    motor(0,00);    
    motor(3,50);    
    msleep(1000);    
        
    printf("moves motors4\n");    
    motor(0,50);    
    motor(3,50);
    msleep(1000);
    
    printf("turns motors4\n");
    motor(0,00);
    motor(3,50);
    msleep(2000);
    
    printf("moves motors5\n"); //so hyped to finish 10/18/17
    motor(0,50);
    motor(3,50);
    msleep(2500);
    
    
    
    
    
    
    
    
    return 0;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}
