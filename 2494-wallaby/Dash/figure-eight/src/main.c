#include <kipr/botball.h>

int main()
{
    printf("go stright\n");
    motor(3,40);
    motor(0,40);
    msleep(6000);

    printf("turn right\n");
    motor(0,40);
    motor(3,0);
    msleep(2000);

    printf("\n go stright");
    motor(3,40);
    motor(0,40);
    msleep(4000);
    
    printf("turn right\n");
    motor(0,0);
    motor(3,40);
    msleep(3000);
    
    printf("go stright\n");
    motor(0,40);
    motor(3,40);
    msleep(2523);
           
           
           
       
    
    return 0;
}
