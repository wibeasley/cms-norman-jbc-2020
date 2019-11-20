
int rotate (double degrees)
{
        int direction = copysign(1.0, degrees);
        int power_left = -direction * power;
        int power_right = direction * power * .99;
        double full_rotation_in_seconds = 6.775;
    
        // the duration required for the desired rotation.
        double seconds = (full_rotation_in_seconds * direction) * (degrees / 180.0);
        
        // the is block is the primary purposeof the function.
        printf("move %f degrees (consunmes %f seconds).\n",degrees, seconds);
        motor(0, power_left);
        motor(3, power_right);
        msleep (seconds * 1000);
    printf("Hello World\n");
    return 0;
}
