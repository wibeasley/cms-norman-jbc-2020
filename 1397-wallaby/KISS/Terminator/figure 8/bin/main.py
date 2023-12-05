#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print "Hello World"
        
    print "go straight"
    motor(0,30)
    motor(3,40)
    msleep(5500)
    print "turn left"
    motor(0,30)
    motor(3,0)
    msleep(3000)
    print "go straight"
    motor(0,30)
    motor(3,40)
    msleep(4000)
    print "turn right"
    motor(0,0)
    motor(3,30)
    msleep(2500)
    print "go forward"
    motor(0,30)
    motor(3,30)
    msleep(3000)
    print "turn right"
    motor(0,0)
    motor(3,30)
    msleep(4000)
    print "go forward"
    motor(0,30)
    motor(3,40)
    msleep(3000)
    print "turn right"
    motor(0,0)
    motor(3,30)
    msleep(4000)
    print "go forward"
    motor(0,30)
    motor(3,40)
    msleep(4000)
    print "turn left"
    motor(0,0)
    motor(3,40)
    msleep(3500)
    print "go forward"
    motor(0,30)
    motor(3,40)
    msleep(3000)
    print "turn left"
    motor(0,30)
    motor(3,0)
    msleep(4000)
    print "go forward"
    motor(0,30)
    motor(3,40)
    msleep(4000)
    print "turn right"
    motor(0,30)
    motor(3,0)
    msleep(3500)
    print "go forward"
    motor(0,30)
    motor(3,40)
    msleep(2500)
    print "turn left"
    motor(0,0)
    motor(3,40)
    msleep(3500)
    print "go forward"
    motor(0,30)
    motor(3,40)
    msleep(2000)

if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();