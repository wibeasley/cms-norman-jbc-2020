#include <kipr/botball.h>

int main()
{
    printf("go sraight\n");// start position q3    1
    motor (0,45);
    motor (3,45);
    msleep(7800);
    
    printf("turn\n"); //1
    motor (0,1);
    motor (3,35);
    msleep(1500);
    
    printf("go sraight\n");//2
    motor (0,45);
    motor (3,45);
    msleep(1800);
    
    printf("turn\n");//2
    motor (0,1);
    motor (3,45);
    msleep(2300);
    
    printf("go sraight\n");//3
    motor (0,45);
    motor (3,45);
    msleep(1900);
    
    printf("turn\n");//3
    motor (0,1);
    motor (3,45);
    msleep(2300);
    
    printf("go sraight\n");//4
    motor (0,45);
    motor (3,45);
    msleep(2000);
    
    printf("turn\n");//4
    motor (0,9);
    motor (3,45);
    msleep(3800);
    
    printf("go sraight\n");//5
    motor (0,45);
    motor (3,45);
    msleep(2300);
    
    printf("turn\n");//5
    motor (0,1);
    motor (3,45);
    msleep(2200);
  
    printf("turn\n");//6
    motor (0,45);
    motor (3,1);
    msleep(1800);
    
    printf("go straight\n");//6
    motor (0,45);
    motor (3,45);
    msleep(1800);
    
    printf("turn\n");//7
    motor (0,54);
    motor (3,1);
    msleep(2000);
    
    printf("go straight\n");//8
    motor (0,45);
    motor (3,45);
    msleep(2000);
    
    
    printf("turn\n");//8
    motor (0,54);
    motor (3,1);
    msleep(2000);
    
    printf("go straight\n");//9
    motor (0,45);
    motor (3,45);
    msleep(2500);
    
    printf("turn\n");//9
    motor (0,54);
    motor (3,1);
    msleep(3000);
    
    printf("go straight\n");//10
    motor (0,45);
    motor (3,45);
    msleep(2500);
    
    printf("go straight\n");
    motor (0,45);
    motor (3,45);
    msleep(3800);
    
    printf("turn\n");//9
    motor (0,54);
    motor (3,1);
    msleep(2000);
    
    printf("go straight\n");
    motor (0,45);
    motor (3,45);
    msleep(2500);
    
    printf("turn\n");//9
    motor (0,54);
    motor (3,1);
    msleep(2000);
    
    printf("go straight\n");
    motor (0,45);
    motor (3,45);
    msleep(2500);
    
    printf("turn\n");//9
    motor (0,54);
    motor (3,1);
    msleep(2500);
    
    
    printf("go straight\n");
    motor (0,45);
    motor (3,45);
    msleep(13000);
    return 0;
}    