#!/usr/bin/python3
import os, sys
sys.path.append("/usr/lib")
import _kipr as k

def main():
    
   print("get over to the green garage but dont go in or else")
   k.motor(0, 30)
   k.motor(3, 30)
   k.msleep(5000)
    
   print("pause")
   k.motor(0, 0)
   k.motor(3, 0)
   k.msleep(2000)
    
   print("turn a leetle beet to ze right, mon amour")
   k.motor(0, 30)
   k.motor(3, 0)
   k.msleep(3000)
    
   print("pause again")
   k.motor(0, 0)
   k.motor(3, 0)
   k.msleep(2000)
    
   print("back it up sugar")
   k.motor(0, -30)
   k.motor(3, -30)
   k.msleep(4000)
    
     
main()
