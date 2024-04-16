#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print "load'em up"
        
        
    print"push"
    motor(0, 30)
    motor(3, 35)
    msleep(5000)
        
    print"go bawards"
    motor(0, -30)
    motor(3, -30)
    msleep(5000)
        
    print"pivot right"
    motor(0, 30)
    motor(3, -30)
    msleep(2000)

        
    motor(0, -30)
    motor(3, -30)    
if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
