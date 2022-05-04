#include <kipr/botball.h>

int main()
{
    printf("open THE CLAW...\n");
    enable_servos(3);
    enable_servos(1);
    set_servo_position(3, 1255);
    msleep(500);
    printf("destory ms keishas cup o coffee\n");
    set_servo_position(1, 1253);
    msleep(500);
    printf("snatch ms keishas cup o coffee\n");
    set_servo_position(3, 1030);
    msleep(500);
    printf("bring ms keishas cup o coffee to the heavens\n");
    msleep(500);
    set_servo_position(1, 545);
    return 0;
}
