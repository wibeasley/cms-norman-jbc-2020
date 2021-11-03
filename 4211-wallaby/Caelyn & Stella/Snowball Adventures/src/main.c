#include <kipr/botball.h>

int main()
{
    printf("RUN BUDDY RUN FROM THE EVIL ALIENS!\n");
    motor(0, 20);
    motor(3, 22);
    motor(0, 20);
    motor(3, 22);
    msleep(10000);
    return 0;
}
