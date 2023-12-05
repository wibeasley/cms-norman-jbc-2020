#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print("tag you are it\n")
    print("go forward")
    motor (0, 30)
    motor (3, 32)  
    msleep(7000)            

    print("go backward")
    motor (0, -30)
    motor (3, -30)
    msleep(8000)   
        
if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
