#include <kipr/botball.h>

int main()
{
    printf("set servos\n");
    enable_servos(0);
    enable_servos(1);
    set_servo_position(0,1161);

    //make go shorter
    printf("go foward\n");
    motor(0,50);
    motor(3,50);
    msleep(1400);
    ao();

    printf("turn left\n");
    motor(3,50);
    msleep(3000);
    ao();

    printf("turn right\n");
    motor(0,50);
    msleep(1000);
    ao();

    printf("go foward \n");
    motor(3,50);
    motor(0,50);
    msleep(2000);
    ao();
    
    printf("turn right\n");
    motor(0,50);
    msleep(2900);
    ao();
    printf("turn left/n");
    motor(0,50);
    msleep(2000);
    ao();
    
    printf("go foward \n"); 
    motor(0,50);
    motor(3,50);
    msleep(1000);
    ao();

    printf("turn left/n");
    motor(0,50);
    msleep(2000);
    ao();
    
    printf("go foward/n");
    motor(3,50);
    motor(0,50);
    msleep(1500);
    ao();
    
    printf("turn right\n");
    motor(3,50);
    msleep(1500);
    ao();
    
   // printf("turn left\n");
   // motor(3,50);
   // msleep(1000);
    //ao();
    
    //printf("go foward/n");
    //motor(0,50);
    //motor(3,50);
    //msleep(2500);
    //ao();
    
    printf("2 by 6 \n");
    printf("Hello World\n");
    return 0;
}
