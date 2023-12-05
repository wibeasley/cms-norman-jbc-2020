#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    enable_servos(3);
    enable_servos(0);
    set_servo_position(3, 1480);
    msleep(500);
    printf("foot\n");
    motor(3, 28);
    motor(0, 27);
    msleep(1500);
    printf("ooga booga\n");
    motor(3, 0);
    motor(0, 0);
    msleep(0);
    printf("ooga booga\n");
    set_servo_position(3, 974);
    msleep(500);
    printf("fdjg\n");
    set_servo_position(1, 330);
    msleep(500);
    
    
    
    return 0;
}
