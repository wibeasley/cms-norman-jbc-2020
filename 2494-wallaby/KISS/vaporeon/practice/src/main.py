#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print "Hello World"

    print"pick up"
    set_servo_position(1, 1222)
    enable_servos()
    msleep(2000)    
        
    print"pick up"
    set_servo_position(0, 595)
    enable_servos()    
    msleep(2000) 
if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
