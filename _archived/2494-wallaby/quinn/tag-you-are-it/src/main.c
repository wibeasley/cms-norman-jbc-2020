#include <kipr/botball.h>

int main()
{
    printf("tag you are it\n");
    
    
    printf("go straight\n");
    motor(0, 300);
    motor(3, 300);
    msleep(3000);
    
    printf("turn around");
    motor(0,40);
    motor(3,-40);
    msleep(3000);
    
    printf("move forward");
    motor(0, 300);
    motor(3, 300);
    msleep(3000);     
    
    printf("mission complete");
    
    
    
    
    
    return 0;
}
