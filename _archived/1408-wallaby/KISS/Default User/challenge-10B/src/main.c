#include <kipr/botball.h>

    int move(int speed_left,int speed_right,int duration){
        motor(0,speed_left);
        motor(3,speed_right);
        msleep(duration);
        
        return 0;
    }

 

int main()
{
    enable_servos(0);
    enable_servos(1);
    set_servo_position(0,1248);
    

    move(50,50,5000);              //go forward
    move(-50,-50,5000);              //go backward
    
    printf("Hello World\n");
    return 0;
}
