#!/usr/bin/python
import os, sys, math
from wallaby import *

distance = 1400 * 2.2

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
    while abs(get_motor_position_counter(0)) < abs(distance):
        positions_print()
        direction = math.copysign(1, distance)
        mav(0, int(300 * direction))
        mav(3, int(305 * direction))
        msleep(100)
    pause()
    

def main():
    print "Started `tag-you-are-it-3`"
        
    enable_servos()
    set_servo_position(0, 200)
    msleep(500)
    pause()
    set_servo_position(0, 1000) 
    msleep(500)
    pause()
        
        
    print "Pivot left"
    positions_clear()
    mav(0, 300)
    mav(3, -300)
    msleep(2000)
    positions_print()
    pause()
        
    print "Pivot right"
    positions_clear()
    mav(0, -300)
    mav(3, 300)
    msleep(2000)
    positions_print()  
    pause()       
        
    # Move straight up & back
    move_straight(distance, "Move forward")    
    move_straight(-distance, "Move backward")
        
    disable_servos()         
    print "Completed"    

#def servos(up_down, left_right, stop_time):
#    enable_servos()
#    set_servo_position(1, up_down)
#    set_servo_position(0, left_right)
#    msleep(stop_time)
    #servos()

# move(50,60,4000)
        
# servos(12)
# move(-50,-60,5000)
        
        
        
if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
