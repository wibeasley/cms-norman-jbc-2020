#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print "Hello World"

if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();

motor (0, 50)
motor (3, 50)
msleep (300)
         
motor (0, -50)
motor (3, -50)
msleep (300)
         
motor (0, 50)
motor (3, 50)
msleep (300)
         
motor (0, -50)
motor (3, -50)
msleep (300)
         
motor (0, 50)
motor (3, 50)
msleep (300)
         
motor (0, -50)
motor (3, -50)
msleep (300)

motor (0, 50)
motor (3, 50)
msleep (300)
    
motor (0, 0)
motor (3, 0)
msleep (1000)
    
motor (0, 70)
motor (3, 0)
msleep (6500)
    
motor (0, 50)
motor (3, 50)
msleep (300)
         
motor (0, -50)
motor (3, -50)
msleep (300)
         
motor (0, 50)
motor (3, 50)
msleep (300)
         
motor (0, -50)
motor (3, -50)
msleep (300)
         
motor (0, 50)
motor (3, 50)
msleep (300)
         
motor (0, -50)
motor (3, -50)
msleep (300)

motor (0, 50)
motor (3, 50)
msleep (300)
    
set_servo_position(1, 0)
set_servo_position(2, 70)
msleep (800)
    
set_servo_position(1, 0)
set_servo_position(2, -70)
msleep (800)