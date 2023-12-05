#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print "Hello World"
    motor(3,50) 
    motor(0,50)  
    msleep(3000)   
    motor(3,50)
    motor(0,80) 
    msleep(2000)
    motor(0,30)
    motor(3,30)
    msleep(1000)   
    motor(3,40)
    motor(0,0)
    msleep(2000)
    motor(3,30)
    motor(0,30)
    msleep(3000) 
    motor(3,40)
    motor(0,0)
    msleep(2000)
    motor(3,30)
    motor(0,30)
    msleep(3000) 
    motor(3,30)
    motor(0,0)
    msleep(2000)    

if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
