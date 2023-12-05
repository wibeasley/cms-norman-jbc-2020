#include <kipr/botball.h>

int main()
{
    // Start at	K
    printf("Hadley's Precision Parking\n");
    
    printf("Move forward\n");
    motor (0,1200);
    motor (3,1300);
    msleep(2000);
    
    printf("move back\n");
    motor(0,-29);
    motor(3,-29);
    msleep(9000); 
    printf("i");
    motor(0,55);
    motor(3,55);
    msleep(5000);
    
    printf("turn right/n");
    motor(0,28);
    motor(3,50);
    msleep(4000);
    printf("j");
    motor(0,55);
    motor(3,55);
    msleep(2000);
           
    printf("Finish\n");
    return 0;
}