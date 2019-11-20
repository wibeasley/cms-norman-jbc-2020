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


    servos(1391,1829,200);                //set servos
    move(50,50,6500);                     //go forward
    servos(1391,952,200);                 //set servos
    move(-50,-50,2500);                   //go backward
    move(50,-50,1000);                    //turn right 
    move(50,50,3500);                     //go forward
    move(50,-50,750);                     //turn right
    servos(561,952,200);                  //set servos
    move(50,50,1500);                     //go forward
    move(0,0,2000);                       //stop
    servos(1391,952,200);                 //set servo
    servos(1391,1829,200);                //set servos
    move(0,0,2000);                       //stop
    move(-50,-50,1500);       			  //go backward
    move(-50,50,3800);                    //turn right
    move(50,50,1000);				      //go forward		
    move(0,0,2000);                       //stop
    servos(1391,952,200);                 //set servo
    move(-50,-50,1500);					  //go backward
    servos(561,952,200);                  //set servos
    move(50,50,800);					  //go forward
    servos(1391,1829,200);                //set servos
    move(0,0,2000);                       //stop
    
    printf("1 by 3\n");
    return 0;
}

   