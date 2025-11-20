Single LED Blink – ATmega16 ✨
Introduction

This mini project shows how to blink an LED using the ATmega16 microcontroller.
The LED is connected to PB0, and it turns ON and OFF every 1 second.
This helps beginners understand basic GPIO programming and delay usage in AVR.

Requirements 🔧

ATmega16

Atmel Studio 7

Proteus 8

LED + 330Ω resistor

5V supply

Circuit Explanation 💡

PB0 (pin 1) is used as an output pin.
The LED is connected through a 330Ω resistor to ground.
The controller runs on the 8 MHz internal clock, so no external crystal is required.

Circuit Layout (Simple Text)
ATmega16
PB0 → LED → 330Ω → GND
VCC → +5V
GND → Ground

Code (main.c) 🧑‍💻
#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRB |= (1 << DDB0); // PB0 as output

    while(1)
    {
        PORTB |= (1 << PB0);   // LED ON
        _delay_ms(1000);

        PORTB &= ~(1 << PB0);  // LED OFF
        _delay_ms(1000);
    }
}

How to Run in Atmel Studio ▶️

Create a new GCC project

Select ATmega16

Paste the code in main.c

Build the project to generate the HEX file

Proteus Simulation 🖥️

Place ATmega16, LED, and resistor

Load the HEX file into the MCU

Set the clock frequency to 8 MHz

Run the simulation to see the LED blinking

Output ✔️

The LED blinks ON for 1 second and OFF for 1 second continuously.

Conclusion 📘

This experiment is a simple introduction to AVR programming.
It teaches pin configuration, delay functions, and basic simulation steps — useful before moving to sensors, LCDs, and communication modules.
