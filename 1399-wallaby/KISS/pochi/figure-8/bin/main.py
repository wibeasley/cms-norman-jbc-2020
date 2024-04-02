#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print "figuer-8";
    motor(0, 50);
    motor(3, 50);
    msleep(2000);
        
    ao();
    return 0;

if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
