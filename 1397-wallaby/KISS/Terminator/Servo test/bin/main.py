#!/usr/bin/python
import os, sys
from wallaby import *

def main():
  enable_servos()
  set_servo_position(1,-10)
  print "Please Work"
  msleep(2000)
    

if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
