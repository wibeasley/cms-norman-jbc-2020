#include <kipr/wombat.h>

int main()
{
    printf("Hello World\n");
    create3_connect();
    create3_drive_straight(0.75,0.25);
    create3_rotate_degrees(180, 45);
    create3_drive_straight(0.75,0.25);
    create3_rotate_degrees(180, 45);
    create3_wait();
    printf("Cliff 0: %d\n",create3_sensor_cliff(0));
    printf("Cliff 1: %d\n",create3_sensor_cliff(1));
    printf("Cliff 2: %d\n",create3_sensor_cliff(2));
    printf("Cliff 3: %d\n",create3_sensor_cliff(3));
    printf("IR 0: %d\n",create3_sensor_ir(0));
    printf("IR 1: %d\n",create3_sensor_ir(1));
    printf("IR 2: %d\n",create3_sensor_ir(2));
    printf("IR 3: %d\n",create3_sensor_ir(3));
    printf("IR 4: %d\n",create3_sensor_ir(4));
    printf("IR 5: %d\n",create3_sensor_ir(5));
    printf("IR 6: %d\n",create3_sensor_ir(6));
    printf("Bump 0: %d\n",create3_sensor_bump(0));
    printf("Bump 1: %d\n",create3_sensor_bump(1));
    printf("Bump 2: %d\n",create3_sensor_bump(2));
    printf("Bump 3: %d\n",create3_sensor_bump(3));
    msleep(1000);
    create3_wait();
    return 0;
}
