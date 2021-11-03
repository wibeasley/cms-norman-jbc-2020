#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    printf("Pause movment\n");
        motor(0, 40);
    	motor(3, 40);
    	msleep(500);
    
    printf("Move forward.\n");
    motor(0, 4000);
    motor(3, 4000);
    msleep(2000);
    
    printf("Pause movement\n");
    motor(0,40);
    motor(3,40);
    msleep(500);
    
    printf("Move backward/n");
        motor(0,-4000);
        motor(3,-4000);
        msleep(2000);
    
    return 0;
}
