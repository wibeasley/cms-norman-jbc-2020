#include <kipr/botball.h>

int main()
{
    printf("forword to line a\n");
    motor(0,43);
    motor(3,40);
    msleep(5000);
    
printf("pause on line a\n");
    motor(0,0);
    motor(3,0);
    msleep(2000);   
   
printf("forword to line b\n");
    motor(0,43);
    motor(3,40);
    msleep(7500);   

printf("turn to face line b\n");
    motor(0,42);
    motor(3,-40);
    msleep(7500);   
    
printf("forword to line b\n");
    motor(0,41);
    motor(3,40);
    msleep(2000);          

printf("pause on line b\n");
    motor(0,0);
    motor(3,0);
    msleep(2000);   

printf("forword past line b\n");
    motor(0,42);
    motor(3,40);
    msleep(2000);              
    
    printf("turn to face line c\n");
    motor(0,42);
    motor(3,-40);
    msleep(7300);   
    
printf("forword to line c\n");
    motor(0,40);
    motor(3,40);
    msleep(8000);   

printf("pause on line c\n");
    motor(0,0);
    motor(3,0);
    msleep(2000);   

printf("forword to line d\n");
    motor(0,43);
    motor(3,40);
    msleep(4000);   

printf("pause on line d\n");
    motor(0,0);
    motor(3,0);
    msleep(2000);      
    
    return 0;
}
