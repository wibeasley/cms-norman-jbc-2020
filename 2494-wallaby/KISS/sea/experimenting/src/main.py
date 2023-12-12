#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print "Hello World"

if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();

    motor(3,30)
    motor(0,30)
    msleep(2000)    

    motor(3,00)
    motor(0,30)
    msleep(4000)


    motor(3,30)
    motor(0,30)
    msleep(3000)

