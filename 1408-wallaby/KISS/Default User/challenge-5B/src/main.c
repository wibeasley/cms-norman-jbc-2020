#include <kipr/botball.h>

int main()
{ 
    enable_servos(0);
    enable_servos(1);
    set_servo_position(0,688);
    set_servo_position(1,817);
    
    printf("go forward 1\n");
    motor(0,50);
    motor(3,50);
    msleep(3000);
    ao();
    
    printf("go backward 1\n");
    motor(0,-50);
    motor(3,-50);
    msleep(2000);
    ao();
  
      printf("go forward 2\n");
    motor(0,50);
    motor(3,50);
    msleep(3000);
    ao();
    
    printf("go backward 2\n");
    motor(0,-50);
    motor(3,-50);
    msleep(2000);
    ao();
    
     printf("go forward 3\n");
    motor(0,50);
    motor(3,50);
    msleep(2000);
    ao();
    
    printf("go backward 3\n");
    motor(0,-50);
    motor(3,-50);
    msleep(2000);
    ao();
  
      printf("go forward 4\n");
    motor(0,50);
    motor(3,50);
    msleep(2000);
    ao();
    
    printf("go backward 4\n");
    motor(0,-50);
    motor(3,-50);
    msleep(2000);
    ao();
     printf("go forward 5\n");
    motor(0,50);
    motor(3,50);
    msleep(2000);
    ao();
    
    printf("go backward 5\n");
    motor(0,-50);
    motor(3,-50);
    msleep(2000);
    ao();
  
      printf("go forward 6\n");
    motor(0,50);
    motor(3,50);
    msleep(2000);
    ao();
    
    printf("stop\n");
    motor(0,0);
    motor(3,0);
    msleep(1000);
    ao();
    
     printf("turn right 1\n");
    motor(3,50);
    msleep(7500);
    ao();
    
    printf("stop\n");
    motor(0,0);
    motor(3,0);
    msleep(850);
    ao();
    
     printf("turn left 1\n");
    motor(0,50);
    msleep(7500);
    ao();
    
    printf("stop\n");
    motor(0,0);
    motor(3,0);
    msleep(850);
    ao();
    
    printf("turn right 2\n");
    motor(3,50);
    msleep(2500);
    ao();
    
    printf("stop\n");
    motor(0,0);
    motor(3,0);
    msleep(850);
    ao();
    
     printf("turn left 2\n");
    motor(0,50);
    msleep(2500);
    ao();
    
    printf("stop\n");
    motor(0,0);
    motor(3,0);
    msleep(850);
    ao();
    
     printf("turn right 3\n");
    motor(3,50);
    msleep(2500);
    ao();
    
    printf("stop\n");
    motor(0,0);
    motor(3,0);
    msleep(850);
    ao();
    
     printf("turn left 3\n");
    motor(0,50);
    msleep(2500);
    ao();
    
    printf("stop\n");
    motor(0,0);
    motor(3,0);
    msleep(850);
    ao();
    
     printf("turn right 4\n");
    motor(3,50);
    msleep(2500);
    ao();
    
    printf("stop\n");
    motor(0,0);
    motor(3,0);
    msleep(850);
    ao();
    
     printf("turn left 4\n");
    motor(0,50);
    msleep(2500);
    ao();
    
    printf("stop\n");
    motor(0,0);
    motor(3,0);
    msleep(850);
    ao();
    
     printf("go backward 6\n");
    motor(0,-50);
    motor(3,-50);
    msleep(3550);
    ao();
    
    printf("stop\n");
    motor(0,0);
    motor(3,0);
    msleep(500);
    ao();
    
    printf("turn right 5\n");
    motor(3,50);
    msleep(2500);
    ao();
    
    printf("stop\n");
    motor(0,0);
    motor(3,0);
    msleep(850);
    ao();
    
     printf("turn left 5\n");
    motor(0,50);
    msleep(2500);
    ao();
    
    printf("stop\n");
    motor(0,0);
    motor(3,0);
    msleep(850);
    ao();
    
     printf("turn right 6\n");
    motor(3,50);
    msleep(2500);
    ao();
    
    printf("stop\n");
    motor(0,0);
    motor(3,0);
    msleep(850);
    ao();
    
     printf("turn left 6\n");
    motor(0,50);
    msleep(2500);
    ao();
    
    printf("stop\n");
    motor(0,0);
    motor(3,0);
    msleep(850);
    ao();
    
    printf("down 2\n");
    set_servo_position(0,1572);
    msleep(2000);
    ao();
    
    printf("up 1\n");
    set_servo_position(0,688);
    msleep(2000);
    ao();
    
    printf("down 2\n");
    set_servo_position(0,1572);
    msleep(2000);
    ao();
    
    printf("up 2\n");
    set_servo_position(0,688);
    msleep(2000);
    ao();
    
    printf("down 3\n");
    set_servo_position(0,1572);
    msleep(2000);
    ao();
    
    printf("up 3\n");
    set_servo_position(0,688);
    msleep(2000);
    ao();
    
    // turn right and left 5 times 6th time 360 degrees 
    //servos up and down 3 times
    // go backwards halfway through
    printf("0 by 3\n");
    printf("Hello World\n");
    return 0;
}
