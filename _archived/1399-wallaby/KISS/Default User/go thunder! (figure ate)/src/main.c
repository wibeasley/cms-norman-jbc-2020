#include <kipr/botball.h>
int move(int speed_left,int speed_right,int duration){
	motor(0,speed_left);
	motor(2,speed_right);
	msleep(duration); 

	return 0;
}

int main(){   
	move(  50,  50, 3667);  // forward   
  	move(  30, -30, 1250);  // pivot right
   	move(  50,  50, 3300);  // forward   
   	move( -30,  30, 1250);  // pivot right
   	move(  50,  50, 3300);  // forward 
   	move( -30,  30, 1250);  // pivot right 
   	move(  50,  50, 3300);  // forward     
    move( -30,  30, 1250);  // pivot right     
   	move(  50,  50, 3300);  // forward     
   	move( -30,  30, 1250);  // pivot right     
   	move(  50,  50, 3509);  // forward        
   	move(  30, -30, 1250);  // pivot left      
    move(  50,  50, 3900);  // forward          
	
    return 0;
}
