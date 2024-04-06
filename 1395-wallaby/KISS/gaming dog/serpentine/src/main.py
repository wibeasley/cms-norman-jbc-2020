#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print "Hello World"

if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();

    motor(0,30)    
    motor(3,32)    
    msleep(4500)

    motor(0,30)    
    motor(3,0)    
    msleep(4900)
        
    motor(0,30)    
    motor(3,32)    
    msleep(3000)    
        
    motor(0,0)    
    motor(3,32)    
    msleep(4500)    
        
    motor(0,30)    
    motor(3,32)    
    msleep(1750)    
        
    motor(0,0)    
    motor(3,32)    
    msleep(4500)    
        
    motor(0,30)    
    motor(3,0)    
    msleep(4750)    
        
    motor(0,30)    
    motor(3,32)    
    msleep(2000)    
        
    motor(0,30)    
    motor(3,0)    
    msleep(2500)    
        
    motor(0,30)    
    motor(3,32)    
    msleep(4000)    
        
        
        
        
        
        
        
        












































