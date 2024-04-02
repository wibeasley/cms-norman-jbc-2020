#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print "Hello World"
    
    B - 1    
        
    print "go forward 1"        
    motor(3,30) 
    motor(0,30)
    msleep(2000)

    print "turn right 1"
    motor(3,00)
    motor(0,30)
    msleep(4000)

    print "go forward 2"
    motor(3,30)
    motor(0,30)
    msleep(4000)

    print "turn left 1"
    motor(3,30)
    motor(0,00)
    msleep(4000)
 
    print "go forward 3"  
    motor(3,30)
    motor(0,30)
    msleep(4000)    
 
    print "turn right 2"    
    motor(3,30)
    motor(0,00)
    msleep(3000)

    print "go forward 4"
    motor(3,30)
    motor(0,30)
    msleep(6000)    

    print "turn left 2"        
    motor(3,00)
    motor(0,030)
    msleep(4000)   
 
    print "go forward 5"
    motor(3,30)   
    motor(0,30)    
    msleep(4000)   

    print "turn left 3"       
    motor(3,00)
    motor(0,30)
    msleep(5000)   
    
    
    print "go forward 6"
    motor(3,30)   
    motor(0,30)    
    msleep(4000)    

    print "turn right 3"       
    motor(3,00)
    motor(0,30)
    msleep(4000)

    print "go forward 7"       
    motor(3,30)
    motor(0,30)
    msleep(3000)   

    print "turn right 4"
    motor(3,00)    
    motor(0,30)    
    msleep(3000)    

    print "go forward 8" 
    motor(3,30)    
    motor(0,30)    
    msleep(3000)  

    print "turn left 4"
    motor(3,30)   
    motor(0,00)    
    msleep(6000)    
    
    print "go forward 9"       
    motor(3,35)  
    motor(0,35)
    msleep(11000)      


        
if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
