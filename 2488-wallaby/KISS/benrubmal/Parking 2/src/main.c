#include <kipr/botball.h>

int main()
{
     printf("forword to line a\n");
    motor(0,40);
    motor(3,38);
    msleep(6500);

    printf("pause on line a\n");
    motor(0,0);
    motor(3,0);
    msleep(2000);   
    return 0;
}
