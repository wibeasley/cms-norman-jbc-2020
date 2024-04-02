#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print "Hello Pochi"
    motor(0, 50)
    motor(3, 50)    
    msleep(1000)    
        
if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
