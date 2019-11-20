#include <kipr/botball.h>

int main()
{
    printf("go forward\n");
    motor(3,40);
    motor(0,40);
    msleep(6000);
    printf("turn left\n");
    motor(3,20);
    motor(0,40);
    msleep(10000);
    
printf("go forward\n");   
 motor(3,20);
motor(3,20);       
msleep(5000);       

   
  
    return 0;
}
