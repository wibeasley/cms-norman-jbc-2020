#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    printf("enables motor\n");
    motor(3,40);
    printf("enables motor 0\n");
    motor(0,40);
    printf("moves motors forward\n");
    msleep(4000);
    printf("moves motors backwards\n");
    motor(3,-40);
    motor(0,-40);
    msleep(4000);
    
    
    
    return 0;
}
