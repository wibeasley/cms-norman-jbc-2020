#include <kipr/botball.h>

int main()
{
    printf("Go forward\n");
    motor(0,30);//turns on motor 0 at 60% power
    motor(3,30);//turns on motor 3 at 60% power
    msleep(13500);
    printf("Go backward\n");
    motor(0,-30);//turns on motor 0 at 60% power
    motor(3,-30);//turns on motor 3 at 60% power
    msleep(13500);
   
    return 0;
}




    
    
    
    
    

