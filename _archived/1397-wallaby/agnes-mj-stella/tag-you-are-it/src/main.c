#include <kipr/botball.h>

int main()
{
    printf("go forward\n");
    motor(0, 40);
    motor(3, 40);
    msleep(5000);
    
    
    printf("go backward #1\n");
    motor(0, -40);
    motor(3, -40);
    msleep(5000);
    

    printf("go backward #2\n");
    motor(0,40);
    motor(3,39);
    msleep(0000);
    return 0;
} 
