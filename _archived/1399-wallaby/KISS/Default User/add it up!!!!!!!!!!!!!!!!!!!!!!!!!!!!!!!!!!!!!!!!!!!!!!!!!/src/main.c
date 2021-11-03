#include <kipr/botball.h>

int main()
{
 
  
  printf("go up\n");
  enable_servos();    
  set_servo_position(1,1623);
  msleep(1000);//go up and down
      
 printf("go forward\n");   
 motor(2,51);   
 motor(0,50);//go forward.
 msleep(4200);   
 
printf("go down\n");
enable_servos();    
set_servo_position(1,1991);
msleep(1000);//go up and down

printf("go straight\n");
motor(2,0);
motor(0,0);
msleep(2000);
    
printf("go up\n");
set_servo_position(1,1539);   
msleep(2000);    
disable_servos();    

    printf("go straight\n");
motor(2,51);
motor(0,50);
msleep(1000);
 
 
printf("go down\n");
enable_servos();    
set_servo_position(1,1991);
msleep(1000);//go up and down
  ao(); 
    
   
    
   ao();
    
    return 0;


}

    