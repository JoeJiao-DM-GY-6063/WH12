# WH12

This Arduino project demonstrates a simple three-step interaction system. 
The system uses buttons, a potentiometer, and LEDs to create an interactive sequence. 
Follow the steps to complete the sequence and get feedback through LEDs

# How It Works:

1: Press Button 1.(RIGHT 1)

If successful, the system moves to Step 2.
Message in Serial Monitor: Step 1 completed: Button 1 pressed.

2: Adjust the potentiometer.

Rotate the potentiometer until its value is between 450 and 550.
If successful, the system moves to Step 3.
Message in Serial Monitor: Step 2 completed: Potentiometer adjusted to middle.

3: Press Button 2 to complete the sequence!

If successful:
The green LED lights up for 1s
Message in Serial Monitor: Step 3 completed: Button 2 pressed.
If press Button 1 instead:
The red LED lights up for 1s to indicate failure


