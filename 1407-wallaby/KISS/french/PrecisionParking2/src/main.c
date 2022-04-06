#include <kipr/botball.h>

void move(char message[], double power_left, double power_right, double seconds){
    printf("%s\n", message);
    motor(0, power_left);
    motor(3, power_right);
    msleep(seconds*1000);

    return;
}
int main()
{
    move("Move forward", 30, 30, 7);
    move("Pause movement", 0, 0, 1);
    move("Move backward", -30, -30, 6);
    move("Pause movement", 0, 0, 1);
    move("Move forward", 30, 30, 10);
    move("Turn right", 0, 30, 1.25);
    move("Move forward", 30, 30, 1.5);
    move("Pause movement", 0, 0, .5);
    return 0;
}
