#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print "Hello World"

if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();

motor (0, 70)
motor (3, 70)
msleep (2000)
    
motor (0, 300)
motor (3, 0)
msleep (1400)
    
motor (0,50)
motor (3, 50)
msleep (900)
    
motor (0, 50)
motor (3, 50)
msleep (1500)
    
motor (0, 0)
motor (3, 100)
msleep (2300)
    
motor (0, 50)
motor (3, 50)
msleep (1200)