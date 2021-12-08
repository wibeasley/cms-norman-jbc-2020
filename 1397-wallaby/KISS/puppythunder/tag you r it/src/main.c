#include <kipr/botball.h>

int main()
{
printf("Hello World\n");
motor(0, 40);
motor(3, 40);
msleep(1000);

motor(0, -40);
motor(3, -40);
msleep(9500);
    return 0;
}
