# 🔬 Arduino Sensors Laboratory
**ECE NTUA | 8th Semester | Sensors Course**

---

## 📋 Overview

This repository contains Arduino code for various sensor experiments and projects completed during the **Sensors course** at the **School of Electrical and Computer Engineering (ECE)** of the **National Technical University of Athens (NTUA)**.

The laboratory exercises explore different types of sensors, their characteristics, calibration methods, and practical applications in embedded systems.

---

## 🧪 Laboratory Experiments

### 1. 📏 Distance Sensor (Ultrasonic + Temperature Compensation)
**Directory:** `distance_sensor/`

- **Sensor Type:** HC-SR04 Ultrasonic Sensor + DHT11 Temperature/Humidity Sensor
- **Features:**
  - Temperature-compensated distance measurement
  - Sound speed calculation based on environmental conditions
  - Buzzer alert for objects closer than 20cm
  - Range: 2-400 cm
- **Key Components:**
  - Ultrasonic sensor (HC-SR04)
  - DHT11 temperature/humidity sensor
  - Buzzer for proximity alerts

### 2. 🧲 Hall Effect Sensor
**Directory:** `hall_sensor/`

- **Sensor Type:** Hall Effect Magnetic Field Sensor
- **Features:**
  - Magnetic field strength measurement in mT (milliTesla)
  - LED brightness control based on field intensity
  - Real-time magnetic field visualization
  - Offset calibration
- **Applications:**
  - Magnetic field detection
  - Position sensing
  - Current measurement (indirect)

### 3. 💡 Light Sensor (LDR)
**Directory:** `light_sensor/`

- **Sensor Type:** Light Dependent Resistor (LDR)
- **Features:**
  - Dual operation modes (Analog/Digital)
  - Serial command interface ('A' for analog, 'D' for digital)
  - Frequency-based audio feedback
  - Threshold-based digital output
- **Applications:**
  - Ambient light monitoring
  - Automatic lighting control
  - Day/night detection

### 4. 🌡️ Temperature Sensor
**Directory:** `temp_sensor/`

- **Sensor Type:** LM35 Temperature Sensor
- **Features:**
  - Temperature measurement in Celsius
  - Multi-level LED indicator system:
    - 🟢 Green: ≤ 25°C
    - 🟠 Green + Orange: 25-35°C
    - 🔴 All LEDs: > 35°C
- **Applications:**
  - Environmental monitoring
  - Temperature control systems
  - HVAC applications

### 5. ⚡ Flux Gate Magnetometer
**Directory:** `flux_gate_project/`

- **Sensor Type:** Flux Gate Magnetometer
- **Features:**
  - Peak-to-peak voltage measurement
  - High-frequency sampling (~100 kHz)
  - Statistical signal analysis
  - Precise magnetic field detection
- **Applications:**
  - Geomagnetic field measurement
  - Navigation systems
  - Scientific research

---

## 🛠️ Hardware Requirements

### Common Components:
- Arduino Uno/Nano
- Breadboard and jumper wires
- USB cable for programming

### Sensor-Specific Components:
| Experiment | Required Components |
|------------|-------------------|
| **Distance Sensor** | HC-SR04, DHT11, Buzzer, Resistors |
| **Hall Sensor** | Hall effect sensor, LED, Resistors |
| **Light Sensor** | LDR, Speaker/Buzzer, Resistors |
| **Temperature Sensor** | LM35, 3x LEDs (Green, Orange, Red), Resistors |
| **Flux Gate** | Flux gate sensor, Signal conditioning circuit |

---

## 📚 Software Requirements

- **Arduino IDE** (v1.8.0 or later)
- **Libraries:**
  - `dht.h` (for DHT11 sensor)
  - Standard Arduino libraries

---

## 🚀 Getting Started

1. **Clone the repository:**
   ```bash
   git clone https://github.com/AntonisAk/Sensors_Arduino_Labs.git
   cd Sensors_Arduino_Labs
   ```

2. **Install required libraries:**
   - Download and install the DHT library for the distance sensor project
   - Extract `DHTLib.zip` in the distance_sensor folder

3. **Upload to Arduino:**
   - Open the desired `.ino` file in Arduino IDE
   - Select your board and port
   - Upload the code

4. **Connect hardware:**
   - Follow the pin configurations defined in each sketch
   - Refer to comments in the code for wiring details

---

## 📊 Pin Configurations

### Distance Sensor:
- Trigger Pin: 9
- Echo Pin: 10
- DHT11: Pin 2
- Buzzer: Pin 4

### Hall Sensor:
- Analog Input: A0
- LED Output: Pin 3

### Light Sensor:
- LDR Input: A0
- Speaker Output: Pin 11

### Temperature Sensor:
- LM35 Input: A0
- Green LED: Pin 2
- Orange LED: Pin 3
- Red LED: Pin 4

### Flux Gate:
- Analog Input: A0

---

## 📖 Learning Objectives

- Understanding different sensor technologies and their principles
- Sensor calibration and signal conditioning techniques
- Real-time data acquisition and processing
- Environmental compensation methods
- Digital signal processing basics
- Embedded system design principles

---

## 🎓 Course Information

- **Institution:** National Technical University of Athens (NTUA)
- **School:** Electrical and Computer Engineering (ECE)
- **Semester:** 8th
- **Course:** Sensors and Measurement Systems