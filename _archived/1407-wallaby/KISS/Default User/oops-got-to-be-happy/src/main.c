#include <kipr/botball.h>

int main()
{
    printf("moves motors 1\n");             //starting position (-2v)
    motor(0,54);
    motor(3,50);
    msleep(900);
    ao();
    
    printf("turns motors 1\n");
    motor(0,54);
    motor(3,25);
    msleep(2000);
    ao();
    
    printf("lowers servos 1\n");
    enable_servos(0);
    set_servo_position(0,1731);
    msleep(2000);
    disable_servos(0);
    ao();
    printf("turns motors 2\n"); 
    motor(0,15);
    motor(3,74);
    msleep(1000);
    ao();
    
    printf("lowers servos 1\n");
    enable_servos(0);
    set_servo_position(0,781);
    msleep(2000);
    disable_servos(0);
    ao();
    
    printf("lifts servos 1\n");
    enable_servos(0);
    set_servo_position(0,900);
    msleep(2000);
    disable_servos(0);
    ao();
    
    
    printf("moves motors 2\n");
    motor(0,-54);
    motor(3,-50);
    msleep(500);
    ao();
    
    printf("lowers servos 2\n");
    enable_servos(0);
    set_servo_position(0,1608);
    msleep(2000);
    disable_servos(0);
    ao();
    
    printf("moves motors 3\n");
    motor(0,-54);
    motor(3,-50);
    msleep(700);
    ao();
    
    printf("lifts servos 2\n");
    enable_servos(0);
    set_servo_position(0,360);
    msleep(2000); 
    disable_servos(0);
     ao(); 
    
    printf("moves motors 1\n");
    motor(0,-50);
    motor(3,-50);
    msleep(700);
    ao();
    
    printf("drops servos");
    enable_servos(0);
    set_servo_position(0,360);
    msleep(2000);
    disable_servos(0);
    ao();
    printf("turns motor left");
    motor(0,70);
    motor(3,50);
    msleep(500);
    ao();  
    
    printf("moves motors 4\n");
    motor(0,54);
    motor(3,50);
    msleep(700);
    ao();
    
    printf("drops servos 3\n");
    enable_servos(0);
    set_servo_position(0,1608);
    msleep(2000);
    disable_servos(0);
    ao();
    printf("move motor backward 2\n");
    motor(0,-54);
    motor(3,-50);
    msleep(450);
    
    
    
    
    
    
    
    
    return(0);
}


