#include <kipr/botball.h>
const float right_adjustment = 1.24;

int main()
{
    printf("From start line to green box\n");
    motor(0, 30);
    motor(3, 30 * right_adjustment);
    msleep(7000);
    
    printf("back to the starting line\n");
    motor(0, -30);
    motor(3, -30 * right_adjustment);
    msleep(7000);

    return 0;
}
