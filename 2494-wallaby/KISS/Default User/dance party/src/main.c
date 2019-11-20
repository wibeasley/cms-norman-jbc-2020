#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
  
    //claw closed servo position = 600 claw open servo position = 1515
    //arm up servo position = 0; arm down servo position = 1593
    
    motor(0,40);
    motor(3,40);
    msleep(1000);
    
    enable_servos();
    set_servo_position(3,0); //arm up
    msleep(1000);
   
    set_servo_position(3,1495);//arm down
    msleep(1000);
    
    set_servo_position(3,0); //arm up
    msleep(1000);
    
    set_servo_position(0,1515);//claw open
    msleep(1000);
    
    set_servo_position(0,600);//claw closed
    msleep(1000);
    
     set_servo_position(0,1515);//claw open
     msleep(1000);
    
     set_servo_position(3,1495);//arm down
     msleep(1000);
    
    motor(3,-40);
    motor(0,-40);
    msleep(1000);
    
    return 0;
}
