# XIAO ESP32C3 Projects 🚀

Welcome to the **XIAO ESP32C3 Projects** repository!  
This repository contains example projects demonstrating the use of the Seeed Studio XIAO ESP32C3 microcontroller board with sensors and peripherals such as the DHT22 sensor and 16x2 I2C LCD, including NTP-based time synchronization. ⏰🌡️

---

## About Seeed Studio XIAO ESP32C3 🛠️

The **Seeed Studio XIAO ESP32C3** is a compact and powerful microcontroller board based on the Espressif ESP32-C3 chip. It combines WiFi and Bluetooth connectivity with low power consumption, making it ideal for IoT and embedded applications. 🌐🔋

### Key Features ✨

- **Processor:** ESP32-C3 RISC-V 32-bit single-core, up to 160 MHz ⚡  
- **Wireless:** WiFi 2.4 GHz and Bluetooth 5 (LE) 📶  
- **Memory:** 400 KB SRAM, 384 KB ROM, 4 MB Flash 💾  
- **Size:** Ultra-compact (20 x 17.5 mm) 📏  
- **Power:** 3.3V operation with low power modes 🔌  
- **GPIO:** Multiple digital I/O pins with ADC, PWM, UART, SPI, I2C support 🔧  
- **USB:** USB Type-C for programming and power 🔌  
- **Compatibility:** Supports Arduino framework and ESP-IDF 🛠️  
- **Peripherals:** I2C, SPI, UART, ADC, PWM, etc. 🔗

---

## Repository Contents 📂

### 1. DHT22_Sensor 🌡️💧  
- Reads temperature and humidity data from the DHT22 sensor.  
- Displays readings on a 16x2 I2C LCD.  
- Includes error handling for sensor read failures. ⚠️

### 2. NTP_TIME ⏰  
- Connects XIAO ESP32C3 to WiFi.  
- Synchronizes time using an NTP server.  
- Displays current time and date on a 16x2 I2C LCD. 🕒

---

## Getting Started 🏁

### Prerequisites 📋

- Arduino IDE (latest version recommended)  
- Required Arduino libraries:
  - `WiFi` (built-in for ESP32)  
  - `WiFiUdp`  
  - `NTPClient`  
  - `TimeLib`  
  - `LiquidCrystal_I2C`  
  - `DHT` (for DHT22 sensor)

### Hardware Required 🔌

- Seeed Studio XIAO ESP32C3 board  
- DHT22 temperature and humidity sensor  
- 16x2 I2C LCD display  
- Connecting wires and breadboard (optional)

### Wiring Overview 🔌

| Component       | XIAO ESP32C3 Pin | Notes                          |
|-----------------|------------------|--------------------------------|
| DHT22 Data      | D0               | Use 4.7k-10k pull-up resistor  |
| LCD SDA         | D5               | I2C SDA line                   |
| LCD SCL         | D4               | I2C SCL line                   |
| Power (3.3V/5V) | 3.3V or 5V       | According to component specs   |
| Ground          | GND              | Common ground                  |

---

## Contribution 🤝

Contributions are welcome! Feel free to fork this repository and add your own projects or improvements related to the XIAO ESP32C3 board.

---

Thank you for checking out the XIAO ESP32C3 Projects!  
Happy coding and IoT prototyping! 😄🚀
