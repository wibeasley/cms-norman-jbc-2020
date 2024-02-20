#include <kipr/botball.h>

int main()
{
    printf("go forward\n");
    motor(3,50);
    motor(0,52);
    msleep(3300);
    ao();

    printf("go forward\n");
    motor(3,50);
    motor(0,52);
    msleep(1850);
    ao();
    
    printf("Stop\n");
    motor(3,50);
    motor(0,52);
    msleep(1000);
    ao();
    
    printf("go backward\n");
    motor(0,-52);
    motor(3,-50);
    msleep(1850);
    ao();
    
    //printf("turn right\n");
    //motor(3,50);
    //msleep(950);
    //ao();
        
    printf("17 by 3\n");
    printf("Hello World\n");
    return 0;
}
