#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print "Hello World"
        
    print "Grabby Grabby"
    enable_servos()
    set_servo_position(1, 310)
    set_servo_position(2, 1564)
    msleep (1000)

    set_servo_position(1, 1215)
    set_servo_position(2, 1564)
    msleep (1000)

    set_servo_position(1, 1215)
    set_servo_position(2, 1003)
    msleep (1000)
          
    set_servo_position(1, 619)
    set_servo_position(2, 656)    
    motor(0, 200)
    motor(3, 0)
    msleep(4000)
        
    print "run"
    set_servo_position(1, 619)
    set_servo_position(2, 656)
    motor(0, 50)
    motor(3, 50)
    msleep(5000)
        
    set_servo_position(1, 1196)
    set_servo_position(2, 656)
    msleep(500)



if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main()

    
