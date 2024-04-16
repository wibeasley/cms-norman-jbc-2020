#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print "bulldozer mania"
        
    forward    
    motor(0, 30)
    motor(3, 35)
    msleep(2000)    
       
    pivot    
    motor(0, -30)
    motor(3, 30)
    msleep(1900)
        
    forward    
    motor(0, 30)
    motor(3, 35)
    msleep(2000)
        
    
    pivot    
    motor(0, 30)
    motor(3, -30)
    msleep(1900)    
if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
