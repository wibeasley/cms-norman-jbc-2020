#include <kipr/botball.h>
const int position_closed = 417;
const int position_open = 1000;
// this is not a constant, it is a variable, and we haven't yet defined it. delete line 4 and define the variable 5/2/18

int move(int speed_left,int speed_right,int duration){
	motor(0,speed_left);
	motor(2,speed_right);
	msleep(duration); 
	return 0;
}   
   int open_claw(int position_starting){
       position_starting = 381;
   while( position_starting < position_open ) {
        position_starting = position_starting + 10; 
        set_servo_position(2,position_starting);
        msleep(100);
    }    
    return 0;    
}	
int main()
{
	enable_servos(2);
    open_claw(position_closed);
    {
    printf("go forward\n");
	move( 50, 50, 6300);
    move( 0, 0, 2000);
    
    
	return 0;
    }

printf("close claw very slowly\n");
    int close_claw( int position_starting){ 
	int position = position_starting;
	
    while( position < position_open );
        position = position - 10;
        set_servo_position(2, position);
        msleep(100);
        return 0;
    }
    int Main(){
	enable_servos(2);
    close_claw(position_closed);
	
    return 0;
    }
    printf("close claw\n");
    enable_servos();
    set_servo_position(2,434);
    msleep(2000);
    disable_servos();
    
    return 0;
ao();
        
    }