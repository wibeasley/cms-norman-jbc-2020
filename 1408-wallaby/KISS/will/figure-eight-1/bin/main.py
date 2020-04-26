#!/usr/bin/python
import os, sys, math
from wallaby import *

distance_leg_long_1 = 23
distance_leg_width  = 14
distance_leg_long_2 = 15
    
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
        
def move_straight(distance_inches, message):
    print message + "; straight for " + str(distance_inches) + " inches."
    clicks_per_inch = 207.5
    distance_clicks = int(distance_inches * clicks_per_inch)
    positions_clear()
    while abs(get_motor_position_counter(0)) < abs(distance_clicks):
        positions_print()
        direction = math.copysign(1, distance_clicks)
        if 0 <= direction:
            mav(0, int(300 * direction))  # right motor
            mav(3, int(321 * direction))  # left motor
        else: 
            mav(0, int(300 * direction))  # right motor
            mav(3, int(323 * direction))  # left motor
        msleep(100)
    pause()
            
def pivot(rotations, message):  
    print message + "; pivot " + str(rotations) + " rotations."
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
