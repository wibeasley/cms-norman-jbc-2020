#include <kipr/botball.h>
#include <movement.h>

int main() {
    printf("will-01: movement encapsulated into functions.\n");
    rotate(-90);
    // rotate(-100);
    straight(90, .8, true);
    rotate(90);
    straight(90, .8, true);
    rotate(90);
    straight(90, .8, true);
    rotate(90);
    straight(90, .8, true);
    straight(0, .5, true);
    rotate(90);
    // straight(-40, 1.4, true);
    return 0;
}
