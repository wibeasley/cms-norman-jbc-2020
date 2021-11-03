#include <kipr/botball.h>

int main()
{
    int servos (int up_down,int right_left,int stop_time){
    	enable_servos();
    	set_servo_position(0,up_down);
    	set_servo_position(1,right_left);
    	msleep(stop_time);
     
        return 0;
    }

    int move(int speed_left,int speed_right,int duration){
        motor(0,speed_left);
        motor(3,speed_right);
        msleep(duration);
        
        return 0;
    }
    
    
    servos(792,1270,2000);  //set servos
    move(50,60,500);       //go forward
    servos(1234,1200,2000);  //set servos open claw more
    move(-50,-60,5500);     //go backward
    printf("6 by -9\n");
    return 0;
}
   
