#include <kipr/botball.h>

int main()
{
    enable_servos(0);
    enable_servos(1);
    set_servo_position(0,1572);
    
    int move(int speed_left,int speed_right,int duration){
        motor(0,speed_left);
        motor(3,speed_right);
        msleep(duration);
        
        return 0;
    }
    
    move(50,50,5500);                                                             //go forward
    move(30,-30,2000);                                                           //turn left  
    move(50,50,3500);															//go forward
    move(-30,30,2000);                                                         //turn right  
    move(50,50,4500);                               						  //go forward
    move(-30,30,2000);														 //turn right
    move(50,50,3500);                         								 //go forward
    move(-30,30,1500);   													//turn right
    move(50,50,3500);														//go forward
    move(-30,30,1800);														//turn right
    move(50,50,3500);    													//go forward
    move(30,-30,1800);														//turn left
    move(50,50,5500);														//go forward
    
    printf("8 by 3(-2)\n");
    return 0;
}
