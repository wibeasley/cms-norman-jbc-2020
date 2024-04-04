#!/usr/bin/python3
import os, sys
sys.path.append("/usr/lib")
import _kipr as k

# dim values are ~4000; bright values are ~2500
threshold = 3500

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
  k.motor(0, 10)
  k.motor(3, 10)
  k.msleep(3000)

  print("Ok, now I need a rest.", flush = True)

main()
