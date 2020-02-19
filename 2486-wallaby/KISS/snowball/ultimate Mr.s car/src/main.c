#include <kipr/botball.h>

int main()
{
    printf("go forward\n");
    motor(0, 49);
    motor(3, 48);
    msleep(8000);
    
    return 0;
}
