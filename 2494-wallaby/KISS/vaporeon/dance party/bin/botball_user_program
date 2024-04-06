#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print "dance party"
        
        
    print"forward"
    motor(0, 50)
    motor(3, 50)
    msleep(5000)
        
    
    print"turn"
    motor(0, 40)
    motor(3, 20)
    msleep(17000)
     
        
    print"forward"
    motor(0, 50)
    motor(3, 50)
    msleep(4000)
        
        
    print"backward"
    motor(0, -50)
    motor(3, -50)
    msleep(3000)
      
        
    print"pivot"
    motor(0, 30)
    motor(3, -30)
    msleep(3500)
        
        
    print"turn"
    motor(0, 20)
    motor(3, 40)
    msleep(17000)

        
    print"go forward"
    motor(0, 30)
    motor(3, 30)
    msleep(1000)
        
    
    print"pick up"
    set_servo_position(0, 604)
    enable_servos() 
        
        
       
    print"pick up"
    set_servo_position(0, 1103)
    enable_servos()     
if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
