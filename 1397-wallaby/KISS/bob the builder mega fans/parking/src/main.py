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
    msleep(7500)    
        
    print "turn"          
    motor(3,00)    
    motor(0,40)    
    msleep(14000)   
   
    print "forward"          
    motor(3,30)    
    motor(0,34)    
    msleep(1000)    
        
    print "turn"          
    motor(3,30)    
    motor(0,00)    
    msleep(4000)       

    print "forward"          
    motor(3,30)    
    motor(0,30)    
    msleep(3000)    
        
        
        
        
        
        
        
 
if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
