#include <kipr/botball.h>

int main()
{   
    enable_servos(1);
    enable_servos(2);
    set_servo_position(0,1330);
    set_servo_position(1,797);
    msleep(200);
    
    printf("go foward\n");
    motor(0,50);
    motor(3,50);
    msleep(500);
    ao();
    
    printf("turn left\n");
    motor(0,50);
    msleep(2000);
    ao();
    
    printf("go forward\n");
    motor(0,50);
    motor(3,50);
    msleep(1500);
    ao();
    
    printf("turn right\n");
    motor(3,50);
    msleep(2000);
    ao();
    
    printf("go forward\n");
    motor(0,50);
    motor(3,50);
    msleep(2000);
    ao();
    
    printf("turn right\n");
     motor(3,50);
    msleep(1800);
    ao();
    
    printf("go forward\n");
    motor(0,50);
    motor(3,50);
    msleep(2000);
    ao();
    
     printf("turn right\n");
     motor(3,50);
    msleep(1800);
    ao();
    
    printf("go forward\n");
    motor(0,50);
    motor(3,50);
    msleep(2000);
    ao();
    
    printf("stop\n");
    motor(0,0);
    motor(3,0);
    msleep(1000);
    ao();
    
    printf("go backward\n");
    motor(0,-50);
    motor(3,-50);
    msleep(2500);
    ao();
    
    printf("turn left\n");
    motor(3,-50);
    msleep(1800);
    ao();
    
    printf("go backward\n");
    motor(0,-50);
    motor(3,-50);
    msleep(2300);
    ao();
    
    printf("turn right\n");
    motor(0,-50);
    msleep(1800);
    ao();
    
    printf("go backward\n");
    motor(0,-50);
    motor(3,-50);
    msleep(2300);
    ao();
    
    printf("turn right\n");
    motor(0,-50);
    msleep(2000);
    ao();
    
    printf("go backward\n");
    motor(0,-50);
    motor(3,-50);
    msleep(2500);
    ao();
    
    printf("turn right\n");
    motor(0,-50);
    msleep(2000);
    ao();
    
    printf("go backward\n");
    motor(0,-50);
    motor(3,-50);
    msleep(8000);
    ao();
    
    printf("Hello World\n");
    printf("right 7 by 3\n");
    return 0;
}
