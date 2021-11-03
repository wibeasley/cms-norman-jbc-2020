#include <kipr/botball.h>

int main() {
printf("go forward #1\n");
motor(3,30);
 motor(0,30);
msleep(10000);     
  
printf("turn right #2\n");
motor(3,30);
motor(0,10);
 msleep(6000);  

printf("go forward #3\n");
motor(3,15);
motor(0,15); 
msleep(1000);
 
printf("turn left #4\n");
motor(0,35);
 motor(3,15);
msleep(23000);
printf("go forward #5\n");
motor(3,30);
motor(0,30); 
msleep(6000);
printf("turn right #6\n");
motor(3,30);
motor(0,10);
 msleep(5000);  
printf("go forward #7\n");
motor(3,35);
motor(0,35); 
msleep(7000);

 
 return 0;
}










