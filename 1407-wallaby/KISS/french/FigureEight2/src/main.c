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
    move("Turn left",30, 0, 2.5);
    move("Move forward", 30, 30, 4);
    move("Turn right",0, 30, 2.5);
    move("Move foward",30, 30, 3);
    move("Turn right",0, 30, 2.2);
    

    return 0;
}
