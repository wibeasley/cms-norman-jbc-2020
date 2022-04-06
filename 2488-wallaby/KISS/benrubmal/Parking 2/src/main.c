#include <kipr/botball.h>

int main()
{
     printf("forword to green garage\n");
    motor(0,40);
    motor(3,38);
    msleep(6500);

    printf("pause in green garage\n");
    motor(0,0);
    motor(3,0);
    msleep(2000);   

 printf("out of green garage\n");
    motor(0,-40);
    motor(3,-38);
    msleep(6500);    
    return 0;
}
