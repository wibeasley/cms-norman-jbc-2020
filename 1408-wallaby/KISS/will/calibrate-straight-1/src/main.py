#!/usr/bin/python
import os, sys, math
from wallaby import *
        
def pause():
    mav(0, 0)
    mav(3, 0)
    msleep(2000)
        
def set_servos_neutral():
    print "neutral servos"
    enable_servos()
    set_servo_position(0, 600)
    set_servo_position(3, 300)
    msleep(500)
    pause()

def positions_print():
    print "left: " + str(get_motor_position_counter(3)) + "; right: " + str(get_motor_position_counter(0))
        
def positions_clear():
    clear_motor_position_counter(0) 
    clear_motor_position_counter(3)
        
def move_straight(distance, message):
    print message
    positions_clear()
    while abs(get_motor_position_counter(0)) < abs(distance):
        positions_print()
        direction = math.copysign(1, distance)
        if 0 <= direction:
            mav(0, int(300 * direction))  # right motor
            mav(3, int(321 * direction))  # left motor
        else: 
            mav(0, int(300 * direction))  # right motor
            mav(3, int(323 * direction))  # left motor
        msleep(100)
    pause()
            
def pivot(rotations, message):  
    print message
    positions_clear()
    clicks_per_rotation = 3585
    distance_pivot = clicks_per_rotation * rotations
    print "distance goal: " + str(distance_pivot)
    while abs(get_motor_position_counter(0)) < abs(distance_pivot):
        positions_print()
        direction = math.copysign(1, distance_pivot)
        mav(0, int(300 * -direction))
        mav(3, int(320 * +direction))
        msleep(100)     
    pause()
            
               
def main():
    print "Starting `calibrate-straight-1`"
    set_servos_neutral()
    # move_straight( 8000 * 3, "Move up")
    # move_straight(-8000 * 3, "Move back")
    # move_straight(+8000, "Move up")
    pivot(+4, "Turn right")  
    #pivot(-4, "Turn left") 
    # move_straight(-8000, "Move back")
        
    # pivot(+4, "Turn right")  
    # pivot(-4, "Turn left")  

if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
