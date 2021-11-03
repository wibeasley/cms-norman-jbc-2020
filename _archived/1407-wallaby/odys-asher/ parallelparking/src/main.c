#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    printf("moves motors forward");
    motor(0,40);
    motor(3,40);
    msleep(5500);
    printf("moves motors backwards");
    motor(0,-40);
    motor(3,-40);
    msleep(4500);
    printf("moves motors forward");
    motor(0,40);
    motor(3,40);
    msleep(2000);
    printf("moves motors right");
    
    
    
    
    return 0;
}
