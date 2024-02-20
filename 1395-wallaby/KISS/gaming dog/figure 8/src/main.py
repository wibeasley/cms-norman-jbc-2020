#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print "figure 8"

    print "go forward"    
        
    motor(3,32)    
    motor(0,30)    
    msleep(6000)    
        
    motor(3,00)    
    motor(0,30)    
    msleep(2500)    
        
    motor(3,32)    
    motor(0,30)    
    msleep(3500)    
        
    motor(3,32)    
    motor(0,00)    
    msleep(2400)   
    
    motor(3,32)
    motor(0,30)  
    msleep(3500)    
       
    motor(3,32)  
    motor(0,00)   
    msleep(2500)    
        
    motor(3,32)
    motor(0,30)    
    msleep(3500)    
        
    motor(3,30)    
    motor(0,00)    
    msleep(3000)    
        
    motor(3,32)
    motor(0,30)    
    msleep(4000) 
           
    motor(3,32)
    motor(0,00)       
    msleep(2480)       
           
    motor(3,32)
    motor(0,30)    
    msleep(2800)       
           
    motor(3,00)
    motor(0,30)    
    msleep(3000)    
        
    motor(3,32)
    motor(0,30)    
    msleep(2500)    
        
    motor(3,00)
    motor(0,30)    
    msleep(2350)    
        
    motor(3,32)
    motor(0,30)    
    msleep(3000)    
        
    motor(3,32)
    motor(0,00)    
    msleep(2400)    
        
    motor(3,32)
    motor(0,30)    
    msleep(3000)    
        
        
        
        
        
        
        
        
        
if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
