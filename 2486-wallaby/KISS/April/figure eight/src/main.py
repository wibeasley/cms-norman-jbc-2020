#!/usr/bin/python
import os, sys
from wallaby import *

def main():
 print "Hello World"
    motor(0,30)
    motor(3,30)
    msleep(5500)
        
    motor (0,50)
    motor(3,-50)
    msleep(1000)
        
    motor (0,50)
    motor (3,50)
    msleep (4000)


if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
