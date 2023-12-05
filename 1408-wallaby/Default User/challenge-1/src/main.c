#include <kipr/botball.h>

int main()
{

    enable_servos(0);
    enable_servos(1);
    set_servo_position(0,1572);

    motor(0,50);
    motor(3,50);
    msleep(6000);

    motor(0,-50);
    motor(3,-50); 
    msleep(6300);
    ao();
    printf("Hello World\n");
    return 0;
}
