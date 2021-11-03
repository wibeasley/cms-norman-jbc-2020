#include <kipr/botball.h>

int main() {
    printf("move forward\n"); //start between the T and the U
    motor (0,30);
    motor(3,31);
    msleep (10000);
 printf("move backwards\n");
    motor (0,-30);
    motor(3,-30);
    msleep (10000);
  printf("move forward\n");
  motor(0,30);
  motor(3,30);
msleep(10000);
     
     printf("turn right\n");
 motor(0,20);
    motor(3,30);
    msleep(6000);
/* printf("move backwards\n");
  motor(0,-20);  
 motor(3,-20);        
 msleep(12000);*/       
    
  return 0;
}
