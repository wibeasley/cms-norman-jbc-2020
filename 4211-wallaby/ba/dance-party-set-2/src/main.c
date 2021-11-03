#include <kipr/botball.h>

int main()
    

{  
 enable_servos();
    set_servo_position(1,1456);
    set_servo_position(2,1488);
    printf("  la la land....");
   motor(3,55);
   motor(0,55);
   msleep(6000);
    set_servo_position(2,827);
    printf("pikachu 222");
    motor(3,0);
    motor(0,0);
    msleep(3000);
    set_servo_position(1,1079);
    printf("jiggalypuff jiggaly");
    motor(3,55);
    motor(0,-55);
    msleep(8300);
    set_servo_position(1,896);
    printf("1456");
    motor(3,-40);
    motor(0,-40);
    msleep(9000);
     set_servo_position(1,1079);
    printf("  la la land....");
   motor(3,55);
   motor(0,55);
   msleep(6000); 
    printf("  la la land....");
   motor(3,0);
   motor(0,0);
   msleep(700);
   printf("K");
   motor(3,0);
   motor(0,0);
   msleep(700);
    printf("LLLLLLLLLL");
    motor(3,-55);
    motor(0,-55);
    msleep(3000);
    
    
    
    return 0;
}
