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
    # print "before while"
    while abs(get_motor_position_counter(0)) < abs(distance):
        # print "before positions print"
        positions_print()
        # print "before direction"
        direction = math.copysign(1, distance)
        # print "before mav"
        mav(0, int(300 * direction))
        mav(3, int(305 * direction))
        # print "before msleep"
        msleep(100)     
        # print "after msleep"
    pause()

def pivot(rotations, message):  
    print message
    positions_clear()
    clicks_per_rotation = 3692
    distance_pivot = clicks_per_rotation * rotations
    print "distance goal: " + str(distance_pivot)
    # print "before while"
    while abs(get_motor_position_counter(0)) < abs(distance_pivot):
        # print "before positions print"
        positions_print()
        # print "before direction"
        direction = math.copysign(1, distance_pivot)
        # print "before mav"
        mav(0, int(300 * -direction))
        mav(3, int(305 * +direction))
        # print "before msleep"
        msleep(100)     
        # print "after msleep"
    pause()
  
            
def main():
    print "Started `tag-you-are-it-2`"
    # print math.copysign(1, 3)
    # print math.copysign(1, -3)
    # print distance
    # print abs(distance)
    # print get_motor_position_counter(0)
    # print abs(get_motor_position_counter(0))
    # print 300 * 1
    # print 300 * -1
        
    enable_servos()
    set_servo_position(0, 1000)
    msleep(500)
    pause()
    set_servo_position(0, 200) 
    msleep(500)
    pause()
    
    pivot(2, "Pivot left #1")
        
        
    #print "Pivot left #2"
    #positions_clear()
    #mav(0, 300)
    #mav(3, -300)
    #msleep(2000)
    #positions_print()
    #pause()
        
    #print "Pivot right"
    #positions_clear()
    #mav(0, -300)
    #mav(3, 300)
    #msleep(2000)
    #positions_print()  
    #pause()       
        
    #positions_clear()
    #move_straight(distance, "Move forward")
    #while get_motor_position_counter(0) < distance:
    #    positions_print()
    #    mav(0, 300)
    #    mav(3, 305)
    #    msleep(100)     
	#pause()
    
    #move_straight(-distance, "Move backward")
    #while 0 < get_motor_position_counter(0):
    #    positions_print()
    #    mav(0, -300)
    #    mav(3, -305)
    #    msleep(100)  
        
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
