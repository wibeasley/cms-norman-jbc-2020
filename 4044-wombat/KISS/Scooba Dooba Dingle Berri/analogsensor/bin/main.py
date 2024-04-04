#!/usr/bin/python3
import os, sys
sys.path.append("/usr/lib")
import _kipr as k

def main():
  print("Starting main()")
  i=0
  
  while i < 20: 
    value=k.analog(5)
    # print(value)
    print(f"analog 5: {value} for i: {i}", flush = True)
    k.motor(0, 10)
    k.motor(3, 10)
    k.msleep(200)
    i = i + 1
  
  # print ("Hello World")
  # k.enable_servos()
  # k.motor(0,100)
  # k.motor(3,100)
  # k.msleep(5550)

  # k.motor(0,0)
  # k.motor(3,90)
  # k.msleep(1500)

  # k.motor(0,100)
  # k.motor(3,100)
  # k.msleep(1150)

  # k.motor(0,90)
  # k.motor(3,0)
  # k.msleep(1500)

  # k.motor(0,100)
  # k.motor(3,100)
  # k.msleep(1150)
  print("Exiting main()")
main()
