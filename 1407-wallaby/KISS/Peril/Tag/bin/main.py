#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print "I am coming for you"
    motor(0,30)
    motor(3,30)
    msleep(5000)
        
    print "Hi cache Bye"    
    motor(0,-30)
    motor(3,-30)
    msleep(5000)
    
    print "to the great darkness I return"
if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
