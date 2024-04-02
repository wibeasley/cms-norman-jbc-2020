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
    motor(0,37)    
    motor(3,30)    
    msleep(9000)         
    
    print "stop"    
    motor(0,00)
    motor(3,00)
    msleep(1000)   
     
    print "grab"     
    set_servo_position(0, 1087)             
    enable_servos()       
    msleep(6000) 
        
    print "backward"    
    motor(0,-30)    
    motor(3,-30)    
    msleep(1000)          
      
    print "grab"     
    set_servo_position(0, 1543)             
    enable_servos()       
    msleep(6000)    
        
    print "stop"    
    motor(0,00)
    motor(3,00)
    msleep(1000)
        
        
        
        
if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
