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
    printf("moves forward\n");           //starting position -1 e
    move(50,50,7000);
    
    printf("moves clockwise\n");
    move(-50,50,700);
    
    printf("moves forward\n");
    move(50,50,2000);
    
    printf("moves clockwise\n");
    move(-50,50,700);
    
    printf("moves forward\n");
    move(50,50,9000);
    
    
    
    
    return 0;
}
