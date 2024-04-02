#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print "Precision parking"
    print "start L0"    
    
    print "forward"
    motor(0, 31)
    motor(3, 30)
    msleep(18000)
        
        
    print "pivot"
    motor(0, -30)
    motor(3, 30)
    msleep(1900)
        
    
    print "forward"
    motor(0, 30)
    motor(3, 30)
    msleep(3500)
        
        
    print "pivot"
    motor(0, -30)
    motor(3, 30)
    msleep(1800)

        
    print "forward"
    motor(0, 30)
    motor(3, 30)
    msleep(18000)
    
if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
