#include <kipr/botball.h>

int main()
{
    //Range is 0 to 1600
    //For this make sure that servo 3 is at 1461 if it is not at 1461 use set_servo_postion(3, 1461);
    //400
    enable_servos();
    set_servo_position(3, 1461);
    msleep(1000);
    
    set_servo_position(0, 1402);
    msleep(500);
    
    motor(0, 15);
    motor(3, 15);
    msleep(3000);
    
    set_servo_position(3, 910);
    msleep(500);
    
    set_servo_position(0, 140);
    msleep(1000);
    
    motor(0, -30);
    motor(3, -30);
    msleep(9000);
    
    motor(0, 0);
    motor(3, 30);
    msleep(1000);
    
    set_servo_position(0, 400);
    msleep(500);
    
    set_servo_position(0, 0);
    msleep(1000);
    
    set_servo_position(0, 1461);
    msleep(1000);
    printf("MIC DROP\n");
    set_servo_position(3, 1280);
    msleep(500);
    
    disable_servos();
    return 0;
}
