#!/usr/bin/python
import os, sys
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

def main():
    print "Started"
    enable_servos()
    set_servo_position(0,  200)
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
        
    print "Move forward"
    positions_clear()
    while get_motor_position_counter(0)  < distance:
        positions_print()
        mav(0, 300)
        mav(3, 305)
        msleep(100)     
	
    pause()
    
    print "Move backward"
    while 0 < get_motor_position_counter(0):
        positions_print()
        mav(0, -300)
        mav(3, -305)
        msleep(100)  
        
    disable_servos()         
    print "Completed"
        
#def move(speed_left, speed_right, duration):
#    #motor(0,speed_left)
#    #motor(3,speed_right)
#    msleep(duration) 
#    print "moved"+ str(3)
#    #move()

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
