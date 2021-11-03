#include <kipr/botball.h>

int main()
{
  motor(0,45);
  motor(3,45);
  msleep(6350);
    
  motor (0,-45);
  motor (3,-45);
  msleep(6400);
  return 0;
}
