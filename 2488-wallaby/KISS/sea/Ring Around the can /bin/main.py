#!/usr/bin/python
import os, sys
from wallaby import *

def main():
   print "ring around the can"

   print "go straight"         
   print motor (0,45)     
   print motor (3,45)     
   print msleep (3000)     
        
   print "turn right"
   print (0,35)
   print (3,0)
   print (100)
        
   print "go straight"
   print (0,35)
   print (3,35)
   print (2000)
        
   print "turn left"
   print motor (0,0)
   print motor (3,45)
   print msleep (2000)
        
   print "go straight"
   print motor (0,35)
   print motor (3,35)
   print msleep (4000)     
     
   print "turn left"
   print motor (0,35)
   print motor (3,0)
   print msleep (2000)
        
   print "go straight"
   print motor (0,35) 
   print motor (3,35)
   print msleep (2000)
 
   print "turn left"
   print motor (0,35)
   print motor (3,0)
   print msleep (3000)
       
   print "go straight"
   print motor (0,35)
   print motor (3,35)
   print msleep (4000)
   
   print "turn left"
   print motor (0,35)
   print motor (3,0) 
   print msleep (3600)
   
   print "go straight"
   print motor (0,35)
   print motor (3,35)
   print msleep (12000)
       
       
       
       
       
        
if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
