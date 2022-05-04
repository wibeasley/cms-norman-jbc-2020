#include <kipr/botball.h>

int main()
{
    //WEHERE KIS S ZTAETR POSDITJION (WHERE IS START POSITION) RIGHTE WEHLLE ON M (RIGHT WHEEL ON M)
    //ISNOT BREK LAW TO DRIVE OvER GArags (We can drive over garages)
    //Go gren blu yello (Go in the order of Green, Blue, and then Yellow)
    //Put block labeled one on circle one.
    //Put block labeled two on circle eight.
    //Put block labeled three on circle nine.
    //One = Green, Two = Blue, Three = Yellow
    
    printf("Go ForWARD MorTAL (Go forward please)\n");
    motor(0, 35);
    motor(3, 35);
    msleep(6000);
    
    
    return 0;
}
