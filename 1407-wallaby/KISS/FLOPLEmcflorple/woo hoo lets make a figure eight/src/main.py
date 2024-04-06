#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print "Do I really have to do this I am so tired. :("
    motor(0,-30)
    motor(3,-30)
    msleep(2500)
        
    motor(0,0)
    motor(3,-30)
    msleep(2000)
        
    motor(0,-30)
    motor(3,-30)
    msleep(1000)
        
    motor(0,-30)
    motor(3,0)
    msleep(2300)
        
    motor(0,-30)
    motor(3,-30)
    msleep(2000)
    
    motor(0,-30)
    motor(3,0)
    msleep(2500)
        
    motor(0,-30)
    motor(3,-30)
    msleep(6500)
        
    motor(0,0)
    motor(3,-30)
    msleep(3500)
       
    motor(0,-30)
    motor(3,-30)
    msleep(3000)
        
    motor(0,0)
    motor(3,-30)
    msleep(2500)
        
    motor(0,-30)
    motor(3,-30)
    msleep(3000)
        
    motor(0,0)
    motor(3,-30)
    msleep(500)
    
    motor(0,-30)
    motor(3,-30)
    msleep(3000)
        
    motor(0,-30)
    motor(3,0)
    msleep(2500)
        
    motor(0,-30)
    motor(3,-30)
    msleep(3000)
        
    motor(0,0)
    motor(3,-30)
    msleep(500)
        
    motor(0,-30)
    motor(3,-30)
    msleep(2000)

if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
