#!/usr/bin/python
import os, sys
from wallaby import *

def main():
  print "Hello World"
     
  motor(0,90)
  motor(3,90)
  msleep(3000)
        
 
     
      
      

     
if __name__== "__main__":
  sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
  main();
