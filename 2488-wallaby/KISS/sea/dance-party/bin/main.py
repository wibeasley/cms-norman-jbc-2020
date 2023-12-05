#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print("dance dash")
        
    for x in range(10):
        print("Step ", x)
        msleep(1000)


if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
