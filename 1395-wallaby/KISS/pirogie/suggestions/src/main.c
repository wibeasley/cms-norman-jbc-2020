#include <kipr/botball.h>
void move(char message[],double power_left,double power_right,double seconds){
    printf("%s\n",message);
    motor(0,power_left);
    motor(3,power_right);
    msleep(seconds*1000);
    
    return;
}
int main()
{
    move("spin\n",40,-40,4.2);
    move("slide back\n",-20,-20,0.5);
    return 0;
}
