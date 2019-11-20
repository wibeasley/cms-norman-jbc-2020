#include <kipr/botball.h>

int main()
{
    int servos (int up_down,int right_left,int stop_time){
    	enable_servos();
    	set_servo_position(1,up_down);
    	set_servo_position(0,right_left);
    	msleep(stop_time);
     
        return 0;
    }

    int move(int speed_left,int speed_right,int duration){
        motor(0,speed_left);
        motor(3,speed_right);
        msleep(duration);
        
        return 0;
    }
    
    servos(1270,792,1000);           //set servos
    move(50,60,6000);                //go forward
    servos(1270,1536,1000);          //set servos
    move(0,0,1000);                  //stop
    move(-50,-60,9000);              //go backward
    
    printf("Hello World\n");
    return 0;
}
