# Interfacing UltraSonic Sensor using AVR Microcontroller
## Introduction
Ultrasonic sensors are used to solve an array of problems across a wide range of industries like tank leveling, Vehicle detection for
car wash industry, Distance measurement, Robotic sensing, etc. It uses ultrasonic waves to search an object same as Bats uses
sonar technique to communicate with other bats. Bats are wonderful creatures. Blind from the eyes but the vision is sharper than
humans, Ultrasonic ranging is the technique used by bats. Ultrasonic sensor provides an easy way in distance measurement. The
sensor is perfect for distance measurements between moving or stationary objects. Ultrasonic Sensor measure the distance of the
objects in air through non-contact technique. They measure distance without damage and are easy to use and reliable.
These distance measurement sensors connect with all common types of automation and telemetry equipment. Machinery and
processes in a wide range of industries use distance measurement sensors where size or position feedback is required. Distance
measurement sensors are used to control or indicate the position of objects and materials. Distance measurement sensors can
determine the dimensions of objects such as height, width and diameter, using one or more sensors.
The echo time response of ultrasonic sensor detector is based on time of travel after trigger pulse to the surrounding objects is
non-linear and depends on the reflectance characteristics of the object surface.
UltraSonic sensors are widely used for distance measurement purposes. They offer low cost and a precision of less than 1 cm in
distance measurements of up to 6m [1, 4]. However, the most popular method used in these measurements is based on the time of
flight (ToF) measurement. This ToF is the time elapsed between the emission and subsequent arrival after reflection of an
Ultrasonic pulse train travelling at the speed of sound. This causes large response times for a single measurement.

## Ultrasonic Sensor

An ultrasonic sensor is an instrument that measures the distance to an object using ultrasonic sound waves. An ultrasonic sensor uses a transducer to send and receive ultrasonic pulses that relay back information about an object's proximity.Ultrasonic Module HC-SR04 works on the principle of SONAR and RADAR system.HC-SR-04 module has an ultrasonic transmitter, receiver, and control circuit on a single board.The module has only 4 pins, Vcc, Gnd, Trig, and Echo.

![image](https://user-images.githubusercontent.com/68106099/164624989-f48ac7e6-4591-4d6d-8645-21fe164f1e6c.png)

## AVR Microcontroller(ATMEGA328)

ATmega328 is an Advanced Virtual RISC (AVR) microcontroller. It supports 8-bit data processing. ATmega-328 has 32KB internal flash memory.

ATmega328 has 1KB Electrically Erasable Programmable Read-Only Memory (EEPROM). This property shows if the electric supply supplied to the micro-controller is removed, even then it can store the data and can provide results after providing it with the electric supply. Moreover, ATmega-328 has 2KB Static Random Access Memory (SRAM). Other characteristics will be explained later. ATmega 328 has several different features which make it the most popular device in today’s market. These features consist of advanced RISC architecture, good performance, low power consumption, real timer counter having separate oscillator, 6 PWM pins, programmable Serial USART, programming lock for software security, throughput up to 20 MIPS etc. Further details about ATmega 328 will be given later in this section.

![image](https://user-images.githubusercontent.com/68106099/164624872-d36ceb69-df96-499b-a041-0dc9886d4ae0.png)

## LCD Display

LCD (Liquid Crystal Display) is a type of flat panel display which uses liquid crystals in its primary form of operation. LEDs have a large and varying set of use cases for consumers and businesses, as they can be commonly found in smartphones, televisions, computer monitors and instrument panels.
LCDs were a big leap in terms of the technology they replaced, which include light-emitting diode (LED) and gas-plasma displays. LCDs allowed displays to be much thinner than cathode ray tube (CRT) technology. LCDs consume much less power than LED and gas-display displays because they work on the principle of blocking light rather than emitting it. Where an LED emits light, the liquid crystals in an LCD produces an image using a backlight.
As LCDs have replaced older display technologies, LCDs have begun being replaced by new display technologies such as OLEDs.

![image](https://user-images.githubusercontent.com/68106099/164625162-fd330ea4-bd85-4858-ac27-78204a8440ba.png)

## SWOT ANALYSIS

## 4W'S and 1'H

## Who
People driving the car may find it difficult to turn there head around everytime when parking.

## What
Driving the car is the most common activity in daily life. So being careful and avoiding unwanted trouble.

## When
Most Commonly in public places we need to be careful to avoid accidents.

## Where
In the shopping malls, public places and even in their parking lots.

## How 
By placing the Distance Finding System.

## High Level Requirements
* Alarm system to make driver more conscious.
* Light indication to know accurate distance.
* To avoid accidents by maintaining distance.

## Low Level Requirements
* To avoid accidents by maintaing distance.
