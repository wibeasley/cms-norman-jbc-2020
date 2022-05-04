#include <kipr/botball.h>

int main()
{
    printf("open the CLAW...\n");
    enable_servos(3);
    enable_servos(1);
    set_servo_position(3, 1430);
    msleep(500);
    printf(" go forward ");
    motor(0, 30);
    motor(3, 30);
    msleep(500);
    printf("claw go up");
    set_servo_position(1, 879);
    msleep(500);
    printf("close the CLAW...");
    set_servo_position(3, 832);
    msleep(500);
    printf("lift up the CLAW!");
    set_servo_position(1, 568);
    msleep(500);
    
    return 0;
}
