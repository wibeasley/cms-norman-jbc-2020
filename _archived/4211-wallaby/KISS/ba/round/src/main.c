#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    motor(0,55);
    motor(3,0);
    msleep(2000); 
    
    printf("Hello World\n");
    motor(3,55);
    motor(0,55);
    msleep(2000); 
    printf("Hello World\n");
    motor(0,0);
    motor(3,55);
    msleep(2000);
    
     printf("Hello World\n");
    motor(3,55);
    motor(0,55);
    msleep(7000);
    
    
    printf("Hello World\n");
    motor(0,44);
    motor(3,55);
    msleep(19000);
    
    printf("Hello World\n");
    motor(0,55);
    motor(3,55);
    msleep(7500);
    
    
    printf("Hello World\n");
    motor(0,0);
    motor(3,55);
    msleep(2000);
    
    printf("Hello World\n");
    motor(0,55);
    motor(3,55);
    msleep(4000);
    
    
    
    
    return 0;
}
