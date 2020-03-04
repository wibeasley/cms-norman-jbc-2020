#include <kipr/botball.h>

int main()
{   printf("enable servos\n");
    enable_servos ();
    set_servo_position(1,1000);
    msleep(800);
    printf("go straight\n"); 
    motor (0,40);
    motor (3,40);
    msleep(1500);
 
    motor (0,0);
    motor (3,0);
    msleep(500);
    printf("enable servos\n");
    set_servo_position(2,1000);
    msleep(800);
    motor (0,0);
    motor (3,0);
    msleep(500);
    printf("enable servos\n");
    set_servo_position(1,1570);
    msleep(700);
    printf("enable servos\n");
    set_servo_position(2,490);
    msleep(700);
    printf("enable servos\n");
    set_servo_position(1,570);
    msleep(800);
    printf("go straight\n"); 
    motor (0,40);
    motor (3,40);
    msleep(2100);
    printf("enable servos\n");
    set_servo_position(1,1840);
    msleep(700); 
    set_servo_position(2,1120);
    msleep(700);
    motor (0,0);
    motor (3,0);
    msleep(900);
    set_servo_position(1,570);
    msleep(900);
    motor (0,-45);
    motor (3,-45);
    msleep(4000); 
    motor (0,0);
    motor (3,0);
    msleep(500);
    set_servo_position(2,620);
    msleep(900);
    motor (0,45);
    motor (3,45); 
    msleep(2000);
 //hhhhhhhhhhhhhhhhhhh
    msleep(700);
    motor (0,45);
    motor (3,5);
    msleep(2000); 
 //hhhhhhhhhhhhhhhhhhh
    motor (0,45);
    motor (3,45);
    msleep(1500);
 //hhhhhhhhhhhhhhhhhhh
    motor (0,5);
    motor (3,45);
    msleep(2000);
 
    motor (0,45);
    motor (3,45);
    msleep(2400);
 //big long ride
    motor (0,-45);
    motor (3,0);
    msleep(1350); 
    motor (0,45);
    motor (3,45);
    msleep(1250);
 
    motor (0,0);
    motor (3,0);
    msleep(500);
    printf("enable servos\n");
    set_servo_position(2,1000);
    msleep(900);
    printf("enable servos\n");
    set_servo_position(1,1570);
    msleep(900);
    printf("enable servos\n");
    set_servo_position(2,490);
    msleep(700);
    printf("enable servos\n");
    set_servo_position(1,570);
    printf("go straight\n");
    motor(0,35);
    motor(3,35);
    msleep(3000);
     printf("enable servos\n");
    set_servo_position(1,1570);
    msleep(700);
   printf("enable servos\n");
    set_servo_position(2,1000);
    msleep(800);
 return 0;
 
 
 
 
 
 
 
 
}
