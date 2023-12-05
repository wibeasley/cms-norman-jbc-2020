#include <kipr/botball.h>

int main()
{
    printf("go forward\n");
motor(0,40);    
motor(3,40);    
msleep(5000);    
    printf("turn left\n");
    motor(0,50);
    motor(3,40);
    msleep(4000);
printf("turn right\n");    
    motor(0,50);
    motor(3,90);
    msleep(7000);
    printf("go forward\n");       
  motor(0,40);  
    motor(3,40);
    msleep(1000);
    printf("turn right\n");
    motor(0,40);
    motor(3,70);
    msleep(6000);
    printf("go straight\n");
    motor(0,40); 
    motor(3,40);
    msleep(3000);
    
    
    
    
    return 0;
}
