#include <kipr/botball.h>

int main()
{
    printf("green light\n");
    motor(0,40);
    motor(3,40);
    msleep(3500);
    
    printf("red light\n");
    motor(0,0);
    motor(3,0);
    msleep(2000);
    
     printf("green light\n");
    motor(0,40);
    motor(3,42);
    msleep(6000);
    
    printf("yellow light\n");
    motor(0,0);
    motor(3,30);
    msleep(3000);
  
    printf("green light\n");
    motor(0,40);
    motor(3,40);
    msleep(1500);
    
    printf("redlight\n");
    motor(0,0);
    motor(3,0);
    msleep(2000);
    
    printf("green light\n");
    motor(0,40);
    motor(3,40);
    msleep(1500);
    
    printf("yellow light\n");
    motor(0,0);
    motor(3,30);
    msleep(3000);
    
    printf("green light\n");
    motor(0,40);
    motor(3,40);
    msleep(5800);
    
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
    msleep(2500);
    
    printf("victory dance\n");
    motor(0,40);
    motor(3,-40);
    msleep(2000);
    
    printf("victory dance\n");
    motor(0,-40);
    motor(3,-40);
    msleep(200);
    
    printf("victory dance\n");
    motor(0,40);
    motor(3,40);
    msleep(900);
    return 0;
}



