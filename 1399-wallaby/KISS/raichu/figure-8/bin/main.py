#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print "Figure-8"
        
    print "go forward"
    motor(0, 30)
    motor(3, 30)
    msleep(9095)    
  
        
    print "go pivot right"
    motor(0, 30)
    motor(3, -30)
    msleep(1500)    
          
    print "go forward"
    motor(0, 30)
    motor(3, 30)
    msleep(6050)    

    print "go pivot left"
    motor(0, -15)
    motor(3, 18)
    msleep(2500)    
 
    print "go forward"       
    motor(0, 30)
    motor(3, 30)
    msleep(6050)
       
    print "go pivot left"
    motor(0, -18)
    motor(3, 30)
    msleep(2510)    

    
    
          

if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
