#include <kipr/botball.h>

void move(char message[],double power_left,double power_right, double seconds) {
	printf("%s\n",message);   
    motor(0,power_left);
    motor(3,power_right);
    msleep(seconds*1000);
     return; 
}    
int main()
{
     move ("move forward",31,30,10);   
     move ("pause",0,0,5);
     move ("move backword",-31,-30,8);
     move ("move forward",31,30,15);
    return 0;
}
