#include <kipr/botball.h>

int main()
{
printf("straight\n");
motor(0, 35);
motor(3, 40);
msleep(10000);

motor(0, -40);
motor(3, -40);
msleep(9500);
    return 0;
}
