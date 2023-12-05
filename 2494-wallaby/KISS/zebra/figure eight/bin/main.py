#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print "go straight"
    motor (0,31)
    motor (3,30)
    msleep(8000)
        
    " turn right"
    motor (0,30)
    motor (3,0)
    msleep(4000)
    
    "go straight"    
    motor (0,25)
    motor (3,25)
    msleep(5000)
        
    "turn left"    
    motor (0,0)
    motor (3,27)
    msleep(4000)
        
    "go straight"    
    motor (0,20)  
    motor (3,20) 
    msleep(6000)
        
    "turn left"
    motor (0,0)
    motor (3,27)
    msleep(4000)
        
    "go stright"
    motor (0,25)
    motor (3,25)
    msleep(5000)
        
    "turn left"
    motor (0,0)    
    motor (3,27)
    msleep(4000)
        
    "go stright"
    motor (0,25)
    motor (3,25)
    msleep(5000)
        

        

if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
