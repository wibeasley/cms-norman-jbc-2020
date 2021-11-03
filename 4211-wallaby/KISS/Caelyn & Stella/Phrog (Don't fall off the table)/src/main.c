#include <kipr/botball.h>

int main()
{
    printf("Phrog phrog phrog phrog phrog (My goal is not to fall off the table)\n");
    printf("Move forward.\n");
    motor(0, 40);
    motor(3, 4);
    msleep(5000);
    
    printf("Pause movement");
    motor(0, 0);
    motor(3, 0);
    msleep(5000);
    
    printf("Phrog Phrog Phrog Phrog (We have picked up our friend pencil, lets go back now)\n");
    printf("Move backwards\n");
    motor(0, -40);
    motor(3, -30);
    msleep(5000);
    return 0;
}
