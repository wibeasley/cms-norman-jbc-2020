#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print "tag you are it"
    print "start at k -2"
        
    print "go forward"
    motor(0, 30)
    motor(3, 30)
    msleep(8700)    
   
    print "go backward"
    motor(0, -30)
    motor(3, -30)
    msleep(8799)
        
if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
