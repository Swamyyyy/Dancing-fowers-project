# Dancing-fowers-project
An interactive dancing flower project using an Arduino UNO, five servo motors, and an IR sensor. When a person places their hand near the IR sensor, the flowers move back and forth. When the hand is removed, the flowers smoothly return to their center position.

## Components

| Component | Quantity |
|---|---:|
| Arduino UNO | 1 |
| DG90 Servo Motor | 5 |
| IR Sensor Module | 1 |
| External 5V Power Supply | 1 |
| Flower Structures | 5 |
| Jumper Wires | As required |

## Connections

| Component | Arduino Pin |
|---|---|
| Servo 1 | D8 |
| Servo 2 | D9 |
| Servo 3 | D10 |
| Servo 4 | D11 |
| Servo 5 | D12 |
| IR Sensor OUT | D13 |
| IR Sensor VCC | 5V |
| IR Sensor GND | GND |

Working:

No hand detected → flowers stay around 35°
Hand detected → flowers move between 20° and 50°
Hand removed → flowers smoothly return to 35°
