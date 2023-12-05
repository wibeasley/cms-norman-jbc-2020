#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print "Hello World"
    motor(1, 50)
    motor(3, 50)
    msleep(4000)
        
    motor(1,-50)
    motor(3, 50)
    msleep(1000)
        
    motor(1, 50)
    motor(3, 50)
    msleep(4000)
        
    motor(1, 50)
    motor(3, -50)
    msleep(900)
        
    motor(1, 50)
    motor(3, 50)
    msleep(3000)
        
    motor(1, 50)
    motor(3, 50)
    msleep(1000000)       
    
        
if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
