#include <kipr/botball.h>

int main()
{
    printf("Hello Mars");
    
    printf("Straight ahead");
    motor(0,85);
    motor(3,85);
    msleep(4000);
    
    printf("Move the right wheel forward to turn left");
    motor(3,30);
    msleep(3000);
    return 0;
}
