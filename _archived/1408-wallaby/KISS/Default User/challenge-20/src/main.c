#include <kipr/botball.h>

int main()
{
    printf("set servos\n");
    enable_servos();
    set_servo_position(0,1391);
    set_servo_position(1,1602);
    msleep(200);
    
    printf("go forward\n");
    motor(0,50);
    motor(3,50);
    msleep(6800);
    ao();
    
    printf("set servos\n");
    set_servo_position(0,1391);
    set_servo_position(1,952);
    msleep(200);
    
    printf("go backward\n");
    motor(0,-50);
    motor(3,-50);
    msleep(2500);
    ao();
    
    printf("turn right\n");
    motor(0,50);
    msleep(1500);
    ao();
    
    printf("go forward\n");
    motor(0,50);
    motor(3,50);
    msleep(2000);
    ao();
    
    printf("turn right\n");
    motor(0,50);
    msleep(2500);
    ao();
    
    printf("set servos\n");
    set_servo_position(0,724);
    set_servo_position(1,952);
    msleep(200);
    
    printf("go forward\n");
    motor(0,50);
    motor(3,50);
    msleep(2500);
    ao();
    
    printf("set servos\n");
    set_servo_position(0,1378);
    set_servo_position(1,952);
    msleep(200);
    
    printf("set servos\n");
    set_servo_position(1,1602);
    msleep(200);
    
    printf("stop\n");
    motor(0,0);
    motor(3,0);
    msleep(1000);
    ao();
    
    printf("go backward\n");
    motor(0,-50);
    motor(3,-50);
    msleep(2300);
    ao();
    
    printf("turn right\n");
    motor(0,50);
    msleep(850);
    ao();
    
    set_servo_position(0,724);
    printf("1 by 3\n");
    return 0;
}
