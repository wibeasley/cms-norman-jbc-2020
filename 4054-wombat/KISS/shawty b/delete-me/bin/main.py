#!/usr/bin/python3
import os, sys
sys.path.append("/usr/lib")
import _kipr as k

def main():
    print ("run, my baby, run")
    k.motor(0,35)
    k.motor(3,35)
    k.msleep(11500)
    
    print("turn around the can")
    k.motor(0,35)
    k.motor(3,0)
    k.msleep(4000)
    
    print("inch forward")
    k.motor(0, 35)
    k.motor(3, 35)
    k.msleep(1000)
    
    
main()
