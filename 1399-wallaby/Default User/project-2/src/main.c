#include <kipr/botball.h>

int main()
{
    printf("Move straight forward.");
    motor (0,50);//motor 0 at 50%
    motor (2,50);//motor 3 at 50%
    msleep(5000);//motor 0 and 3 running 5 sec
    motor (0,50);//motor 0 running 50%   
    motor (2,20);//motor 3 running 20%    
    printf("Move straight forward.");
    msleep(6000);//motor 0 running 6 sec
    motor(0,50);//motor 0 running 50%
    motor(2,50);//motor 3 running 50%
    msleep(6000);//motor 0 and 3 running 5 sec
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
