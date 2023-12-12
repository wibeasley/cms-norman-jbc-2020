#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print "Hello World"

    print "forward"          
    motor(3,30)    
    motor(0,34)    
    msleep(7000)    
        
    print "backward"          
    motor(3,-30)    
    motor(0,-34)    
    msleep(7000)    
        
    print "forward"   
    motor(3,40)   
    motor(0,45)    
    msleep(8000)    
        
              
        
        
       
        
if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
