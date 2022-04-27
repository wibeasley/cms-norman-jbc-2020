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
  move ("move forward",31,30,10);
   
    printf("set starting position\n");
    set_servo_position(0,1000);
    msleep(1000);
    
    printf("set_ending_position\n");
    set_servo_position(0,1500);
    msleep(1000);
    
    printf("set starting position\n");
    set_servo_position(2,1400);
    msleep(1000);
    
    printf("set_ending_position\n");
    set_servo_position(2,1000);
    msleep(1000);    
   
      move ("move forward",-31,-30,10);
    
    
    disable_servos();
    return 0;
}
