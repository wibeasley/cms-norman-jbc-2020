#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print "Hello World"

if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
motor (0, 38)
motor (3, 38)
msleep (3700)
    
motor (0, 0)
motor (3, 50)
msleep (2000)
    
motor (0, 50)
motor (3, 50)
msleep (2500)
    
motor (0, 50)
motor (3, 0)
msleep (2300)
    
motor (0, 50)
motor (3, 50)
msleep (2000)
    
motor (0, 50)
motor (3, 0)
msleep (2300)
   
motor (0, 50)
motor (3, 50)
msleep (2000)
    
motor (3, 0) 
motor (0, 50)
msleep (2300)
    
motor (0, 50)
motor (3, 50)
msleep (2000)
    
motor (3, 0) 
motor (0, 50)
msleep (2300)
    
motor (0, 50)
motor (3, 50)
msleep (2000)
    
motor (3, 50) 
motor (0, 0)
msleep (2300)
    
motor (3, 50) 
motor (0, 50)
msleep (1500)
    
motor (3, 50) 
motor (0, 0)
msleep (2300)
    
motor (0, 50)
motor (3, 50)
msleep (2000)
    
motor (3, 0) 
motor (0, 50)
msleep (2300)
    
motor (0, 50)
motor (3, 50)
msleep (2000)