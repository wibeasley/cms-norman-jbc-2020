#include <kipr/botball.h>

int main()
{
    printf("Go forward =D\n");
    motor(0, 35);
    motor(3, 40);
    msleep(6550);
    
    printf("Take a pause =D\n");
    motor(0, 0);
    motor(3, 0);
    msleep(2000);
    
    printf("Go backward =D\n");
    motor(0, -35);
    motor(3, -40);
    msleep(6550);
    
    printf("Take another pause =D\n");
    motor(0, 0);
    motor(3, 0);
    msleep(2000);
    
    printf("Go forward again =D\n");
    motor(0, 35);
    motor(3, 40);
    msleep(3000);
    
    printf("Turn right =D\n");
    motor(0, 0);
    motor(3, 40);
    msleep(3000);
    
    printf("Go forward for the 3rd time =D\n");
    motor(0, 10);
    motor(3, 11);
    msleep(3500);
    
    printf("How many breaks do you need? p$(\n");
    motor(0, 0);
    motor(3, 0);
    msleep(1000);
    
    printf("Turn left =D");
    motor(0, 40);
    motor(3, 0);
    msleep(3000);
    
    printf("Okay sorry, you're sleep deprived. Here!\n");
    motor(0, 0);
    motor(3, 0);
    msleep(1000);
    
    printf(" NoW Go FoWard >=(\n");
    motor(0, 35);
    motor(3, 40);
    msleep(8200);
    
    printf("jeeezzzzzz fine have a break\n");
    motor(0, 0);
    motor(3, 0);
    msleep(1000);
    
    printf("now turn leeeffftttt\n");
    motor(0, 40);
    motor(3, 0);
    msleep(3000);
    
    printf(" i. want. longer. breaks.\n");
    motor(0, 0);
    motor(3, 0);
    msleep(1500);
    
    printf(" HiyathereIexistlet'sgoforwardshallwe?\n");
    motor(0, 35);
    motor(3, 30);
    msleep(8000);
    
    return 0;
}