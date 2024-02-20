#!/usr/bin/python3
import os, sys
sys.path.append("/usr/lib")
import _kipr as k

def main():
    
    print("straight as a ballet posture")
    k.motor(0,40)
    k.motor(3,30)
    k.msleep(5000)
    
    print("ty")
    k.motor(0,0)
    k.motor(3,35)
    k.msleep(2000)
    
    print("shake")
    k.motor(0,-20)
    k.motor(3,-20)
    k.msleep(3000)
    
main()
