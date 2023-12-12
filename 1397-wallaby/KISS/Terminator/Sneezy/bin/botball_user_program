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
    motor(3,40)
    msleep(5000)
        
    set_servo_position(1,1200)    
    set_servo_position(0,-300)    
    msleep(600) 
        
    set_servo_position(0,20) 
    motor(0,-40)
    motor(3,-40)
    msleep(5000) 


if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
