#include <kipr/botball.h>

int move ( int speed_left, int speed_right, int duration ){
   motor(0,speed_left);
   motor(3,speed_right); 
   msleep(duration);

    return 0;
}


int main()
{
    printf("Hello World\n");
    printf("activates claws\n");
    enable_servos(0,3);
    set_servo_position(0,1625);
    set_servo_position(3,575);
    msleep(2500);
    ao();
    
    printf("turns left\n");
    move(-50,50,2500);
    ao();
    printf("moves forward\n");         // servo 0 1625
    move(30,30,2200);
    ao();
    printf("closes claw\n");
    set_servo_position(3,0);
    msleep(2500);
    ao();
    printf("lifts up claw\n");
    set_servo_position(0,554);
    msleep(2500);
    ao();
    printf("turns right\n");
    move(-50,50,700);
    printf("moves forward\n");
    move(50,50,3000);
    printf("turns right a little bit\n");
    move(-50,50,300);
    printf("moves forward\n");
    move(50,50,5000);
    printf("turns left\n");
    move(50,-50,900);
    printf("moves forward\n");
    move(50,50,3000);
    printf("turns left\n");
    move(50,-50,700);
    ao();
    printf("drops cubes in square\n");
    set_servo_position(0,1627);
    msleep(2500);
    ao();
    //set_servo_position(3,565);
    //msleep(2500);
    //ao();
    
    return 0;
}
