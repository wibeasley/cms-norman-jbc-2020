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
    move("green light",30,32,4.5);
    move("red light",0,0,2);
    move("green light",40,42,6);
    move("yellow light",0,30,3);
    move("green light",40,40,0.7);
    move("red light",0,0,2);
    move("green light",40,40,1.5);
    return 0;
}
