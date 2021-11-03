#include <kipr/botball.h>

int main()
{
printf("open arm\n"); 
    enable_servos();                     // activate servos.
	set_servo_position(2,1072);          // set position for servos. servo 1 set for 1884. 
    msleep(2000);                        // go for 2 seconds. 
   
    printf("put down arm\n"); 
    enable_servos();                     // activate servos.
	set_servo_position(1,1634);          // set position for servos. servo 1 set for 1884. 
    msleep(2000);                        // go for 2 seconds. 
      
   printf("close arm\n");
    enable_servos();                     // activate servos.
	set_servo_position(2,548);           // set position for servos. servo 2 set for 548. 
    msleep(2000);                        // go for 2 seconds. 

    printf("go forward\n");  
	motor(0,50);                         // set motor 0 for 50%.
    motor(2,50);                         // set motor 2 for 50%. 
	msleep(1500);                        // go for 1500 milliseconds. 
 
	printf("stop\n");
    motor(0,00);                         // set motor 0 for 50%.                          
    motor(2,00);                         // set motor 2 for 50%.
    msleep(2000);                        // go for 2 seconds. 
    
    printf("open arm\n");
    enable_servos();                     // activate servos.
    set_servo_position(2,1000);          // set position for servos. servo 2 set for 1000. // 0 turn backward
    msleep(2000);                        // go for 2 seconds. 
    
    printf("turn right\n");             
    motor(0,00);                          //set servo 0 for -20%. 
    motor(2,20);                          //set sevo 2 for 20%
    msleep(400);                          // go for 500 millisecounds 
      
    printf("go backwards\n");
    motor(0,-50);                         // set servo 0 for -50%.
    motor(2,-50);                         // set servo 2 for -50%.
	msleep(1000);                         // go for 1 secound.
    
    printf("stop\n");
    motor(0,00);                          // set motor 0 for 50%.                          
    motor(2,00);                          // set motor 2 for 50%.
    msleep(2000);                         // go for 2 seconds.
    
    printf("turn right\n");             
    motor(0,50);                          // set motor 0 for 50%.
    motor(2,-50);                         //set motor 2 for -50%.
    msleep(500);                          // go for 500 milliseconds.
    
    printf("go foward\n");
    motor(0,50);                          // set motor 0 for 50%.
    motor(2,50);                          // set motor 2 for 50%. 
	msleep(899);                          // go for 1 secound.     
    
    printf("turn right\n");
    motor(0,-25);                         // set motor 0 for -25%. 
    motor(2,25);                          // set motor 2 for 25%.
	msleep(600);                          // go for 500 millisecounds
  
    printf("go forwards\n");
    motor(0,50);                          // set motor 0 for 50%.
    motor(2,50);                          //set motor 2 for 50%.
	msleep(1150);                         //go for milliseconds.                             
    
    
    printf("stop\n");
    motor(0,00);                          // set motor 0 for 50%.                          
    motor(2,00);                          // set motor 2 for 50%.
    msleep(2000);                         // go for 2 second
     
    printf("close arm\n"); 
    enable_servos();                     // activate servos.
	set_servo_position(2,548);           // set position for servos. servo 1 set for 1884. 
    msleep(2000);                        // go for 2 seconds. 
    
 
    printf("open arm\n"); 
    enable_servos();                     // activate servos.
	set_servo_position(2,1255);          // set position for servos. servo 1 set for 1884. 
    msleep(2000);                        // go for 2 seconds. 

    printf("turn right\n");             
    motor(0,-50);                       // set motor 0 for 50%.
    motor(2,50);                        //set motor 2 for -50%.
    msleep(500);                        // go for 500 milliseconds.
      
	printf("turn right\n"); 
    motor(0,-20);                        //set servo 0 for 0%.
    motor(2,20);                        //set servo 2 for 20%.
	msleep(100);                        //go for 100 milliseconds
    
    printf("go backwards\n");
	motor(0,-50);                       // set motor 0 for -50%.
	motor(2,-50);                       // set motor 2 for -50%.
	msleep(2000);                       // go for 2 seconds. 
   
    printf("turn right\n");
    motor(0,50);                        // set motor 0 for 50%.                          
    motor(2,00);                        // set motor 2 for 50%.
    msleep(2000);                       // go for 2 seconds.
    
    printf("turn left\n");             
    motor(0,-50);                       // set motor 0 for 50%.
    motor(2,50);                        //set motor 2 for -50%.
    msleep(500);                        // go for 500 milliseconds.

    
    
    
    
    return 0;
}
