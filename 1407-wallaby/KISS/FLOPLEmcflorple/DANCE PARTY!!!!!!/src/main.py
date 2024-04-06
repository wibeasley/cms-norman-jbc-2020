#!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print "Hello World"
    #!/usr/bin/python
import os, sys
from wallaby import *

def main():
    print "ZOOM"
    for x in range(12):
        motor(0,25)
        motor(3,25)
        msleep(500)
            
        motor(0,-30)
        motor(3,-30)
        msleep(500) # 12 seconds
 
    motor(0,-20)
    motor(3,0)
    msleep(3500) # 15.5 seconds
    
    motor(0,-30)
    motor(3,0)
    msleep(9000) # 24.5 seconds

    for r in range(9):
        
        motor(0,-25)
        motor(3,0)
        msleep(500)
            
        motor(0,0)
        motor(3,-25)
        msleep(500) # 33.5 seconds
            
    motor(0,-25)
    motor(3,0)
    msleep(5000) # 38.5 seconds
            
    motor(0,0)
    motor(3,-25)
    msleep(10000) # 48.5 seconds
            
    motor(0,-80)
    motor(3,-80)
    msleep(4500) # 53 seconds
            
    for m in range(20):
        
        motor(0,80)
        motor(3,-80)
        msleep(500)
        
        motor(0,-80)
        motor(3,80)
        msleep(500) # 1 min 10 sec
            
    motor(0,0)
    motor(3,-80)
    msleep(4500) # 1 min 14.5 seconds
            
    motor(0,-20)
    motor(3,-20)
    msleep(16000) # 1 min 30.5 seconds
            
    motor(0,0)
    motor(3,-20)
    msleep(8000) # 1 min 38.5 seconds
            
    motor(0,-20)
    motor(3,-20)
    msleep(5000) # 1 min 43.5 seconds
            
    motor(0,-20)
    motor(3,0)
    msleep(4000) # 1 min 47.5 seconds
        
    motor(0,0)
    motor(3,-20)
    msleep(2500) # 1 min 50 seconds
            
    motor(0,-20)
    motor(3,-20)
    msleep(5000) # 1 min 55 seconds
            
    motor(0,0)
    motor(3,-20)
    msleep(7000) # 2 mins 2 seconds
    
    motor(0,-20)
    motor(3,-20)
    msleep(9000) # 2 mins 11 seconds
    
    motor(0,0)
    motor(3,-20)
    msleep(5000) # 2 mins 16 seconds
            
if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();


if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
