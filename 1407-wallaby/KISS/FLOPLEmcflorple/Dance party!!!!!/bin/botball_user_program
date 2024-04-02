#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print "ZOOM"
    for x in range(12):
        motor(0,25)
        motor(3,25)
        msleep(500)
            
        motor(0,-30)
        motor(3,-30)
        msleep(500)
 
    motor(0,-20)
    motor(3,0)
    msleep(3500)
    
    motor(0,-30)
    motor(3,0)
    msleep(9000)

    for r in range(9):
        
        motor(0,-25)
        motor(3,0)
        msleep(500)
            
        motor(0,0)
        motor(3,-25)
        msleep(500)
            
    motor(0,-25)
    motor(3,0)
    msleep(5000)
            
    motor(0,0)
    motor(3,-25)
    msleep(10000)
            
    motor(0,-80)
    motor(3,-80)
    msleep(4500)
            
    for m in range(20):
        
        motor(0,80)
        motor(3,-80)
        msleep(500)
        
        motor(0,-80)
        motor(3,80)
        msleep(500)
            
    motor(0,0)
    motor(3,-80)
    msleep(4500)
            
    motor(0,-20)
    motor(3,-20)
    msleep(18000)
            
    motor(0,0)
    motor(3,-20)
    msleep(8000)
            
    motor(0,-20)
    motor(3,-20)
    msleep(7000)
            
    motor(0,-20)
    motor(3,0)
    msleep(4000)
        
if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
