#!/usr/bin/python3
import os, sys
sys.path.append("/usr/lib")
import _kipr as k

def main():
    print("odd numbers", flush = True)
    
    print("numero uno", flush = True)
    k.motor(0,35)
    k.motor(3,35)
    k.msleep(4000)
    
    print("turn around", flush = True)
    k.motor(0,-35)
    k.motor(3,35)
    k.msleep(4500)
    
    print("move it up", flush = True)
    k.motor(0,35)
    k.motor(3, 35)
    k.msleep(3000)
    
    print("turn again", flush = True)
    k.motor(0,35)
    k.motor(3,0)
    k.msleep(4400)
    
    print("go straight", flush = True)
    k.motor(0,35)
    k.motor(3,35)
    k.msleep(3000)
    
    print("turn", flush = True)
    k.motor(0,35)
    k.motor(3,0)
    k.msleep(4400)
    
    print("numero tres", flush = True)
    k.motor(0,35)
    k.motor(3,37)
    k.msleep(8000)
    
    print("turn", flush = True)
    k.motor(0,35)
    k.motor(3,0)
    k.msleep(4400)
    
    print("go straight", flush = True)
    k.motor(0,35)
    k.motor(3,35)
    k.msleep(2500)
    
    print("numero quinco", flush = True)
    k.motor(0,35)
    k.motor(3,0)
    k.msleep(4000)
    
    print("move forward a little bit", flush = True)
    k.motor(0,35)
    k.motor(3,35)
    k.msleep(1500)
    
    print("turn back around 180 der=grees", flush = True)
    k.motor(0,0)
    k.motor(3,35)
    k.msleep(8000)

main()
