#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");//step 1 caster location k -8
    motor(0, 85);
    motor(3, 90);
    msleep(5500);
    
    motor(0, -85);
    motor(3, -90);
    msleep(5500); 
}
