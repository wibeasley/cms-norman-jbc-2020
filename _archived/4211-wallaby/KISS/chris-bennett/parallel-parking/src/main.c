#include <kipr/botball.h>

int main()
{
    printf("move backwards sp rs3 \n");
    motor(0,45);    
    motor(3,50);
    msleep(8000);
    printf("move forward");
    motor(0,-45);    
    motor(3,-50);
    msleep(2000);
    
    
    return 0;
}
