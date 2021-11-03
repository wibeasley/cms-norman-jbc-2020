#include <kipr/botball.h>

int main()
{
    // Sensor value grows larger as you get closer to the can.
    printf("go forward\n");
    
    while (analog(5) <= 2700) {
     	motor(0, 30);
     	motor(3, 30);   
        msleep(100);
    }
    
    return 0;
}
