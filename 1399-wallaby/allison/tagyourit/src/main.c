#include <kipr/botball.h>

int main()
{
     
    printf(" forward \n");
        motor(5, 40); //motor 3 turn on at 40%
    	motor(5, 40); //motor 0 turn on at 40%
    	msleep(1000); //  run for 10 seconds
     
    return 0;
}

