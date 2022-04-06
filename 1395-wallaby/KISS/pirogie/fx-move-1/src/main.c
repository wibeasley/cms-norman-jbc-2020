#include <kipr/botball.h>


void move(char message[], double power_left, double power_right, double seconds) {
    printf("%s\n", message);
    motor(0, power_left);
    motor(3, power_right);
    msleep(seconds*1000);
	return;
}


int main()
{
    move("turn left", 1, 30, 2);
    move("turn right", 30, 15, 2);
    move("move forward", 30, 30, 3.5);
    move("spin", 30, 0, 5);
    
    return 0;
}
