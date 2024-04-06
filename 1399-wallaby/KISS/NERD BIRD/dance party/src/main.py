#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print "Hello Penny"

    "go forward"    
    motor(0,30)    
    motor(3,30)    
    msleep(8000)    
        
    "pivot"  
    motor(0,30)   
    motor(3,-30)   
    msleep(2000)    
    
    "go forward"    
    motor(0,30)    
    motor(3,30)    
    msleep(4000)    
        
        
    "pivot"    
    motor(0,30)
    motor(3,-30)    
    msleep(4000)    
        
    "go forward"    
    motor(0,30)    
    motor(3,30)    
    msleep(7000)    
        
    "pivot"    
    motor(0,-30)    
    motor(3,30)    
    msleep(4000)    
        
        
        
        
        
        
        
        
        
        
        
if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
