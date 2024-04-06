#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print "Hello World"

    print "move claw to starting position"     
    set_servo_position(1, 1349)             
    enable_servos()       
    msleep(1000) 
     
    print "forward please"    
    motor(0,37)    
    motor(3,30)    
    msleep(3000)      
        
    print "backward"    
    motor(0,-30)    
    motor(3,-30)    
    msleep(2000)      
                   
    print "turn right"    
    motor(0,30)    
    motor(3,-30)    
    msleep(1500)     
        
    print "forward"    
    motor(0,37)    
    motor(3,30)    
    msleep(3000)            

    print "turn right"    
    motor(0,-30)    
    motor(3,30)    
    msleep(1500)          

    print "forward"    
    motor(0,39)    
    motor(3,30)    
    msleep(9500)         
    
    print "stop"    
    motor(0,00)
    motor(3,00)
    msleep(1000)   
     
    print "grab"     
    set_servo_position(0, 1085)             
    enable_servos()       
    msleep(6000) 
    
    print "stop"    
    motor(0,00)
    motor(3,00)
    msleep(1000)          
        
    print "backward"    
    motor(0,-30)    
    motor(3,-30)    
    msleep(4000)          
     
    print "stop"    
    motor(0,00)
    motor(3,00)
    msleep(1000)    
    
    print "grab"     
    set_servo_position(0, 1546)             
    enable_servos()       
    msleep(6000)     
        
        
        
if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
