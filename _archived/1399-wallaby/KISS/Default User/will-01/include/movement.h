// Define a boolean/binary data type.
typedef enum { false, true} bool;
// #include <stdbool.h>

int straight( int power, double seconds, bool taper ) {
    printf("Move at %i power for %f seconds.\n", power, seconds);

    // Balance any differences between the wheels be decreasing power to one of them.
    int power_left  = power * 1.0;    // Proportion of the power to the left wheel.
    int power_right = power * .95;    // Proportion of the power to the right wheel.
    int i = 0;

    // Gradually increase the power, to reduce jerkiness.
    if( taper ) {
        while( i < 10 ) {
            // printf("i: %i at power %f.\n", i, power_left * (i / 10.0));
            motor(0, power_left  * (i / 10.0));
            motor(3, power_right * (i / 10.0));
            msleep(50);
            i++;
        }
        // printf("Stop taper.\n");
    }

    // These three lines are the primary purpose of this function.
    motor(0, power_left);
    motor(3, power_right);
    msleep(seconds * 1000);

    // Gradually decrease the power, to reduce jerkiness.
    if( taper ) {
        i = 10;
        while( i > 0 ) {
            // printf("i: %i at power %f.\n", i, power_left * (i / 10.0));
            motor(0, power_left  * (i / 10.0));
            motor(3, power_right * (i / 10.0));
            msleep(50);
            i--;
        }
        // printf("Stop taper.\n");
    }

    ao();          // Turn *a*ll motors *o*ff.
    return 0;      // Return code for success.
}

int rotate( double degrees ) {
    int direction = copysign(1.0, degrees);         // Posiitve values are clockwise
    int power = 25;                                 // Arbitrary value that's doesn't jerk around the machine.
    int power_left  = -direction * power;           // Power & direction to the left wheel.
    int power_right =  direction * power * .99;     // Power & directoin to the right wheel.
    double full_rotation_in_seconds = 6.775;        // Duration of a full pivot at the specified power.

    // The duration required for the desired rotation.
    double seconds = (full_rotation_in_seconds * direction) * (degrees / 360.0);

    // This block is the primary purpose of the function.
    printf("Move %f degrees (consumes %f seconds).\n", degrees, seconds);
    motor(0, power_left);
    motor(3, power_right);
    msleep(seconds * 1000);

    return 0;      // Return code for success.
}
