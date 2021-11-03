#include <kipr/botball.h>

int move( int speed_left, int speed_right, int duration ){
    motor(0,speed_left);
    motor(3,speed_right);
    msleep(duration);
    
    return 0;
}

int main()
{
    printf("Hello World\n");
    printf("moves forward\n");
    move(50,50,2000);
    
    printf("turns right\n");
    move(0,50,2000);
    
    printf("moves forward\n");
    move(50,50,2000);
    
    printf("turns counterclockwise\n");
    move(50,-50,1500);
    
    printf("moves forward\n");
    move(50,50,2200);
    
    printf("turns right\n");
    move(0,50,2700);
        
    printf("moves forward\n");
    move(50,50,2500);
    
    printf("turns left\n");
    move(50,0,1500);
    
    printf("moves forward\n");
    move(50,50,1000);
    
   return 0;     
}
