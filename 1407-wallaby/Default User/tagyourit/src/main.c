#include <kipr/botball.h>

int main()
{
  motor(0,45);
  motor(3,40);
  msleep(6500);
  motor(0,-45);
  motor(3,-40);
  msleep(6500);
  return 0;
}
