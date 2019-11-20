#include <kipr/botball.h>

int move( int speed_left, int speed_right, int duration ) {
    motor(0,speed_left);
    motor(3,speed_right);
    msleep(duration); 
    return 0;
}

int main() {
    move(50,50,2500); // forword
    move(50,20,2250); // turn left
    move(50,50,3500);// forword
    
    move(-30,30,1000); //pivot right
    move(50,50,2000); // forword
    move(-30,30,500); //pivot right
    
    move(50,50,1000); // forword
    move(-30,30,700); //pivot right 
    move(50,50,1500); //forword
    
    move(-30,30,1000); //pivot right
    move(50,50,2500); //forword
    move(30,-30,1000); //pivot left
    move(50,50,5000); //forword
    
    return 0;
}
