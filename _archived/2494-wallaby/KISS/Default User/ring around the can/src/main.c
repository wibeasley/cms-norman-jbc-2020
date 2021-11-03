#include <kipr/botball.h>

int main()
{
    
    printf("Hello World\n");
    
    printf("go staight\n");
    motor(0,40);
    motor(3,40);
    msleep(9000);
   
    printf("go right\n");
    motor(0,0);
    motor(3,40);
    msleep(3000);
    
    printf("go staight\n");
    motor(3,40);
    motor(0,40);
    msleep(2000);
    
    printf("go right\n");
    motor(0,0);
    motor(3,40);
    msleep(2000);
    
    printf("go staight\n");
    motor(0,40);
    motor(3,40);
    msleep(9000);
    
    return 0;
    
}
