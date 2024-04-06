#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print "Hello World"

    print "forward"    
    motor(0,34)    
    motor(3,30)    
    msleep(3000)    
        
    print "spin"    
    motor(0,20)    
    motor(3,-20)    
    msleep(11500) 
     
    print "forward"    
    motor(0,30)    
    motor(3,30)
    msleep(2000)    
             
    print "spin"    
    motor(0,30)    
    motor(3,00)    
    msleep(9000) 
   
    print "backwards"    
    motor(0,-20)    
    motor(3,-20)
    msleep(9000)       
    
    print "spin"    
    motor(0,00)    
    motor(3,30)    
    msleep(9000)    
        
        
        
        
        
        
             
if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
