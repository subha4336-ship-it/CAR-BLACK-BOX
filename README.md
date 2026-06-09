# Car Black Box – PIC18F4580 | Embedded Systems Project

## Overview

Car Black Box is an Embedded Systems project developed using **PIC18F4580 microcontroller** to record and monitor vehicle events in real time. Similar to an aircraft black box, this system captures important driving information and stores logs for future analysis.

The project integrates multiple peripherals including **RTC, EEPROM, ADC, UART, CLCD, I2C, and Matrix Keypad** to create a complete event logging and monitoring system.

## Features

* Real-time clock display using **DS1307 RTC**
* Vehicle event logging with timestamp
* ADC-based speed/value monitoring
* Event storage in **EEPROM**
* User interaction through **Matrix Keypad**
* Event display using **Character LCD (CLCD)**
* UART communication for serial monitoring/debugging
* Menu-driven interface for navigation
* Persistent storage of records even after power OFF

## Hardware Used

* PIC18F4580 Microcontroller
* DS1307 RTC Module
* EEPROM
* 16x2 CLCD
* Matrix Keypad
* Potentiometer / ADC Input
* UART Interface

## Software Used

* MPLAB X IDE
* XC8 Compiler
* Embedded C

## Project Structure

* `newmain.c` → Main application flow
* `rtc.c / rtc.h` → RTC handling
* `uart.c / uart.h` → UART communication
* `eeprom.c` → Data storage
* `adc.c` → ADC operations
* `clcd.c` → LCD display control
* `mkp.c` → Keypad interface
* `black.c` → Event logging logic

## Working

1. System initializes peripherals.
2. RTC provides current time.
3. User actions/events are captured.
4. Event details are displayed on CLCD.
5. Logs are stored in EEPROM.
6. UART can be used for monitoring/debugging.

## Learning Outcomes

* Embedded C Programming
* Peripheral Interfacing
* Modular Driver Development
* Real-Time Data Logging
* Memory Management in Embedded Systems
* Debugging and System Integration

## Future Improvements

* SD Card logging
* GPS integration
* GSM alerts
* CAN communication
* Cloud dashboard support

---

Developed as part of Embedded Systems learning and practice.
