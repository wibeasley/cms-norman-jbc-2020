#include <kipr/botball.h>

int main(){

    printf("go straight\n");
    motor(0,50);
    motor(3,50);
    msleep(5000);

    printf("go straight\n");
    motor(0,20);
    motor(3,20);
    msleep(1000); 

    printf("go straight\n");
    motor(0,-40);
    motor(3,-40);
    msleep(4000);

    printf("go straight\n");
    motor(3,0);    
    motor(0,30);
    msleep(5000);

    printf("go straight\n");
    motor(0,40);    
    motor(3,40);
    msleep(3000);

	printf("turn right\n");
    motor(3,40);
    motor(0,0);
    msleep(3000);

    printf("go straight\n");
    motor(3,40);
    motor(0,40);
    msleep(9000);
    
    printf("turn right\n");
    motor(3,40);
    motor(0,0);
    msleep(4000);

    printf("go straight\n");
    motor(3,40);
    motor(0,40);
    msleep(2000);
     
    printf("turn right\n");
    motor(3,40);
    motor(0,0);
    msleep(2000);
    
    printf("go straight\n");
    motor(3,40);
    motor(0,40);
    msleep(2000);
    
    return 0;
   
 }