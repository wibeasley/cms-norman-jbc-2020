#include <kipr/botball.h>

int main()
{
motor(0,50); //turn on motor 0 at 50%
motor(2,50); //turn on motor 2 at 50%
msleep(4300); //wait time in milliseconds 

motor(2,-50); //turn on motor 2 in reverse at 50%
motor (0,-50);//turn on motor 0 in reverse at 50%
msleep(5000);//wait time in milliseconds
  ao();
    return 0;
}
