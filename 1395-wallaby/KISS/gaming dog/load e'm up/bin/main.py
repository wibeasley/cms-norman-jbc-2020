#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print "load e'm up"
     
    print "go forward"
    motor(0,30)    
    motor(3,32)    
    msleep(4500)    
        
    motor(0,-30)    
    motor(3,-32)    
    msleep(2750)    
    
    motor(0,0)    
    motor(3,32)    
    msleep(3000)
        
    motor(0,30)    
    motor(3,32)    
    msleep(3000)    
        
    motor(0,30)    
    motor(3,00)    
    msleep(4500)
        
    motor(0,30)    
    motor(3,33)    
    msleep(12000)    
        
    motor(0,-30)    
    motor(3,-33)    
    msleep(2000)    
    
    motor(0,30)    
    motor(3,00)    
    msleep(1500)
        
    motor(0,30)    
    motor(3,33)    
    msleep(7250)    
        
    motor(0,00)    
    motor(3,32)    
    msleep(2250)    
        
    motor(0,30)    
    motor(3,33)    
    msleep(7300)
        
    motor(0,00)    
    motor(3,32)    
    msleep(2500)    
        
    motor(0,30)    
    motor(3,33)    
    msleep(9700)
        
    motor(0,00)    
    motor(3,32)    
    msleep(2500)    
        
    motor(0,30)    
    motor(3,33)    
    msleep(5000)    
        
        
if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
