#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    
    print "Hello World"
    
    "go forward"    
    motor(0,35)
    motor(3,35)
    msleep(8000)
    
    "pivot"
    motor(0,30)   
    motor(3,-30)   
    msleep(2000)
        
    "go forward"    
    motor(0,30)    
    motor(3,30)    
    msleep(5500)    

    "pivot"    
    motor(0,-30)   
    motor(3,30)    
    msleep(1800)   
        
    "go forward"    
    motor(0,45)    
    motor(3,45)    
    msleep(5000)    
        
    "pivot"
    motor(0,-30)    
    motor(3,30)    
    msleep(2000)    
       
    "go forward"    
    motor(0,30)    
    motor(3,30)    
    msleep(5500)    
        
    "pivot right"   
    motor(0,-30)   
    motor(3,30)   
    msleep(2000)   
        
    "go forward"    
    motor(0,30)    
    motor(3,30)    
    msleep(5000)    
        
    "pivot"     
    motor(0,-30)    
    motor(3,30)    
    msleep(2000)    
   
    "go forward"    
    motor(0,30)    
    motor(3,30)    
    msleep(5000)    
   
    "pivot"     
    motor(0,30)     
    motor(3,-30)     
    msleep(2200)
                        
        
        
    "go forward"    
    motor(0,30)    
    motor(3,30)    
    msleep(12500)    
        
        
        
        
        
        
        
        
        
if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
