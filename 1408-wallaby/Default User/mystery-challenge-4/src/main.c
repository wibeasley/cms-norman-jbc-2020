#include <kipr/botball.h>

int main()
{
    printf("set servos\n");
    enable_servos();
    set_servo_position(0,1512);
    set_servo_position(1,1734);
    msleep(200);
    
    printf("go forward\n");
    motor(0,30);
    motor(3,30);
    msleep(2000);
    ao();
    
    printf("set servos\n");
    set_servo_position(0,1512);
    set_servo_position(1,755);
    msleep(200);
    
    printf("turn left\n");
    motor(3,30);
    msleep(2500);
    ao();
    
    printf("stop\n");
    motor(0,0);
    motor(3,0);
    msleep(1000);
    ao();
    
   
    printf("set servos\n");
    set_servo_position(0,1512);
    set_servo_position(1,1300);
    msleep(2000);
    
    printf("set servos\n");
    set_servo_position(0,1512);
    set_servo_position(1,1734);
    msleep(200);
    
    printf("stop\n");
    motor(0,0);
    motor(3,0);
    msleep(1000);
    ao();
    
    printf("go backwad\n");
    motor(0,-30);
    motor(3,-30);
    msleep(1500);
    ao();
    
    printf("turn left\n");
    motor(3,30);
    msleep(1000);
    ao(); 
    
    printf("go forward\n");
    motor(0,30);
    motor(3,30);
    msleep(2300);
    ao();
    
    printf("stop\n");
    motor(0,0);
    motor(3,0);
    msleep(1000);
    ao();
    
    printf("set servos\n");
    set_servo_position(0,1512);
    set_servo_position(1,1300);
    msleep(2000);
    
    printf("set servos\n");
    set_servo_position(0,1512);
    set_servo_position(1,755);
    msleep(200);
    
    printf("stop\n");
    motor(0,0);
    motor(3,0);
    msleep(1000);
    ao();
    
    printf("go backwad\n");
    motor(0,-30);
    motor(3,-30);
    msleep(1800);
    ao();
    
    printf("set servos\n");
    set_servo_position(0,1512);
    set_servo_position(1,1734);
    msleep(200);
    
    printf("go backwad\n");
    motor(0,-30);
    motor(3,-30);
    msleep(1500);
    ao();
    
    printf("turn right\n");
    motor(0,30);
    msleep(2900);
    ao();
    
    printf("go forward\n");
    motor(0,30);
    motor(3,30);
    msleep(3500);
    ao();
    
    printf("turn left\n");
    motor(3,30);
    msleep(3500);
    ao();
    
    printf("go forward\n");
    motor(0,30);
    motor(3,30);
    msleep(900);
    ao();
    
    printf("set servos\n");
    set_servo_position(0,1512);
    set_servo_position(1,755);
    msleep(200);
    
    printf("go backwad\n");
    motor(0,-30);
    motor(3,-30);
    msleep(2300);
    ao();
    
    printf("Hello World\n");
    return 0;
}
