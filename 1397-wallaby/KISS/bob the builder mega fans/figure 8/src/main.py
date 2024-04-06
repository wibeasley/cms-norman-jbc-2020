#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print "Hello World"
       
    print "forward please"    
    motor(0,37)    
    motor(3,30)    
    msleep(7000)      
   
        
        
    print "turn left"    
    motor(0,35) 
    motor(3,00)
    msleep(4000)         
        
        
        
    print "forward please"    
    motor(0,37)    
    motor(3,30)    
    msleep(4500)   
        
        
    print "turn right please"    
    motor(0,-30)    
    motor(3,30)    
    msleep(1500)
        
    print "forward please"    
    motor(0,37)    
    motor(3,30)    
    msleep(5000)   
    
 
        
        
    print "turn right please"    
    motor(0,-30)    
    motor(3,30)    
    msleep(1500)       
        
    print "forward please"    
    motor(0,37)    
    motor(3,30)    
    msleep(5500)  
        
 
    print "turn right please"    
    motor(0,-30)    
    motor(3,30)    
    msleep(2000)  
        
    print "forward please"    
    motor(0,37)    
    motor(3,30)    
    msleep(5000)      
   
    print "turn right please"    
    motor(0,-30)    
    motor(3,30)    
    msleep(1500)    
        
    print "forward please"    
    motor(0,37)    
    motor(3,30)    
    msleep(5000)        
        
    print "turn left please"            
    motor(0,35) 
    motor(3,00)
    msleep(3000)    
        
    print "forward please"    
    motor(0,37)    
    motor(3,30)    
    msleep(5000)  
        
    print "turn left please"            
    motor(0,35) 
    motor(3,00)
    msleep(3000)     
        
    print "forward please"    
    motor(0,37)    
    motor(3,30)    
    msleep(3000)
        
    print "turn right please"    
    motor(0,-30)    
    motor(3,30)    
    msleep(1500)
      
    print "forward please"    
    motor(0,37)    
    motor(3,30)    
    msleep(1000)    
        
        
        
        
        
        
        
if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
