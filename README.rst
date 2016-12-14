=====
Team Bravo: Group Project 2
=====

**Group Members:** *Angelo Renteria, Colby Tang, Colton Eastland*

**Equipment:**

- Arduino Uno
- Breadboard
- 10k Potentiometer
- 16x2 LCD Screen
- Temperature Sensor

**Objective:**

Our objective was to use an Arduino Uno to read the temperature of the room using a TMP36 sensor and output to an LCD display using AVR C and AVR Assembly. 

**Result:**

To insure our circuitry and logic was correct, we used C++ code for the Arduino. Once we confirmed everything was working correctly, we worked on getting AVR C and Assembly. We initially ran into multiple problems with getting the sensor to input into the Arduino and mixing C with Assembly. We narrowed it down that an Analog-to-Digital converter was needed to read the Temperature Sensor. With a small amount of documentation available and for the sake of simplicity, we decided to program the Arduino using only AVR C and succeeded in getting the temperature readings. However, we did not have enough time to figure out how to convert the ADC into assembly and mix AVR C and Assembly.

**Directory Notes:**

- attempts *(failed attempts, backups)*

  - lcdlibrary *(tried to import C lcd library)*
  - tempLCD *(attempt at using C calling assembly)* 
- avr      *(main folder)*

  - extra *(extraneous files for failed attempt)*
  - include *(Makefile files)*
  - main *(main directory for program)*
  
    - assembly_attempt *(attempt starting from assembly)*
    - mainCpp *(Cpp file that we tried to achieve)*

=====
Circuit Diagram
=====

.. image:: circuit_diagram.png
