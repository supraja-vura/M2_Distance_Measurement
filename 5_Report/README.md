# DISTANCE MEASUREMENT USING ULTRASONIC SENSOR

## INTRODUCTION

Nowadays, we have some difficulties in obtaining the distance that we want to measure. Even though, measuring tape is an easy option, but this kind of tool will have a limitation of manual error. Before this, engineers have produced a range finder module but in the end, they find out the module have many disadvantages like limitation for distance, different result for different coloured obstacles, and need a calibration for every time before starts using it. 

Manual distance measuring is always done at the expense of human error. Precise and fix measurement of low range distance, is the main objective for this project. This device can measure distance in the range of 0.5m to 4m with the accuracy of1cm.This project is used to measure the distance by using ultrasonic sensors. It works by transmitting ultrasonic waves at 40 kHz. Then, the transducers will measure the amount of time taken for a pulse of sound travel to a particular surfaces and return as the reflected echo. 

After that, the circuit that have been programmed with AT mega microcontroller will calculate the distance based on the speed of sound at 25°C which an ambient temperature and also the time taken. The distance then will be display on a LCD module. The importance of the project is calculating accurate distance from any obstacle that we want to measure. 

The device can be used in many different fields and categories like distance calculation in construction field, robots, car sensor to avoid obstacles and many other applications. The building process of the device was based on using as much as possible from the courses taken in the university, like Micro Processor, Basic Electronics Engineering, Multimedia and systems and Electronics Devices and also practical work in the laboratories.

## FEATURES 
* Indicates distance
* Avoids accidents during parking
* Ensures car and human safety
* Doesn't require driver to check the distance manually

### HIGH LEVEL REQUIREMENTS
* Alarm system to make driver more conscious.
* Light indication to know accurate distance.
* To avoid accidents by maintaining distance.

### LOW LEVEL REQUIREMENTS
* To avoid accidents by maintaing distance.

# COMPONENTS
 
## ULTRASONIC SENSORS 

An ultrasonic sensor is an instrument that measures the distance to an object using ultrasonic sound waves. An ultrasonic sensor uses a transducer to send and receive ultrasonic pulses that relay back information about an object's proximity.Ultrasonic Module HC-SR04 works on the principle of SONAR and RADAR system.HC-SR-04 module has an ultrasonic transmitter, receiver, and control circuit on a single board.The module has only 4 pins, Vcc, Gnd, Trig, and Echo.

![image](https://user-images.githubusercontent.com/68106099/164624989-f48ac7e6-4591-4d6d-8645-21fe164f1e6c.png)

## AVR MICROCONTROLLER(ATMEGA328)

ATmega328 is an Advanced Virtual RISC (AVR) microcontroller. It supports 8-bit data processing. ATmega-328 has 32KB internal flash memory.

ATmega328 has 1KB Electrically Erasable Programmable Read-Only Memory (EEPROM). This property shows if the electric supply supplied to the micro-controller is removed, even then it can store the data and can provide results after providing it with the electric supply. Moreover, ATmega-328 has 2KB Static Random Access Memory (SRAM). Other characteristics will be explained later. ATmega 328 has several different features which make it the most popular device in today’s market. These features consist of advanced RISC architecture, good performance, low power consumption, real timer counter having separate oscillator, 6 PWM pins, programmable Serial USART, programming lock for software security, throughput up to 20 MIPS etc. Further details about ATmega 328 will be given later in this section.

![image](https://user-images.githubusercontent.com/68106099/164624872-d36ceb69-df96-499b-a041-0dc9886d4ae0.png)

## LCD DISPLAY

LCD (Liquid Crystal Display) is a type of flat panel display which uses liquid crystals in its primary form of operation. LEDs have a large and varying set of use cases for consumers and businesses, as they can be commonly found in smartphones, televisions, computer monitors and instrument panels.
LCDs were a big leap in terms of the technology they replaced, which include light-emitting diode (LED) and gas-plasma displays. LCDs allowed displays to be much thinner than cathode ray tube (CRT) technology. LCDs consume much less power than LED and gas-display displays because they work on the principle of blocking light rather than emitting it. Where an LED emits light, the liquid crystals in an LCD produces an image using a backlight.
As LCDs have replaced older display technologies, LCDs have begun being replaced by new display technologies such as OLEDs.

![image](https://user-images.githubusercontent.com/68106099/164625162-fd330ea4-bd85-4858-ac27-78204a8440ba.png)


## BLOCK DIAGRAM

![image](https://user-images.githubusercontent.com/68106099/164502783-3218a2bb-2112-4b6d-b291-a6efea357dd2.png)

## CIRCUIT DIAGRAM

![image](https://user-images.githubusercontent.com/68106099/164503482-7193886b-b85a-4185-98cf-6e134cc2028b.png)

## CIRCUIT CONNECTION

![Screenshot (153)](https://user-images.githubusercontent.com/68106099/164714441-37d99332-148c-44e7-b2bf-95cddfd6ae6f.png)

## HIGH LEVEL TEST PLAN

| **Test ID** | **Description**                                              | **Actual Output** | **Expected Output** |   
|-------------|--------------------------------------------------------------|--------------------|-----------------|
|  HL01      | Turn ON the Buzzer when the object is too close |   Turn ON buzzer | Turn ON buzzer |
|  HL02      | Turn ON the led when the object is too close |  Turn ON led |Turn ON led  |
|  HL03      | Display the distance on LCD | Displays Distance | Displays Distance |

## LOW LEVEL TEST PLAN
| **Test ID** | **Description**                                              | **Actual Output** | **Expected Output** |   
|-------------|--------------------------------------------------------------|--------------------|-----------------|
|  LL01     | Display the distance on LCD | Displays Distance | Displays Distance |

## TIMING CIRCUIT

![image](https://user-images.githubusercontent.com/68106099/164503051-0045f826-9df9-4608-b359-666b5cf0dbcf.png)

## FUTURE SCOPE

This is a very economic technology and can be used in several other fields as well, few are listed as below:
 - Can be used as parking assistance systems in vehicles withhigh power ultrasonic transmitter.
 - Can be used as burglar alarm with suitable additional software for homes and offices.
 - Can be a used in liquid level measurement.
 - Can be used to find breakdowns in wires or threads
 
## CONCLUSION

The importance of the project is calculating accurate distance from any obstacle that we want to measure. The device can be used in many different fields and categories like distance calculation in construction field, robots, car sensor to avoid obstacles and many other applications. 
The building process of the device was based on using as much as possible from the courses taken in the university, like Micro Processor, Basic Electronics Engineering, Multimedia and systems and Electronics Devices and also practical work in the laboratories.

## REFERENCES

- https://papers.ssrn.com/sol3/papers.cfm?abstract_id=3628022
- https://circuitdigest.com/microcontroller-projects/distance-measurement-using-hc-sr04-avr
