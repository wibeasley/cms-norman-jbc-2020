#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print "go straight"
    motor (0,30)
    motor (3,30)  
    msleep(2000)            

    print "turn right"
    motor (0, 20)
    motor (3, 0)    
    msleep(4000)   
    
    print "go straight"    
    motor (0, 34)    
    motor (3, 35)    
    msleep(3000)    
     
    print "turn left"   
    motor (0, 0)    
    motor (3, 35)
    msleep(3000)    
     
    print "go straight"
    motor (0, 20)
    motor (3, 20)
    msleep(4000)
    
    print "turn left"
    motor(0, 30) 
    motor(3, 0)
    msleep(2000)
        
    print "go straight" 
    motor(0,20)
    motor(3,20)
    msleep(3000) 
   
    print"turn right" 
    motor(0,0)
    motor(3,30) 
    msleep(9000)
        
    print"go straight"
    motor(0,30)
    motor(3,30)
    msleep(5000)
    
    print"turn left"
    motor(0,0)
    motor(3,45)
    msleep(3000)
        
      
        
if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
