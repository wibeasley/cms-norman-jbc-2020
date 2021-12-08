#include <kipr/botball.h>

int main()
{
    printf("green light\n");
    motor(0,40);
    motor(3,40);
    msleep(3000);
    
    printf("red light\n");
    motor(0,0);
    motor(3,0);
    msleep(2000);
    
     printf("green light\n");
    motor(0,40);
    motor(3,40);
    msleep(6000);
    
    printf("yellow light\n");
    motor(0,30);
    motor(3,0);
    msleep(2900);
  
    printf("green light\n");
    motor(0,40);
    motor(3,40);
    msleep(1000);
    
    printf("redlight\n");
    motor(0,0);
    motor(3,0);
    msleep(2000);
    
    printf("green light\n");
    motor(0,40);
    motor(3,40);
    msleep(1000);
    
    printf("yellow light\n");
    motor(0,30);
    motor(3,0);
    msleep(2800);
    
    printf("green light\n");
    motor(0,40);
    motor(3,40);
    msleep(4500);
    
    printf("red light\n");
    motor(0,0);
    motor(3,0);
    msleep(2000);
    
    printf("green light\n");
    motor(0,40);
    motor(3,40);
    msleep(3000);
    
    printf("red light\n");
    motor(0,0);
    motor(3,0);
    msleep(2000);
    
    printf("green light\n");
    motor(0,40);
    motor(3,40);
    msleep(2900);
    
    printf("victory dance\n");
    motor(0,40);
    motor(3,-40);
    msleep(2000);
    
    printf("victory dance\n");
    motor(0,-40);
    motor(3,-40);
    msleep(500);
    
    printf("victory dance\n");
    motor(0,40);
    motor(3,40);
    msleep(500);
    return 0;
}



