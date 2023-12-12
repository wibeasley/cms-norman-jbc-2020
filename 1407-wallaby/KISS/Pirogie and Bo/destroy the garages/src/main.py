#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print "Hello neigbor i will desroy your garage!!!"
    motor(0,50)
    motor(3,54)
    msleep(3600)
        
    motor(0,0)
    motor(3,0)
    msleep(500)
        
    motor(0,50)
    motor(3,54)
    msleep(2000)
        
    motor(0,30)
    motor(3,0)
    msleep(1300)
    
    motor(0,50)
    motor(3,54)  
    msleep(1200)
        
    motor(0,0)
    motor(3,0)
    msleep(500)
        
    motor(0,50)
    motor(3,-54)
    msleep(5000)
 
if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
