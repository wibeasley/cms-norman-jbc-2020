#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print "Hello World"

        
    print "move claw to starting position"     
    set_servo_position(1, 1611)             
    enable_servos()       
    msleep(1000)    
        
    print "turn"    
    motor(0,20)    
    motor(3,00)    
    msleep(1750)    
        
    print "forward"    
    motor(0,20)    
    motor(3,20)    
    msleep(4000)       
        
    print "turn"    
    motor(0,20)    
    motor(3,00)    
    msleep(9000)     
   
    print "forward"    
    motor(0,20)    
    motor(3,20)    
    msleep(2000)    
        
if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
