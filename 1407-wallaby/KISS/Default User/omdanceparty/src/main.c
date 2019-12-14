#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    printf("moving motors forward\n");                // start at -1 k
    motor(0,58);
    motor(3,50);
    msleep(1900);
    ao();
    printf("moves servo 0 up\n");
    enable_servos(0);
    set_servo_position(0,424);
    msleep(2001);
    disable_servos(0);
    
   printf("moves motors 360 degrees clockwise\n"); 
   motor(0,-68); 
   motor(3,60);
   msleep(5500);
    
   printf("moves motors 360 degrees couterclockwise\n");
   motor(0,68);
   motor(3,-60);
   msleep(5500);
   ao(); 
    
   printf("moves servo 0 down\n"); 
   enable_servo(0); 
   set_servo_position(0,1531); 
   msleep(2500); 
   disable_servos(0); 
    
   printf("moves motors backwards\n");
   motor(0,-58);
   motor(3,-50);
   msleep(1900);
    
    
    return 0;
}
