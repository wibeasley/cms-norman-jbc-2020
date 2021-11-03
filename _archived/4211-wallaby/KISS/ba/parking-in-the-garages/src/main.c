#include <kipr/botball.h>

int main()
{
    printf("Move forward\n");
    motor (0,50);
    motor (3,50);
    msleep (6000);
    
    
    printf("Move backward\n");
    motor (0,-50);
    motor (3,-50);
    msleep (6000);
    
    
    
   printf("Move forward\n");
    motor (0,50);
    motor (3,50);
    msleep (7000); 
    
    printf("hhh");
    motor(3,33);
    motor(0,22);
    msleep(4200);
    
    printf("hh");
    motor(0,54);
    motor(3,54);
    msleep(1000);
    
    
    
    printf("Finished\n");
    return 0;
}
