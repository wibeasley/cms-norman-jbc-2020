#include <kipr/botball.h>

int main()
{
   
    
    printf("go straight\n");//start position 03
    motor (0,50);
    motor (3,50);
    msleep(8000);
    motor (0,50);
    motor (3,5);
    msleep(1900);
    motor (0,50);
    motor (3,50);
    msleep(2000);
    motor (0,50);
    motor (3,5);
    msleep(4000);
    motor (3,50);
    motor (3,50);
    msleep(8800);  
    return 0;
}