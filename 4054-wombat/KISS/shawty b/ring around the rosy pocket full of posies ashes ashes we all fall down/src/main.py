#!/usr/bin/python3
import os, sys
sys.path.append("/usr/lib")
import _kipr as k

def main():
    print ("run, run, run!!!!!")
    k.motor(0,35)
    k.motor(3,35)
    k.msleep(11000)
    
    print("turn around the can baby doll")
    k.motor(0,35)
    k.motor(3,0)
    k.msleep(4000)
    
    print("inch forward")
    k.motor(0,35)
    k.motor(3,35)
    k.msleep(2500)
    
    print("turn around pls")
    k.motor(0,35)
    k.motor(3,0)
    k.msleep(4500)
    
    print("go home to HER(wow)") 
    k.motor(0,35)
    k.motor(3,35)
    k.msleep(12345)
    
    
    
main()
