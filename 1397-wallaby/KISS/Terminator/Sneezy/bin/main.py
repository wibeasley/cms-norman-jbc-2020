#!/usr/bin/python
import os, sys
from wallaby import *

def main():
   
    print "Ruh Roh Gussy Had a Sneezy"
    enable_servos()
    set_servo_position(1,250)
    set_servo_position(0,20)    
    msleep(500)    
    
    motor(0,40)
    motor(1,40)
    msleep(3000)
        
    set_servo_position(0,-300)    
    set_servo_position(1,30)    
    msleep(300)    
        
    set_servo_position(0,20)    
    msleep(300)
        
    motor(0,40)
    motor(1,40)
    msleep(3000)    
    


if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
