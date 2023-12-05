#include <kipr/botball.h>

int main()
{
    printf("go forward\n"); 
    motor(0,40);
    motor(3,40);
    msleep(7000);
    
    printf("go backward\n");
    
    motor(0,-40);
    motor(3,-40);
    msleep(7000);
    
    
    return 0;
}
//start postion 4 10