#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print "tag your it"

    print "go forward"    
        
    motor(3,32)
    motor(0,30)
    msleep(9000)    
        
    motor(3,-32)    
    motor(0,-30)    
    msleep(9000)    
        
        
        
        
        
if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
