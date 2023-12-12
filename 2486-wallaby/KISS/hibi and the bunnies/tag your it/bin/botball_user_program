#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print "moonwalk"
    motor(0,15)
    motor(3,15)
    msleep(5000)
    
    motor(0,-15)
    motor(3,-15)
    msleep(5000)

    motor(0,100)
    motor(3,-100)
    msleep(3900)

    for s in range(25):
        print "back shuffle"
        motor(0,-50)
        motor(3,-50)
        msleep(250)
        
        motor(0,0)
        motor(3,0)
        msleep(100)
            
    print "go back"
    motor(0,30)
    motor(3,30)
    msleep(15000)
            
    motor(0,-30)
    motor(3,-30)
    msleep(4000)
            
    motor(0,100)
    motor(3,-100)
    msleep(3900)
           
    for i in range(28):
        print "bunny hops"

        motor(0,100)
        motor(3,100)
        msleep(500)
            
        motor(0,0)
        motor(3,0)
        msleep(100)
                    
    motor(0,-100)
    motor(3,-100)
    msleep(11800)  
            
    motor(0,-30)
    motor(3,30)
    msleep(5000)
            
    
         for x in range(15):
         print "go back"
         motor(0,0)
         motor(3,50)
         msleep(500)
             
         motor(0,50)
         motor(3,0)
         msleep(500)
             
    motor(0,0)
    motor(3,0)
    msleep(1000)
             
    for m in range(15):

        motor(0,-50)
        motor(3,0)
        msleep(500)
            
        motor(0,0)
        motor(3,-50)
        msleep(500)
            
    motor(0,30)
    motor(3,0)
    msleep(2000)
            
    motor(0,100)
    motor(3,100)
    msleep(5250)
     
if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
