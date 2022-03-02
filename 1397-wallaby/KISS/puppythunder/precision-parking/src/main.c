#include <kipr/botball.h>
const float right_adjustment = 1.24;

int main()
{
    printf("From start line to green box\n");
    motor(0, 30);
    motor(3, 30 * right_adjustment);
    msleep(7500);
    
    printf("pause\n");
    motor(0, 0);
    motor(3, 0 * right_adjustment);
    msleep(2000);
    
    printf("back to the starting line\n");
    motor(0, -30);
    motor(3, -30 * right_adjustment);
    msleep(7500);

    printf("go to 9 \n");
    motor(0, 30);
    motor(3, 30 * right_adjustment);
    msleep(11000);
    
    printf("pivot right to blue box\n");
    motor(0, 30);
    motor(3, 0 * right_adjustment);
    msleep(2000);

    return 0;  //This should be the final line of the fx.
}
