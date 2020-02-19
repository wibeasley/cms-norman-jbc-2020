#include <kipr/botball.h>

int main()
{   printf("go straight\n");
    enable_servos ();
    set_servo_position(1,1000);
    printf("go straight\n"); 
    motor (0,40);
    motor (3,40);
    msleep(700);
    printf("enable servos\n");
    set_servo_position(2,1000);
    msleep(500);
    printf("enable servos\n");
    set_servo_position(1,1570);
    msleep(500);
    printf("enable servos\n");
    set_servo_position(2,490);
    msleep(500);
     printf("enable servos\n");
    set_servo_position(1,570);
    printf("go straight\n"); 
    motor (0,40);
    motor (3,40);
    msleep(3000);
     printf("enable servos\n");
    set_servo_position(1,1840);
    msleep(500); 
    return 0;
}
