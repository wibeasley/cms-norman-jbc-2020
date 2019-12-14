#include <kipr/botball.h>

int move ( int speed_left, int speed_right, int duration ){
    motor(0,speed_left);
    motor(3,speed_right);
    msleep(duration);
    return 0;
}    


int main()
{
    printf("Hello World\n");                    //starting position -2 d
    printf("moves forward\n");
    move(50,50,4500);
    
    printf("turns right\n");
    move(0,50,1500);
    
    printf("moves forward\n");
    move(50,50,2500);
    
    printf("turns left\n");
    move(50,0,1500);
    
    printf("moves forward\n");
    move(50,50,1500);
    
    printf("turns left\n");
    move(50,0,1500);
    
    printf("moves forward\n");
    move(50,50,2500);
    
    printf("turns left\n");
    move(50,0,1500);
    
    printf("moves forward\n");
    move(50,50,1500);
    
    printf("turns left\n");
    move(50,0,1500);
    
    printf("moves forward\n");
    move(50,50,2500);
    
    printf("turns right\n");
    move(0,50,1500);
    
    printf("moves forward\n");
    move(50,50,1800);
    
    printf("turns right\n");
    move(0,50,1500);
    
    printf("moves forward\n");
    move(50,50,2500);
    
    printf("turns left\n");
    move(50,0,1500);
    
    printf("moves forward\n");
    move(50,50,2500);
    
    
    
    
    return 0;
}
