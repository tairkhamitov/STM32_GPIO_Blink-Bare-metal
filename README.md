# **STM32 GPIO LED Blinker (Bare-Metal)**

This project implements a simple GPIO LED blinking example using the STM32F103C8T6 "Bluepill" development board. The code is written in **bare-metal C** without using any HAL or LL libraries — direct register access only.

---

## Description

The goal is to manually configure the GPIO peripheral, enable the clock via RCC, and toggle the LED with a delay loop. This approach offers full control over the hardware and is essential for mastering embedded systems development.

---

##  Tools & Technologies

| Category             | Tool/Technology                  |
|----------------------|----------------------------------|
| Microcontroller      | STM32F103C8T6 (Bluepill)         |
| Programming Language | C (Bare-metal, no HAL/LL)        |
| IDE                  | STM32CubeIDE                     |
| Compiler             | arm-none-eabi-gcc                |
| Debugging Tools      | ST-Link V2, OpenOCD, GDB         |

---

##  Project Structure

```plaintext
.
├── Core
│   ├── Inc
│   │   └── main.h
│   ├── Src
│   │   └── main.c     ← Contains all register-level code
│   └── Makefile
│ 
├── Drivers
├── .gitignore
└── README.md

![STM32F103C8T6](https://github.com/tairkhamitov/STM32_GPIO_Blink-Bare-metal/blob/main/exmpl.STM.png)
