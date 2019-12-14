#include <kipr/botball.h>

int main()
{
    printf("starting position h0");
    printf("Hello World\n");
    motor(3,55);
    motor(0,55);
    msleep(4500);
    printf("backwards");
    motor(3,-55);
    motor(0,-55);
    msleep(3800);
   
    msleep(3000);          printf("forward");
    motor(3,55);
    motor(0,55);
    msleep(8000);
    printf("turn right");
    motor(3,40);
    motor(0,0);
    msleep(2000);
    printf("moveforward");
    motor(3,55);
    motor(0,55);
    msleep(1700);
    
    
      printf("moveforward");
    motor(3,-55);
    motor(0,-55);
    msleep(1700);
    
    printf("turn right");
    motor(3,-40);
    motor(0,-0);
    msleep(1000);
    
    
    printf("moveforward");
    motor(3,-55);
    motor(0,-55);
    msleep(1700);
    
    
    
    return 0;
}
