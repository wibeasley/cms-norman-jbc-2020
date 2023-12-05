#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print("forward\n");
    motor(0,35);
    motor(3,35);
    msleep(5000);
   
    print("backward/n");
    motor(0,-35);
    motor(3,-35);
    msleep(5000);    
       
     
if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();

