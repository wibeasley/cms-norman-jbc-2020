#!/usr/bin/python
import os, sys, math
from wallaby import *


distance_leg_long_1 = 1400 * 4
distance_leg_width  = 1400 * 2
distance_leg_long_2 = 1400 * 2.5

def pause():
    mav(0, 0)
    mav(3, 0)
    msleep(2000)

def positions_print():
    print "left: " + str(get_motor_position_counter(3)) + "; right: " + str(get_motor_position_counter(0))
        
def positions_clear():
    clear_motor_position_counter(0) 
    clear_motor_position_counter(3)
        
def move_straight(distance, message):
    print message
    positions_clear()
    print "before while"
    while abs(get_motor_position_counter(0)) < abs(distance):
        print "before positions print"
        positions_print()
        print "before direction"
        # print type(distance)
        direction = math.copysign(1, distance)
        print "before mav"
        mav(0, int(300 * direction))
        mav(3, int(320 * direction))
        print "before msleep"
        msleep(100)     
        print "after msleep"
    pause()
    
def pivot(rotations, message):  
    print message
    positions_clear()
    clicks_per_rotation = 3692
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
    print "Starting `figure-eight-1`"
        
    move_straight(distance_leg_long_1, "Move forward")    
    pivot(-.25, "Turn left")
    move_straight(distance_leg_width, "Move across board")  
    pivot(+.25, "Turn right")  
    move_straight(distance_leg_long_2, "Move forward")     
    pivot(+.25, "Turn right")  
    move_straight(distance_leg_width, "Move across board")    
    pivot(+.25, "Turn right")  
    move_straight(distance_leg_long_2, "Move forward")      
    pivot(+.25, "Turn right")  
    move_straight(distance_leg_width, "Move across board")  
    pivot(-.25, "Turn left")
    move_straight(distance_leg_long_1, "Return to start")    
        
    print "Completed"

if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
