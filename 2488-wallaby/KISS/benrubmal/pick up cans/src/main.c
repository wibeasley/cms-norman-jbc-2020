#include <kipr/botball.h>

void move(char message[],double power_left,double power_right, double seconds) {
	printf("%s\n",message);   
    motor(0,power_left);
    motor(3,power_right);
    msleep(seconds*100);
}
int main()
{

  enable_servos();
   
     printf("forword\n");
    motor(0,21);
    motor(3,20);
    msleep(10000); 
    
    printf("set starting position\n");
    set_servo_position(1,1000);
    msleep(1800);
    
    printf("set starting position\n");
    set_servo_position(2,1500);
    msleep(2000);
    
    printf("set_ending_position\n");
    set_servo_position(2,1000);
    msleep(1500);    
   
      move ("move backwords",-41,-40,40);
    
    
    disable_servos();
    return 0;
}
