#!/usr/bin/python
import os, sys
from wallaby import *

def main():
print " go forward "
    motor(0,30)
    motor(3,31)
    msleep(6000)

    print " Lift claw  "      
    set_servo_position(0,1000)   
    enable_servos()   
    msleep(1000)

    print " close claw "    
    set_servo_position(1,90)    
    msleep(1000)


    print " lower claw "       
    set_servo_position(0,1640)       
    msleep(1000)       


    motor(0,30)
    motor(3,31)
    msleep(9000)


    if __name__== "__main__":
sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
