#!/usr/bin/python3
import os, sys
sys.path.append("/usr/lib")
import _kipr as k

def main():
    print("load em up", flush = True)

    print("grab mr green", flush = True)
    k.set_servo_position(0,750)
    k.set_servo_position(1,1950)
    k.enable_servos()
    k.msleep(2000)
    
    print("move into the green garage", flush = True)
    k.motor(0,35)
    k.motor(3,35)
    k.msleep(3250)
    
    print("let it go", flush = True)
    k.motor(0,0)
    k.motor(3,0)
    k.set_servo_position(0,700)
    k.set_servo_position(1,1200)
    k.msleep(2000)
    
    print("back it up", flush = True)
    k.motor(0,-35)
    k.motor(3,-35)
    k.msleep(1000)
    
    print("turn", flush = True)
    k.set_servo_position(0,1500)
    k.set_servo_position(1,1300)
    k.motor(0,0)
    k.motor(3,35)
    k.msleep(4250)
    
    print("move a little bit", flush = True)
    k.motor(0,35)
    k.motor(3,35)
    k.msleep(1500)
    
    print("turn again", flush = True)
    k.motor(0,35)
    k.motor(3,0)
    k.msleep(4250)
          
    print("go towards mrs peacock", flush = True)
    k.motor(0,35)
    k.motor(3,35)
    k.msleep(7000)
    
main()
