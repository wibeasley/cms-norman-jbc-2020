#include <kipr/botball.h>

int main()
{
    motor(0, 35);
    motor(3, 36);
    msleep(5000);
    
    motor(0, 70);
    motor(3, 0);
    msleep(10000);
    
    motor(0, 30);
    motor(3, 31);
    msleep(3000);
    
    motor(0, 0);
    motor(3, 70);
    msleep(10000);
    
    motor(0, 40);
    motor(3, 41);
    msleep(900);
    
    motor(0, -40);
    motor(3, -41);
    msleep(900);
    
    motor(0, 40);
    motor(3, 41);
    msleep(900);

    motor(0, -40);
    motor(3, -41);
    msleep(900);
    
    motor(0, 40);
    motor(3, 41);
    msleep(900);
    
    motor(0, -40);
    motor(3, -41);
    msleep(900);
    return 0;
}
