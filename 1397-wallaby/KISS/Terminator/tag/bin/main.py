#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print "Hello World"
    motor0(0,30)
    motor3(3,30)
    msleep(2000)
        
if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
