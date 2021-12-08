#include <kipr/botball.h>

int main()
{
    printf("go straight\n");
    motor (0,45);
    motor (3,45);
    msleep(2500);
    
    printf("stay\n");
    motor (0,0);
    motor (3,0);
    msleep(500);
    
    printf("turn\n");
    motor (0,50);
    motor (3,5);
    msleep(5300);
    
    printf("stay\n");
    motor (0,0);
    motor (3,0);
    msleep(500);
    
    printf("go straight\n");
    motor (0,-55);
    motor (3,-55);
    msleep(2500);
    
    printf("stay\n");
    motor (0,0);
    motor (3,0);
    msleep(500);
    
    printf("go straight\n");
    motor (0,55);
    motor (3,55);
    msleep(5000);
    
    printf("stay\n");
    motor (0,0);
    motor (3,0);
    msleep(500);
 
    printf("turn\n");
    motor (0,5);
    motor (3,50);
    msleep(5000);
    
    printf("stay\n");
    motor (0,0);
    motor (3,0);
    msleep(500);
    
    
    printf("go straight\n");
    motor (0,55);
    motor (3,55);
    msleep(7000);
    
    printf("turn\n");
    motor (0,5);
    motor (3,50);
    msleep(2500);
    
    
    printf("turn\n");
    motor (0,0);
    motor (3,60);
    msleep(3400);
    
    printf("go straight\n");
    motor (0,-55);
    motor (3,-55);
    msleep(3000);
    
    printf("stay\n");
    motor (0,0);
    motor (3,0);
    msleep(900);
    
    printf("go straight\n");
    motor (0,55);
    motor (3,55);
    msleep(3000);
    
    printf("turn\n");
    motor (0,50);
    motor (3,5);
    msleep(2500);
    
    printf("go straight\n");
    motor (0,55);
    motor (3,55);
    msleep(7000);
    return 0;
}
