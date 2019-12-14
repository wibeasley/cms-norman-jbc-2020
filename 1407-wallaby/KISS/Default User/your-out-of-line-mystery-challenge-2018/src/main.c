#include <kipr/botball.h>

int main()
{
    printf("moves motors forword1\n");
    motor(0,60);
    motor(3,50);
    msleep(1700);
    ao();
    printf("closes servos1\n");
    enable_servos(3,0);
    set_servo_position(3,0);
    set_servo_position(0,1714);
    msleep(1000);
    disable_servos(3,0);
    ao();
    
    printf("turns motors left1\n");
    motor(0,35);
    motor(3,00);
    msleep(1250);
    ao();
    
    printf("opens servos1\n");
     enable_servos(3,0);
    set_servo_position(3,233);
    set_servo_position(0,1533);
    msleep(1000);
    disable_servos(3,0);
    ao();
    
    printf("moves motors backward1\n");
    motor(0,-60);
    motor(3,-50);
    msleep(1700);
    ao();
    
     printf("turns motors left reverse1\n");
    motor(0,-50);
    motor(3,00);
    msleep(600);
    ao();
    
     printf("moves motors forword2\n");
    motor(0,60);
    motor(3,50);
    msleep(4000);
    ao();
    
   printf("closes servos1\n");
    enable_servos(3,0);
    set_servo_position(3,0);
    set_servo_position(0,1714);
    msleep(1000);
    disable_servos(3,0);
    ao(); 
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
