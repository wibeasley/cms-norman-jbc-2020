#include <kipr/botball.h>

int main()
{

    
printf("go forward\n");
motor(0,28);
motor(3,28);
msleep(12000);   
    
printf("turn right\n");
motor(0,18);
motor(3,60);     
msleep(9000);  

printf("go forward\n");
motor(0,28);
motor(3,28);
msleep(6000);
    
printf("go left\n");
motor(0,60);
motor(3,18);
msleep(5000);

printf("go forward\n");
motor(0,16);
motor(3,16);
msleep(10000);

printf("turn left");
motor(0,60);
motor(3,18);
msleep(9000);

printf("turn right");
motor(0,18);
motor(3,60);
msleep(4000);

printf("go forward");
motor(0,28);
motor(3,28);
msleep(16000);    
    return(0);
}
