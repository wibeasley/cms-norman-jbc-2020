#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print " go forward "
    motor(0,30)
    motor(3,32)
    msleep(5000)
        
    print " Lift claw  "      
    set_servo_position(0,1000)   
    msleep(500)    
    enable_servos()
        
    print " close claw "    
    set_servo_position(1,11)    
    msleep(500)
    enable_servos()       
           
    print " lower claw "       
    set_servo_position(0,1600)       
    msleep(500)       
    enable_servos()       
           
           
           
           
           
           
           
           
           
           
           
           
           
           
        
        
        
        
        
if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
