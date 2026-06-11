# Smart Energy Meter System
Project URL : https://wokwi.com/projects/466453772074735617
## Overview

The Smart Energy Meter System is an IoT-based simulation developed using ESP32 in Wokwi. The project monitors simulated electrical power consumption using a potentiometer as the load input. The system calculates current and power, displays the values on an I2C LCD, and provides an overload indication through an LED.

This project demonstrates the fundamentals of energy monitoring and smart power management without requiring a physical energy meter sensor.

---

## Features

- Real-time current monitoring
- Power calculation
- LCD display
- Overload indication
- Serial Monitor output
- ESP32 based
- Wokwi compatible

---

## Components Used

- ESP32 DevKit V1
- 16x2 I2C LCD
- Potentiometer
- LED
- 220Ω Resistor
- Jumper Wires

---

## Circuit Connections

### LCD

| LCD | ESP32 |
|------|--------|
| VCC | 5V |
| GND | GND |
| SDA | GPIO21 |
| SCL | GPIO22 |

### Potentiometer

| Pot | ESP32 |
|------|--------|
| Left | GND |
| Right | 3.3V |
| Middle | GPIO34 |

### LED

GPIO18 → 220Ω → LED → GND

---

## Working Principle

The potentiometer acts as a variable electrical load. The ESP32 reads the analog value, converts it into simulated current, calculates power using

Power = Voltage × Current

A fixed voltage of 230V is assumed.

The LCD continuously displays the calculated values.

Whenever power exceeds 1500W, the LED turns ON indicating overload.

---

## Applications

- Home Energy Monitoring
- Smart Buildings
- Industrial Energy Monitoring
- Educational Projects
- IoT Demonstrations

---

## Advantages

- Low-cost simulation
- Easy to understand
- No physical energy sensor required
- Beginner friendly
- Expandable to cloud monitoring

---

## Limitations

- Uses simulated load.
- Voltage is fixed.
- Not intended for commercial energy measurement.

---

## Future Improvements

- Add PZEM-004T sensor
- Wi-Fi dashboard
- Blynk integration
- Cloud data logging
- Mobile notifications

---

## Output

Current, Power and Status are displayed on the LCD and Serial Monitor.

---

## Author

Nithiya Monika
