#include <kipr/botball.h>

int main()
{
    printf("Letssss GGGGGGOOOOOOOOOOOOOPHROGGGGGGGGGGGG\n");
    motor(0, 30);
    motor(3, 35);
    msleep(10000);
    
    
    motor(3, 5);
    msleep(4500);
    
    motor(0, 10);
    motor(3, 10);
    msleep(4000);
    
    printf("GO FORWARD\n");
    motor(3, 15);
    msleep(3500);
    
    printf("Turn left\n");
    motor(0, 15);
    motor(3, 0);
    msleep(4000);
    
    printf("GO FORWARD TO THE FINISH LINE!!!WHOOOOOOOO\n");
    motor(0, 30);
    motor(3, 30);
    msleep(11000);
    return 0;
}
