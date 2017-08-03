#!/usr/bin/python
#
import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BOARD)
GPIO.setup(7, GPIO.OUT)

while True:
     GPIO.output(7, GPIO.LOW)
     time.sleep(0.5)
     GPIO.output(7, GPIO.HIGH)
     time.sleep(0.5)