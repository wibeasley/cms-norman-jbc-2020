#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print "figure eight"
        
    print "go forward"    
    motor(0, 30)
    motor(3, 30)
    msleep(9900)
    
    print "rest"
    motor(0, 0)
    motor(3, 0)
    msleep(0200)
        
    print "pivot right 1"    
    motor(0, 30)
    motor(3, -30)
    msleep(2000)
    
    print "go forward"    
    motor(0, 20)
    motor(3, 20)
    msleep(8000)
    
    print "pivot left 1"    
    motor(0, -30)
    motor(3, 30)
    msleep(2010)
    
    print "go forward"    
    motor(0, 30)
    motor(3, 30)
    msleep(7000)
    
    
    print "pivot left 2"    
    motor(0, -30)
    motor(3, 30)
    msleep(2000)
        
    print "go forward"    
    motor(0, 20)
    motor(3, 20)
    msleep(8000)
        
if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
