#include <kipr/botball.h>

int main()
{
    printf("Set arm position\n");
  enable_servos();
   set_servo_position(2 ,1000);
    msleep(1000);
    
    printf("Close\n");
    set_servo_position(2, 1800);
    msleep(1000);
    
    printf("Forward\n");
    motor(0, 50);
    motor(3, 50);
    msleep(2000);
    
    printf("Pause");
    motor(0, 0);
    motor(3, 0);
    msleep(1000);
    
    printf("Drop can\n");
    set_servo_position(2, 1000);
    msleep(1000);
   
    printf("Turn right\n");
    motor(0,40);
    motor(3,-40);
    msleep(2000);
    
    printf("Move forward\n");
    motor(0,40);
    motor(3,40);
    msleep(1500);
    
    printf("Pause");
    motor(0, 0);
    motor(3, 0);
    msleep(1000);
    
    printf("Close\n");
    set_servo_position(2, 1800);
    msleep(1000);
    
    printf("Turn right\n");
    motor(0,40);
    motor(3,-40);
    msleep(2000);
    
    printf("Move forward\n");
    motor(0,40);
    motor(3,40);
    msleep(1500);
    
    printf("Pause");
    motor(0, 0);
    motor(3, 0);
    msleep(1000);
    
    printf("Drop can\n");
    set_servo_position(2, 1000);
    msleep(1000);
    
    
   
    
    
    
    
    
    return 0;
}
