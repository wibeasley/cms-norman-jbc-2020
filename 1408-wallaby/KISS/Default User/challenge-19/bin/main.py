#!/usr/bin/python
import os, sys
from wallaby import *
def move(speed_left,speed_right,duration):
  motor(0,speed_left)
  motor(3,speed_right)
  msleep(duration) 
  move();
def servos(up_down,left_right,stop_time):
enable_servos();
set_servo_position(1,up_down)
set_servo_position(0,right_left)
msleep(stop_time)
servos();
def main():
    print "Hello World"
move(50,60,4000)
servos(12)
move(-50,-60,5000)
        
        
if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
