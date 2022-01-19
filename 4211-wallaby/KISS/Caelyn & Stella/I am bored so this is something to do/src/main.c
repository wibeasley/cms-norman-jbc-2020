#include <kipr/botball.h>

//Just take note that I was having a bad day
int main()
{
    printf("Wallaby Start!\n");
    motor(0, 30);
    motor(3, 30);
    msleep(10000);
    
    printf("Their a runner their a trackstar\n");
    motor(0, 40);
    motor(3, 0);
    msleep(15000);
    
    printf("Ohno! Our Table its brockennnnnnnnnnnnnnnn\n");
    motor(0, 40);
    motor(3, 40);
    msleep(10000);
    return 0;
}
