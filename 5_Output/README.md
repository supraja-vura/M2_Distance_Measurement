# DISTANCE MEASUREMENT USING ULTRASONIC SENSOR

## INTRODUCTION

Nowadays, we have some difficulties in obtaining the distance that we want to measure. Even though, measuring tape is an easy option, but this kind of tool will have a limitation of manual error. Before this, engineers have produced a range finder module but in the end, they find out the module have many disadvantages like limitation for distance, different result for different coloured obstacles, and need a calibration for every time before starts using it. 

Manual distance measuring is always done at the expense of human error. Precise and fix measurement of low range distance, is the main objective for this project. This device can measure distance in the range of 0.5m to 4m with the accuracy of1cm.This project is used to measure the distance by using ultrasonic sensors. It works by transmitting ultrasonic waves at 40 kHz. Then, the transducers will measure the amount of time taken for a pulse of sound travel to a particular surfaces and return as the reflected echo. 

After that, the circuit that have been programmed with AT mega microcontroller will calculate the distance based on the speed of sound at 25°C which an ambient temperature and also the time taken. The distance then will be display on a LCD module. The importance of the project is calculating accurate distance from any obstacle that we want to measure. 

The device can be used in many different fields and categories like distance calculation in construction field, robots, car sensor to avoid obstacles and many other applications. The building process of the device was based on using as much as possible from the courses taken in the university, like Micro Processor, Basic Electronics Engineering, Multimedia and systems and Electronics Devices and also practical work in the laboratories.

## FEATURES

- The ultrasonic sensor emits a high-frequency sound pulse
- It calculates the distance depending  upon the time taken by the echo signal to travel back after reflecting from the desired target. 
- The speed of sound is 341 meters per second in air. 
- After the distance is calculated, it will be displayed on the LCD display. 

## DETAIL REQUIREMENTS

### HIGH LEVEL REQUIREMENT
 - Turn ON the Buzzer when the object is too close
 - Turn ON the LED when the object is too close
 - Display the distance on the LCD

### LOW LEVEL REQUIREMENT
 - Display the distance on the LCD

## Block diagram

![image](https://user-images.githubusercontent.com/68106099/164502783-3218a2bb-2112-4b6d-b291-a6efea357dd2.png)

## Circuit diagram

![image](https://user-images.githubusercontent.com/68106099/164503482-7193886b-b85a-4185-98cf-6e134cc2028b.png)

## Circuit Connection

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

## Timing Circuit

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
