# Dancing-fowers-project
An interactive dancing flower project using an Arduino UNO, five servo motors, and an IR sensor. When a person places their hand near the IR sensor, the flowers move back and forth. When the hand is removed, the flowers smoothly return to their center position.

Components:
Arduino UNO
5 × DG90 servo motors
IR sensor module
External 5V power supply
Flower structures
Jumper wires

Connections:
Component	    Arduino Pin
Servo 1	          D8
Servo 2	          D9
Servo 3	          D10
Servo 4	          D11
Servo 5	          D12
IR OUT	          D13
IR VCC	          5V
IR GND	          GND

Working:

No hand detected → flowers stay around 35°
Hand detected → flowers move between 20° and 50°
Hand removed → flowers smoothly return to 35°
