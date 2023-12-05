#!/usr/bin/python
import os, sys
from wallaby import *

def main():
  enable_servos()
  print "B-B-BAAAAACK SHUFFLE!!!!"
  for x in range(10):
    motor(0,-30)
    motor(3,-30)
    set_servo_position(0,100)
    msleep(250)
     
    motor(0,0)
    motor(3,0)
    set_servo_position(0,-100)
    msleep(100)
  print "THE WAAAAAAVE!"
  for x in range(10):
    motor(0,50)
    motor(3,50)
    set_servo_position(1,-60)
    msleep(1000)
    
    motor(0,-50)
    motor(3,-50)
    set_servo_position(1,500)
    msleep(500)
  print "THEEE TWIIIIISSST!!"
  for x in range(10):
    set_servo_position(0,-100)
    motor(0,0)
    motor(3,50)
    msleep(500)
        
    set_servo_position(0,300)
    motor(0,50)
    motor(3,0)
    msleep(500)
  print "THEEE BAAAACCKK TWWWWIIIIIIIISSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSTTTTTTTTTTTTTTT!!!!!!"
  for x in range(10):
    set_servo_position(1,-100)
    set_servo_position(0,-400)
    motor(0,-50)
    motor(3,0)
    msleep(500)
    set_servo_position(0,500) 
    set_servo_position(1,300)
    motor(0,0)
    motor(3,-50)
    msleep(500)
  
        
if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();



