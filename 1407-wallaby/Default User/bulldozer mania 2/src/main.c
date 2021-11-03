#include <kipr/botball.h>

int main()
{
    
     printf("servos get ready.\n");
     enable_servos(0);   
     enable_servos(3);
    set_servo_position(0,1780);
    set_servo_position(3,63);  
    
    printf("turns motors 1\n");
    motor(0,40);    
    motor(3,00);    
    msleep(1000);
    
    printf("moves motors 1\n");
    motor(0,45);    
    motor(3,40);
    msleep(5000);
    
    printf("turns motors 2\n");
    motor(0,00);
    motor(3,30);
    msleep(1300);
    
    printf("moves motors 2\n");    
    motor(0,50);
    motor(3,50);
    msleep(5000);
    
    printf("turns motors 3\n");
    motor(0,00);
    motor(3,30);
    msleep(2500);
    
    printf("moves motor 2\n");
    motor(0,50);
    motor(3,50);
    msleep(2000);
    
    printf("turns motors 4\n");
    motor(0,00);
    motor(3,20);
    msleep(1111);
    
    printf("moves motors 3\n");
    motor(0,55);
    motor(3,50);
    msleep(4000);
    
    
    
    
    
    
    
    
    return 0;
}
