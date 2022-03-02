#include <kipr/botball.h>

const float right_adjust = 1.01; // Increase power to right wheel by 10%

int main()
{
    printf("Precision Parking task --start left wheel on I4.\n");
    
    printf("Move forward\n");
    motor(0, 30); 
    motor(3, 30 * right_adjust);
    msleep(7000);
    
    printf("Pause movement\n");
    motor(0, 0);
    motor(3, 0 * right_adjust);
    msleep(1000);
    
    printf("Move backward\n");
    motor(0,-30);
    motor(3,-30 * right_adjust);
    msleep(6000);
    
    printf("Pause movement\n");
    motor(0, 0);
    motor(3, 0 * right_adjust);
    msleep(1000);
    
    printf("Move forward\n");
    motor(0, 30);
    motor(3, 30  * right_adjust);
    msleep(10000);
    
    printf("Turn right\n");
    motor(0, 0);
    motor(3, 30 * right_adjust);
    msleep(1250);
    
    printf("Move forward\n");
    motor(0, 30);
    motor(3, 30 * right_adjust);
    msleep(1500);
    
    printf("Pause movement\n");
    motor(0, 0);
    motor(3, 0 * right_adjust);
    msleep(500);
    
    return 0;
}
