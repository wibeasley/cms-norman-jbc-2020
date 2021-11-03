#!/usr/bin/python
import os, sys, math
from wallaby import *

port_motor_left  = 3
port_motor_right = 0
port_servo_raise = 0
port_servo_pinch = 3

distance_leg_long_1 = 23
distance_leg_width  = 14
distance_leg_long_2 = 15
        
def pause():
    mav(port_motor_right, 0)
    mav(port_motor_left , 0)
    msleep(2000)
        
def set_servos_neutral():
    print "neutral servos"
    enable_servos()
    set_servo_position(port_servo_raise, 600)
    set_servo_position(port_servo_pinch, 300)
    msleep(500)
    pause()

def positions_print():
    print \
        "left: " + str(get_motor_position_counter(port_motor_left)) + \
        "; right: " + str(get_motor_position_counter(port_motor_right))
        
def positions_clear():
    clear_motor_position_counter(port_motor_right) 
    clear_motor_position_counter(port_motor_left )
        
def move_straight(distance_inches, message):
    print message + "; straight for " + str(distance_inches) + " inches."
    clicks_per_inch = 207.5
    distance_clicks = int(distance_inches * clicks_per_inch)
    positions_clear()
    while abs(get_motor_position_counter(0)) < abs(distance_clicks):
        positions_print()
        direction = math.copysign(1, distance_clicks)
        if 0 <= direction:
            mav(port_motor_right, int(300 * direction))
            mav(port_motor_left , int(321 * direction))
        else: 
            mav(port_motor_right, int(300 * direction))
            mav(port_motor_left , int(323 * direction))
        msleep(100)
    pause()
            
def pivot(rotations, message):  
    print message + "; pivot " + str(rotations) + " rotations."
    positions_clear()
    clicks_per_rotation = 3585
    distance_pivot = clicks_per_rotation * rotations
    print "distance goal: " + str(distance_pivot)
    while abs(get_motor_position_counter(port_motor_right)) < abs(distance_pivot):
        positions_print()
        direction = math.copysign(1, distance_pivot)
        mav(port_motor_right, int(300 * -direction))
        mav(port_motor_left , int(320 * +direction))
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
    pivot(-.25, "Turn left") 
    move_straight(distance_leg_width, "Move across board")    
    pivot(-.25, "Turn left") 
        
    print "Completed"

if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
