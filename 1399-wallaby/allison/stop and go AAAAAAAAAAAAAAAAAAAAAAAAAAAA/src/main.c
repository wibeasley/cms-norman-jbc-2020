#include <kipr/botball.h>

int main()
{  printf(" straight to line A\n");
    motor(0, 40);
    motor(3, 40);
    msleep(5000); 
    
    printf(" pause on line A\n ");
    motor(0, 0);
    motor(3, 0);
    msleep(2000);
    
    printf("  go to the end of the mat\n");
    motor(0, 40);
    motor(3, 40);
    msleep(9000);  
    
    printf(" pivot left\n");
    motor(0, -20);
    motor(3,  20);
    msleep(3000);  
    printf("Hello World\n");
    return 0;
}
