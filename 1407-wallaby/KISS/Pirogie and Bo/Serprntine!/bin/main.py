#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print "Hissssssss"
    
    motor(0,50)
    motor(3,54)
    msleep(2000)    

    motor(0,50)
    motor(3,0)
    msleep(1800)    
    
    motor(0,50)
    motor(3,54)    
    msleep(2000)    
     
    motor(0,0)
    motor(3,54)
    msleep(3000)
    
    motor(0,50)
    motor(3,54)
    msleep(1000)    
	
    motor(0,50)
    motor(3,0)
    msleep(400)    
        
    motor(0,50)
    motor(3,54)
    msleep(1000)    
    
    motor(0,50)
    motor(3,0)
    msleep(3000)
        
    motor(0,50)
    motor(3,54)
    msleep(700)
        
    motor(0,0)
    motor(3,54)
    msleep(1000)
        
    motor(0,50)
    motor(3,54)
    msleep(1000)
        
if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
