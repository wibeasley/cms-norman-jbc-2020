#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print "perfectly in the middle 1504 up 1045 open 1649 closed 965"
        
    set_servo_position(0,1504)
    set_servo_position(3,1649)
    msleep(500)
    enable_servos()
        
    motor(0,-53)
    motor(3,-50)
    msleep(1500)
        
    motor(0,0)
    motor(3,0)
    msleep(1000)
        
    set_servo_position(3,965)
    msleep(500)
    set_servo_position(0,1045)
    msleep(500)
        
    set_servo_position(0,1504)
    msleep(500)
    set_servo_position(3,1649)
    msleep(500)
    
if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
