import pyfirmata
import time

board = pyfirmata.Arduino('/dev/ttyACM0')
angle = 90
angle1 = 90
angle2 = 90
angle3 = 90
angleStep = 5
LEFT = 10
RIGHT = 11
LEFT1 = 2
RIGHT1 = 3
LEFT2  = 6
RIGHT2 = 7
RIGHT3 = 4
LEFT3 = 5

while True:
    board.digital[13].write(1)
    time.sleep(1)
    board.digital[13].write(0)
    time.sleep(1)