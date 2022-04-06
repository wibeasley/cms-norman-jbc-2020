#include <kipr/botball.h>
void move(char message[], double power_left, double power_right, double seconds){
      printf("%s\n",message);
      motor(0, power_left);
      motor(3, power_right);
      msleep(seconds*1000);
      return;
}
int main()
{
    move("Forward", 23, 25, 11);
    move("Back-Wards", -23, -25, 11);
    move("Forward", 45, 40, 10);
    move("Slightly turn right", 0, 30, 1);
    move("Go FoRwArD", 23, 25, 1.5);
    return 0;
}
