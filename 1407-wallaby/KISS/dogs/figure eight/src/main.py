#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print "figure eight\n"
        
    print "forward\n"
    motor(3,30)
    motor(0,30)    
    msleep(7000)    
        
    print "right turn\n"    
    motor(3,00)    
    motor(0,35)
    msleep(2000)
      
    print "forward\n"       
    motor(3,30)    
    motor(0,30)    
    msleep(3000)   
     
        
    print "turn left\n"    
    motor(3,30)   
    motor(0,00)    
    msleep(3000)    
   
    print "forward\n"
    motor(3,30)
    motor(0,30)    
    msleep(4000)    
   
    print "turn left\n"    
    motor(3,35)
    motor(0,00)
    msleep(3000)    
        
    print "forward\n"
    motor(3,25)
    motor(0,25)
    msleep(5000)
    
    print "turn left\n"
    motor(3,30)
    motor(0,00)
    msleep(3000)     
    
    print "forward\n"    
    motor(3,30)
    motor(0,30)
    msleep(3000)
     
    print "turn left\n"    
    motor(3,30)    
    motor(0,00)    
    msleep(2500)        
        
    print "forward\n"      
    motor(3,30)    
    motor(0,30)    
    msleep(2500)    
    
    print "turn left"    
    motor(3,00)    
    motor(0,30)    
    msleep(2000)    
     
    print "forward\n"    
    motor(3,30)    
    motor(0,30)    
    msleep(5000)    
        
if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
