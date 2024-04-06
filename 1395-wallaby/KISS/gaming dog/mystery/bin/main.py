#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print "Hello World"
    motor(3,32)
    motor(0,30)    
    msleep(7000)    
        
    motor(3,0)    
    motor(0,30)    
    msleep(1500)    
        
    motor(3,32)    
    motor(0,30)    
    msleep(3000)    
        
    motor(3,32)
    motor(0,0)    
    msleep(1500)    
        
    motor(3,32)    
    motor(0,30)    
    msleep(2000)    
        
if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
