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
    k.msleep(2250)
    
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
    k.msleep(11000)
    
    print("movee at the purrfect angola on to numero nueve", flush = True)
    k.motor(0,200)
    k.motor(3,200)
    k.msleep(2000)
    
    print("use your wheels to make a cuvertrueeeeeeeera mark on the floor", flush = True)
    k.motor(0,35)
    k.motor(3,0)
    k.msleep(2500)
    
    print("hit numero once like it's april 20th", flush = True)
    k.motor(0,35)
    k.motor(3,35)
    k.msleep(2000)
    
    
main()
