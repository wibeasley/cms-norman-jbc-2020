#include <kipr/botball.h>
void move(char message[], double power_left, double power_right,double seconds){
    printf("%s\n",message);
    motor(0, power_left);
    motor(3, power_right);
    msleep(seconds*1000);
    return;
}
int main()
{
    move("move forward)-", 30,+30,3.4);
    move("pivot right)-", 30,+3,5.3);
    move("pivot left)-", 3,+30,5);
    return 0;
    
}
