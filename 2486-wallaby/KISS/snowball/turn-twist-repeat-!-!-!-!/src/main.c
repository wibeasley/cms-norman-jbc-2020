#include <kipr/botball.h>

int main()
{
    printf("go forward\n");
    motor(0, 45);
    motor(3, 0);
    msleep(60000);
        
    return 0;
}
