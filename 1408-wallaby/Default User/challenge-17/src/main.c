#include <kipr/botball.h>

int main()
{
       printf("set servos\n");
    enable_servos(0);
    enable_servos(1);
    set_servo_position(0,1351);
    
    printf("Start while loop\n");    
     while (analog(0)<=2700) {  
         msleep(10);
         //If Mr. Reflecter sees dark go right      
     	if (analog(1) >= 3800) {
			motor(0,50);
         	motor(3,-5);}       
        else {     //other wise go left
            motor(0,-5);
            motor(3,50);}
	}     //End the while loop
    ao();
    
     printf("set servos\n");
    enable_servos(0);
    enable_servos(1);
    set_servo_position(0,593);
    msleep(2000);
    ao();
    printf("Hello World\n");
    return 0;
}
