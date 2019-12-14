#include <kipr/botball.h>

int main()
{
    printf("go backwards \n");//Step 1 
    motor(0, -80);
    motor(3, -90);
    msleep(3700);            
    
    printf("go turn left \n");//Step 2
    motor(0, -29);
    motor(3, -90);
    msleep(1800);

    
    printf("go backwards \n");//Step 3
  	motor(0, -80);
    motor(3, -90);
    msleep(800);   
        
    printf("go turn left \n");//step 4
    motor(0, -29);
    motor(3, -90);
    msleep(1800);
 
    printf("go backwards \n");//step 5
    motor(0, -80);
    motor(3, -90);
    msleep(3700);
    
    return 0;
}


