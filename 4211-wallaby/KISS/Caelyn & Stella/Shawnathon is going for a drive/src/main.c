#include <kipr/botball.h>

int main()
{
    // Just pretend it's miles per hour
    printf("<Shawnathon> Let's go for a drive!\n");
    motor(0, 24);
    motor(3, 27);
    msleep(5000);
    
    printf("<Shawnathon> Let's look both ways!\n");
    motor(0, 0);
    motor(3, 0);
    msleep(5000);
    
    printf("<Shawnathon> Now, turn right on Snowball St.!\n");
    motor(0, 0);
    motor(3, 20);
    msleep(6500);
    
    printf("<Shawnathon> Good! Now let's go to the Pizza Shuttle! I wanna get some Hawaiian Pizza!\n");
    motor(0, 24);
    motor(3, 27);
    msleep(5500);
    
    printf("<Shawnathon> Let's turn right! We're almost there!\n");
    motor(0, 0);
    motor(3, 20);
    msleep(6500);
    
    printf("<Shawnathon> Come on we're almost there =)\n");
    motor(0, 30);
    motor(3, 33);
    msleep(9000);
    return 0;
}
