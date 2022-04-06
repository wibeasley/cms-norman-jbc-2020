#include <kipr/botball.h>

int main()
{
    printf("spin\n");
    motor(0,40);
    motor(3,-40);
    msleep(4000);
    
    printf("forword\n");
    motor(0,40);
    motor(3,40);
    msleep(2000);
    
    printf("turn left\n");
    motor(0,0);
    motor(3,40);
    msleep(4000);
    
    printf("spin 2\n");
    motor(0,-40);
    motor(3,40);
    msleep(4000);
    
    printf("backward\n");
    motor(0,-40);
    motor(3,-40);
    msleep(2000);
    
    printf("turn right\n");
    motor(0,40);
    motor(3,0);
    msleep(2000);
    
    printf("slide\n");
    motor(0,-20);
    motor(3,-20);
    msleep(2000);
    
    printf("slide 2\n");
    motor(0,20);
    motor(3,20);
    msleep(2000);
    
    printf("disco spin\n");
    motor(0,40);
    motor(3,-40);
    msleep(2000);
    
    printf("disco spin 2\n");
    motor(0,-40);
    motor(3,40);
    msleep(2000);
    
    printf("1\n");
    motor(0,40);
    motor(3,40);
    msleep(4000);
    
    printf("123456789\n");
    motor(0,-40);
    motor(3,-40);
    msleep(4000);
    
    printf("pivot right\n");
    motor(0,40);
    motor(3,-40);
    msleep(5000);
    return 0;
}
