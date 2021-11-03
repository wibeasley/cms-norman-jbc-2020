#include <kipr/botball.h>

int main()
{
    servos(1378,952,500);                   //set servos
    servos(1024,952,200);                   //set servos
    move(-54,-50,2300);                     //go backward
    move(54,-50,1500);                    //turn right
    servos(724,1602,200);                  //set servos
    move(54,50,1800);                       //go forward 
    servos(1378,1602,800);                 //set servos
    servos(1378,952,500);                   //set servos
    servos(1024,952,200);                   //set servos
    move(54,-50,1850);                        // turn right
    move(54,50,5500);                       // go forward
    servos(1378,1602,800);                 //set servos
    servos(1378,952,500);                   //set servos
    servos(1024,952,200);                   //set servos
    move(-54,-50,2300);                     //go backward
    
    printf("Hello World\n");
    return 0;
}
