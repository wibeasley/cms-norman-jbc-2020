#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print "load e'm up"
     
    print "go forward"
    motor(0,30)    
    motor(3,32)    
    msleep(4500)    
        
    motor(0,00)    
    motor(3,32)    
    msleep(2750)    
    
    motor(0,30)    
    motor(3,32)    
    msleep(4000)    
        
    motor(0,30)    
    motor(3,00)    
    msleep(4750)
        
    motor(0,30)    
    motor(3,33)    
    msleep(7000)    
        
        
        
if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
