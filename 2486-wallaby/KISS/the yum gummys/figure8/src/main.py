#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print "Hello Ripley"
        
    motor(0,30)
    motor(3,30)
    msleep(8500)
        
        
    print "pivot right"
    motor(0,30)
    motor(3,00)
    msleep(3000)
    
        
    print "go forward"
    motor(0,30)
    motor(3,30)
    msleep(4070)
    
        
    print "pivot left"
    motor(0,00)
    motor(3,30)
    msleep(4005)
        
    print "go forward"
    motor(0,30)
    motor(3,30)
    msleep(5000)
        
    print "pivot left"
    motor(0,00)
    motor(3,30)
    msleep(4035)
        
    print "go forward"
    motor(0,30)
    motor(3,30)
    msleep(4050)
        
    print "pivot left"
    motor(0,00)
    motor(3,30)
    msleep(4035)
        
    print "go forward"
    motor(0,30)
    motor(3,30)
    msleep(5000)
        
    print "pivot left"
    motor(0,00)
    motor(3,30)
    msleep(3080)
if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
