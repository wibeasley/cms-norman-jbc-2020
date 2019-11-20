#include <kipr/botball.h>
// One Can Finished
int main()
{
    printf("set servos\n");
    enable_servos(0);
    enable_servos(1);
    set_servo_position(0,593);
 // Can One   
    printf("Go Foward\n");
    motor(0,52);
    motor(3,50);
    msleep(6550);
    ao();
    
    printf("Turn Left\n");
    motor(0,52);
    msleep(1800);
    ao();
    
    printf("Go Foward\n");
    motor(0,52);
    motor(3,50);
    msleep(1500);
    ao();
    
    printf("Turn Left\n");
    motor(0,50);
    msleep(2000);
    ao();
    
    printf("Go Foward\n");
    motor(0,50);
    motor(3,50);
    msleep(1500);
    ao();
    
    printf("Turn Left\n");
    motor(0,50);
    msleep(2000);
    ao();
    
    printf("Go Foward\n");
    motor(0,50);
    motor(3,50);
    msleep(2000);
    ao();
    
    printf("Turn Left\n");
    motor(0,50);
    msleep(2500); 
    ao();
    
    printf("Go Foward\n");
    motor(0,50);
    motor(3,50);
    msleep(1500);
    ao();
    
     printf("Turn Left\n");
    motor(0,50);
    msleep(1500);
    ao();
    
    printf("Go Foward\n");
    motor(0,50);
    motor(3,50);
    msleep(2500);
    ao();
 // Can Two   
    printf("turn right\n");
    motor(3,50);
    msleep(1500);
    ao();
    
    printf("Go Foward\n");
    motor(0,50);
    motor(3,50);
    msleep(1500);
    ao();
    
    printf("turn right\n");
    motor(3,50);
    msleep(1500);
    ao();
    
    printf("Go Foward\n");
    motor(0,50);
    motor(3,50);
    msleep(1500);
    ao();
    
    printf("turn right\n");
    motor(3,50);
    msleep(2300);
    ao();

    printf("Go Foward\n");
    motor(0,50);
    motor(3,50);
    msleep(2500);
    
    printf("turn right\n");
    motor(3,50);
    motor(0,0);
    msleep(2800);
 
    //Can Three
     printf("Go Backwards\n");
    motor(0,-50);
    motor(3,-50);
    msleep(2500);
    
    printf("turn left\n");
    motor(0,50);
    motor(3,0);
    msleep(2500);
    
    printf("Go Foward\n");
    motor(0,50);
    motor(3,50);
    msleep(2000);
    
    printf("turn right\n");
    motor(0,0);
    motor(3,50);
    msleep(1500);
    
    printf("Go Foward\n");
    motor(0,50);
    motor(3,50);
    msleep(1500);
    
    printf("turn right\n");
    motor(0,0);
    motor(3,50);
    msleep(2000);
    
    printf("Go Foward\n");
    motor(0,50);
    motor(3,50);
    msleep(1500);
    
    printf("turn right\n");
    motor(0,0);
    motor(3,50);
    msleep(1500);
    
    printf("Go Foward\n");
    motor(0,50);
    motor(3,50);
    msleep(1500); 
    
    printf("turn right\n");
    motor(0,0);
    motor(3,50);
    msleep(1500);
    
    printf("Go Foward\n");
    motor(0,50);
    motor(3,50);
    msleep(1500); 
    
    printf("turn right\n");
    motor(0,0);
    motor(3,50);
    msleep(3000);
    
    printf("Go Foward\n");
    motor(0,50);
    motor(3,50);
    msleep(8000); 
    
    printf("11 by 3\n");
    printf("Hello World\n");
    return 0;
}
