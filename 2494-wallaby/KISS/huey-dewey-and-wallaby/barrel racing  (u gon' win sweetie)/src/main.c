#include <kipr/botball.h>

int main()
{
    printf("wallgoferward\n");  
    motor(0, 23);
    motor(3, 23);
    msleep(12600);
    
    printf("tuuuurrrrnnnnnn yerrrrrself clockwise");
    motor(0, 19);
    motor(3, 44);
    msleep(6300);
    
    
    
    return 0;  
}
