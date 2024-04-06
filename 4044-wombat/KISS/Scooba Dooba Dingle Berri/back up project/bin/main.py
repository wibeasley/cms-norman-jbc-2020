#!/usr/bin/python3
import os, sys
sys.path.append("/usr/lib")
import _kipr as k

# dim values are ~4000; bright values are ~2500
threshold = 50

def main():

  print("Starting wait-until-dawn", flush = True)
  dark_outside = True
  i = 0

  while dark_outside: 
    # Retrieve & [rintthe brightness level
    darkness = k.analog(5)
    print(f"analog 5: {darkness} for i: {i}", flush = True)
    
    # Determine if the darkness is still darker than the threshold
    dark_outside = threshold < darkness
    
    # Increment the counter and wait 250 ms
    i = i + 1
    k.msleep(250)
  
  print(f"Rise & shine b/c the darkness is no longer above {threshold}.", flush = True)

  print("Ok, now I need a rest.", flush = True)


  k.enable_servos() ;
  
  k.motor(0,100)
  k.motor(3,100)
  k.msleep(10000)
  
  k.motor(0,100)
  k.motor(3,0)
  k.msleep(1300)
  
  k.motor(0,100)
  k.motor(3,100)
  k.msleep(3000)
  
  k.motor(0,100)
  k.motor(3,0)
  k.msleep(1300)
    
  k.motor(0,100)
  k.motor(3,100)
  k.msleep(2000)

  k.motor(0,100)
  k.motor(3,0)
  k.msleep(1300)
  
  k.motor(0,100)
  k.motor(3,100)
  k.msleep(2500)
    
  k.motor(0,100)
  k.motor(3,0)
  k.msleep(1300)
  
  k.motor(0,100)
  k.motor(3,100)
  k.msleep(6000)
  
  k.motor(0,100)
  k.motor(3,0)
  k.msleep(1300)

  k.motor(0,100)
  k.motor(3,100)
  k.motor(2500)
    
  k.motor(0,0)
  k.motor(3,90)
  msleep(800)

  k.motor(0,100)
  k.motor(3,100)
  k.msleep(1000)
        
  print("Ok, now I need a rest.", flush = True)

main()



