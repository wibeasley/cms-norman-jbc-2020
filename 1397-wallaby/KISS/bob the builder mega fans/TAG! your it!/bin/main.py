#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print "Hello World"

        
    print "forward please"    
    motor(0,37)    
    motor(3,30)    
    msleep(7000)     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
