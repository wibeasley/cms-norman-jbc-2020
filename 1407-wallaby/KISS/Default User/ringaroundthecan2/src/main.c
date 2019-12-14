#include <kipr/botball.h>

int main() {
    printf("moves motors 1\n");
    motor(0,55);
    motor(3,50);
    msleep(4000);
    
    printf("turns motors 1\n");
    motor(0,50);
    motor(3,10);
    msleep(4500);
    
    printf("moves motors 2\n");
    motor(0,55);
    motor(3,50);
    msleep(4500);
    return 0;
}
