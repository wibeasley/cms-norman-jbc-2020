#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print "Hello World"




    print "forward"
    motor(0,37) 
    motor(3,30)
    msleep(10000)
        
    print "turn left"    
    motor(0,35) 
    motor(3,00)
    msleep(4000)    
        
    print "forward"    
    motor(0,37)    
    motor(3,30)    
    msleep(3500)
      
    print "turn left"
    motor(0,30)    
    motor(3,00)    
    msleep(4500)    
        
    print "forward"
    motor(0,50)    
    motor(3,35)    
    msleep(9000)    
        
            
if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
        
        