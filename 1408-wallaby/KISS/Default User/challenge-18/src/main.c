#include <kipr/botball.h>

int main()
     { int servos (int up_down,int right_left,int stop_time){
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
      servos(1620,1786,1000);          //set servos
      move(50,60,2000);                //go forward
      move(50,-60,1000);               //turn right
      move(50,60,2300);                //go forward
      move(50,-60,990);                //turn right
      move(50,60,1800);                //go forward
      move(-50,-60,500);               //go forward
    printf("Hello World\n");
    return 0;
}
