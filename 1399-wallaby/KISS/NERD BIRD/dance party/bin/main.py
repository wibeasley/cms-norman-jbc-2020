#!/usr/bin/python
import os, sys
from wallaby import *
# down: 2025 (port 1)
# middle: 1410 (port 1)
# up: 0 (port 1)
# open: 1171 (port 2)
# closed: 0 (port 2)

def main():
    print("dance party")

    print("start arm")
        
        
    "go forward"    
    motor(0,30)    
    motor(3,30)    
    msleep(8000)    
        
    "pivot"  
    motor(0,30)   
    motor(3,-30)   
    msleep(2000)    
    
    "go forward"    
    motor(0,30)    
    motor(3,30)    
    msleep(4000)    
        
        
    "pivot"    
    motor(0,30)
    motor(3,-30)    
    msleep(4000)    
        
    "go forward"    
    motor(0,30)    
    motor(3,30)    
    msleep(7000)    
        
    "pivot"    
    motor(0,-30)    
    motor(3,30)    
    msleep(4000)    
        
    print("go forward")    
    motor(0,30)    
    motor(3,30)    
    msleep(7000)    
        
    
    "pivot"    
    motor(0,30)    
    motor(3,-30)    
    msleep(4000)    
        
    "go forward"    
    motor(0,30)    
    motor(3,30)    
    msleep(5000)    
      
    "pivot"    
    motor(0,-30)    
    motor(3,30)    
    msleep(1900)    
        
        
    enable_servos();    
    set_servo_position(1, 862);    
    msleep(2000)    
    set_servo_position(1, 1449);
    msleep(2000)    
        
    "go backward"    
    motor(0,-30)   
    motor(3,-30)   
    msleep(9000)   
        
        
        
        
        
if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
