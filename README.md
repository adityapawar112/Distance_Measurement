# Distance Meaasurement using Ultra Sonic sensor

This project involves designing and implementing a distance measurement system using an ultrasonic sensor, Arduino Uno, and an LCD display. The HC-SR04 ultrasonic sensor is used to measure the distance to an object by emitting ultrasonic waves and calculating the time it takes for the waves to bounce back.

Components:

    Arduino Uno: The main microcontroller board used for processing and controlling the components.
    HC-SR04 Ultrasonic Sensor: Used to measure the distance by emitting and receiving ultrasonic waves.
    16x2 LCD Display: Displays the measured distance.
    Breadboard and Jumper Wires: Facilitate the connections between components.

Circuit Diagram:

![Distance-Measurement-Circuit-Diagram](https://github.com/user-attachments/assets/1d8d0e3d-ff8c-4a16-88ec-bbc06be14ad0)

Connections:

    HC-SR04 Ultrasonic Sensor:
        VCC to 5V on Arduino
        GND to GND on Arduino
        Trig to Digital Pin 9 on Arduino
        Echo to Digital Pin 10 on Arduino

    16x2 LCD Display:
        VSS to GND
        VDD to 5V
        VO to the middle pin of the potentiometer (to adjust contrast)
        RS to Digital Pin 7
        RW to GND
        E to Digital Pin 8
        D4 to Digital Pin 4
        D5 to Digital Pin 5
        D6 to Digital Pin 6
        D7 to Digital Pin 3
        A and K to 5V and GND respectively for backlight

    Potentiometer:
        Connects to V0 of the LCD for contrast adjustment.

This system utilizes the Arduino Uno to send a trigger signal to the ultrasonic sensor, which then sends out an ultrasonic wave. The sensor receives the reflected wave and calculates the time taken for the round trip. Using the speed of sound, the Arduino calculates the distance and displays it on the LCD screen. This project demonstrates proficiency in interfacing sensors with microcontrollers and handling real-time data display.
