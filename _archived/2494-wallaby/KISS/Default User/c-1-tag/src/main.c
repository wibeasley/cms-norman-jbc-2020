#include <kipr/botball.h>

int main()
{

    
printf("go forward\n");
motor(0,28);
motor(3,28);
msleep(6000);   
    
printf("turn right\n");
motor(0,15);
motor(3,60);     
msleep(10000);  

printf("go forward\n");
motor(0,28);
motor(3,28);
msleep(10000); 
return 0;
}