#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print "go straight 1"
    print motor (0,30)
    print motor (3,30)  
    print msleep(3000)            

    print "turn right 1"
    print motor (0,20)
    print motor (3,0)    
    print msleep(4000)   
    
    print "go straight 2"    
    print motor (0,34)    
    print motor (3,35)    
    print msleep(3000)    
     
    print "turn left 1"   
    print motor (0,0)    
    print motor (3,35)
    print msleep(7000)    
     
    print "go straight 3"
    print motor (0,20)
    print motor (3,20)
    print msleep(4000)
    
    print "turn left 2"
    print motor(0,30) 
    print  motor(3,0)
    print msleep(2000)
        
    print "go straight 4" 
    print motor(0,20)
    print motor(3,20)
    print msleep(5000) 
   
    print"turn left 3" 
    print motor(0,0)
    print motor(3,45) 
    print msleep(9000)
        
    print"go straight 5"
    print motor(0,30)
    print motor(3,30)
    print msleep(7000)
    
    print"turn left 4"
    print motor(0,0)
    print motor(3,45)
    print msleep(7000)
        
      
        
        
        
        
        
        
        
        
if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
