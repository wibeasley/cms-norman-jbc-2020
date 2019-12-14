#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    printf("moves motors forward\n");               //postion -1 j
    motor(0,68);
    motor(3,60);
    msleep(4345);
    
    printf("reverse motor\n");
    motor(0,-68);
    motor(3,-60);
    msleep(4456);
    
    
    
    
    
    
    
    return 0;
}
