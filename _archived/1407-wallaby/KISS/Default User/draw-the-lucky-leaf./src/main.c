#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
     printf("moves motors 1\n");             //starting position k1
    motor(0,57);
    motor(3,50);
    msleep(3000);
    ao(); 
    
        printf("lowers servos 1\n");
    enable_servos(0);
    set_servo_position(0,1731);
    msleep(2000);
    disable_servos(0);
    ao();   
     
   printf("moves motors backword1\n");
    motor(0,-57);
    motor(3,-50);
    msleep(450);
    ao();
    
    printf("lifts servo up 1\n");
    enable_servos(0);
    enable_servos(3);
    set_servo_position(0,759);
    set_servo_position(3,00000);
    msleep(3000);
    disable_servos(0,3);
    ao();
    
    printf("turns motors right1\n");
    motor(0,00);
    motor(3,50);
    msleep(1250);
    
    printf("motors moves forword2\n");
    motor(0,54);
    motor(3,50);
    msleep(1000);
    
    printf("turns motors left1\n");
    motor(0,50);
    motor(3,00);
    msleep(1500);
    
     printf("motors moves forword3\n");
    motor(0,54);
    motor(3,50);
    msleep(1250);
    
    printf("turns motors left2\n");
    motor(0,50);
    motor(3,00);
    msleep(2000);
    
    printf("motors moves forword4\n");
    motor(0,-500);
    motor(3,500);
    msleep(30);
    ao(); 
    printf("lowers servos 2\n");
    enable_servos(0);
    set_servo_position(0,1731);
    msleep(2000);
    disable_servos(0);
    ao();    
    
    printf("motors moves forword4\n");
    motor(0,54);
    motor(3,50);
    msleep(56);
    
    printf("turns motors right2\n"); 
    motor(0,00);
    motor(3,50);
    msleep(10); 
    
    printf("moves motors backword2\n");
    motor(0,-54);
    motor(3,-50);
    msleep(6);
    
    printf("moves motorsforword5\n");
    motor(0,54);
    motor(3,50);
    msleep(6);
    
      printf("turns motors right2\n");
    motor(0,00);
    motor(3,50);
    msleep(10); 
   
    printf("moves motors backwords3\n");
    motor(0,54);
    motor(3,50);
    msleep(56);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
