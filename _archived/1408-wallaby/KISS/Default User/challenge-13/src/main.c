#include <kipr/botball.h>

int main()
{
    //410
    printf("set servos\n");
    enable_servos();
    set_servo_position(0,1401);
    set_servo_position(1,1388);
    msleep(200);
    
    printf("go forward\n");
    motor(0,50);
    motor(3,50);
    msleep(2500);
    ao();
    
    printf("stop\n");
    motor(0,0);
    motor(3,0);
    msleep(1000);
    ao();
    
    printf("go backward\n");
    motor(0,-50);
    motor(3,-50);
    msleep(1000);
    ao();
    
    printf("turn right\n");
    motor(3,50);
    msleep(2000);
    ao();
    
    printf("go forward\n");
    motor(0,50);
    motor(3,50);
    msleep(500);
    ao();
    
    printf("turn right\n");
    motor(0,50);
    msleep(2500);
    ao();
    
    printf("go forward\n");
    motor(0,50);
    motor(3,50);
    msleep(900);
    ao();
    
      printf("set servos\n");
    enable_servos();
    set_servo_position(0,1401);
    set_servo_position(1,1015);
    msleep(200);
    
    printf("turn right\n");
    motor(0,50);
    msleep(1000);
    ao();
    
    printf("set servos\n");
    enable_servos();
    set_servo_position(0,1401);
    set_servo_position(1,1388);
    msleep(200);
    
     printf("set servos\n");
    enable_servos();
    set_servo_position(0,410);
    set_servo_position(1,1388);
    msleep(200);
    
    printf("go backwards turn\n");
    motor(0,-50);
    msleep(1300);
    
     printf("set servos\n");
    enable_servos();
    set_servo_position(0,1401);
    set_servo_position(1,1851);
    msleep(200);
    
    printf("go forward\n");
    motor(0,50);
    motor(3,50);
    msleep(3800);
    ao();
    
    printf("set servos\n");
    enable_servos();
    set_servo_position(0,1401);
    set_servo_position(1,1015);
    msleep(200);
    
    printf("go backward\n");
    motor(0,-50);
    motor(3,-50);
    msleep(5500);
    ao();
    
    printf("stop\n");
    motor(0,0);
    motor(3,0);
    msleep(1000);
    ao();
    
    printf("turn right\n");
    motor(0,50);
    msleep(500);
    ao();
    
    printf("set servos\n");
    enable_servos();
    set_servo_position(0,1401);
    set_servo_position(1,1388);
    msleep(200);
    
      printf("set servos\n");
    enable_servos();
    set_servo_position(0,410);
    set_servo_position(1,1851);
    msleep(200);
    
    printf(" go backward\n");
    motor(0,-50);
    motor(3,-50);
    msleep(1000);
    ao();
    
     printf("turn right\n");
    motor(0,50);
    msleep(1500);
    ao();
    
     printf("go forward\n");
    motor(0,50);
    motor(3,50);
    msleep(2500);
    ao();
    
     printf("turn left\n");
    motor(3,50);
    msleep(2500);
    ao();
    
     printf("go forward\n");
    motor(0,50);
    motor(3,50);
    msleep(2300);
    ao();
    
     printf("set servos\n");
    enable_servos();
    set_servo_position(0,1401);
    set_servo_position(1,1388);
    msleep(2000);
    
    printf("set servos\n");
    enable_servos();
    set_servo_position(0,1401);
    set_servo_position(1,1015);
    msleep(2000);
    
    printf("set servos\n");
    enable_servos();
    set_servo_position(0,1401);
    set_servo_position(1,1020);
    msleep(2000);
    
    printf(" go backwards\n");
    motor(3,-50);
    motor(0,-50);
    msleep(1300);
    
    printf("turn left\n");
    motor(3,50);
    msleep(500);
    ao();
    
     printf("set servos\n");
    enable_servos();
    set_servo_position(0,1401);
    set_servo_position(1,1020);
    msleep(2000);
    
    printf("set servos\n");
    enable_servos();
    set_servo_position(0,1401);
    set_servo_position(1,1015);
    msleep(2000);
    
    printf("set servos\n");
    enable_servos();
    set_servo_position(0,1401);
    set_servo_position(1,1126);
    msleep(2000);
    
    printf("set servos\n");
    enable_servos();
    set_servo_position(0,410);
    set_servo_position(1,1126);
    msleep(2000);
    
    printf("set servos\n");
    enable_servos();
    set_servo_position(0,410);
    set_servo_position(1,1388);
    msleep(2000);
    
    printf("backwards turn left\n");
    motor(3,-50);
    msleep(1000);
    ao();
    
    printf(" go backwards\n");
    motor(3,-50);
    motor(0,-50);
    msleep(3000);
    
    printf("8 by 4\n");
    return 0;
}
