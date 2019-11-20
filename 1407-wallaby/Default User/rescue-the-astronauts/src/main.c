#include <kipr/botball.h>
int move( int speed_left, int speed_right, int duration ) {
    motor(0,speed_left);
    motor(3,speed_right);
    msleep(duration); 
    return 0;
}

int main()
{
    move(50,50,1020);//forward      
    move(-50,50,125);
    ao();
    
    enable_servos(0,3);                              
    set_servo_position(3,181);
    set_servo_position(0,1544);
    msleep(3000);
    set_servo_position(3,0);
    msleep(3000);
    set_servo_position(0,756);
    msleep(1000);
    disable_servos(0);
    ao();
    
    move(-50,50,1000);
    move(52,50,1000);
    enable_servos(0,3);
    ao();
    move(50,-50,500);
    set_servo_position(0,1240);
    set_servo_position(3,300);
    msleep(2000);
    disable_servos(0,3);
    printf("Second can\n");
    
    
    return 0;
    
}  