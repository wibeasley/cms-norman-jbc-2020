#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print "tag-you-are-it"
    
    print "move forward"
    motor(0, 35)
    motor(3, 35)
    msleep(3000)
        
    print "move backward"
    motor(0, -30)
    motor(3, -30)
    msleep(4000)

if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
