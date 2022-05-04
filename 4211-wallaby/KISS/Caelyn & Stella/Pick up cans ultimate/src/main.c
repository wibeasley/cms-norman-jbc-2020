#include <kipr/botball.h>

double motor_boost_right = 1.05;

int main()
{
    //Place a Bubly can on circle 1, then place a Coke can on circle 9
    //The coke can needs to go to the green garage, the bubly needs to go to the yellow garage
    //You can go through garages
    //This involves servos
    //For it to count you must reenter through the front of the garage
    //Right wheel on o
    
    enable_servos();
        
    motor(0, 35);
    motor(3, 35 * motor_boost_right);
    msleep(9000);
    
    set_servo_position(0, 1455);
    set_servo_position(3, 1383);
    
    set_servo_position(3, 965);
    msleep(500);
    
    motor(0, 35);
    motor(3, 35 * motor_boost_right);
    msleep(9000);
    
    motor(0, 0);
    motor(3, 0);
    msleep(1000);
    
    set_servo_position(3, 1275);
    msleep(1000);
    
    
    
    
    
    return 0;
}
