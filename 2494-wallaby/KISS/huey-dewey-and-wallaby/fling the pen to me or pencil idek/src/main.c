#include <kipr/botball.h>

int main()
{
    printf("move towards the pen\n");
    motor(0, 38);
    motor(3, 35);
    msleep(1000);
    
    printf("stop\n");
    motor(0, 0);
    motor(3, 0);
    msleep(0);
    printf("move the claw down\n");
    enable_servos(1);
    enable_servos(3);
    set_servo_position(1, 1407);
    msleep(700);
    printf("wind the claw back\n");
    set_servo_position(3, 1548);
    msleep(700);
    printf("FLINGGGGG\n");
    set_servo_position(3, 667);
    msleep(100);
    return 0;
}
