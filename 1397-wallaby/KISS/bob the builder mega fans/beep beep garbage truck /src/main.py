#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print "Hello World"

     
    print "forward"    
    motor(0,37)    
    motor(3,30)    
    msleep(5000)      
        
        
    print "backward"    
    motor(0,-30)    
    motor(3,-30)    
    msleep(2000)      
        
               
    print "turn"    
    motor(0,30)    
    motor(3,-30)    
    msleep(1500)     
        
        
    print "forward"    
    motor(0,37)    
    motor(3,30)    
    msleep(3000)            


    print "turn"    
    motor(0,-30)    
    motor(3,30)    
    msleep(1500)     
               

    print "forward"    
    motor(0,37)    
    motor(3,30)    
    msleep(8000)         
        
         
         
        
   
      
        
        
        
        
if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
