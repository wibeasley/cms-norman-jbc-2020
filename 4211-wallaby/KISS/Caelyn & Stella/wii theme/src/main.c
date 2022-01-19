#include <kipr/botball.h>

int main()
{
    // Shawnathon must start infront of the laptop
    // This is simply a test to test Shawnathon's driving skillz
    
    printf("This is the start of an amazing journey! Go Forward!\n");
    motor(0, 36);
    motor(3, 38);
    msleep(20000);
    
    printf("Turn left got it?\n");
    motor(0, 36);
    motor(3, 0);
    msleep(1000);
    
    printf("FORWARD MARCH\n");
    motor(0, 36);
    motor(3, 38);
    msleep(20000);
    
    printf("Turning left again.\n");
    motor(0, 36);
    motor(3, 0);
    msleep(3000);
        return 0;
}
