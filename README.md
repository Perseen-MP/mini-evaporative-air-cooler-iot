<div align="center">

# 🌬️ Mini Evaporative Air Cooler with IoT Monitoring

### Low-Cost IoT-Based Cooling System using ESP32, DHT22 & Blynk

<img src="https://img.shields.io/badge/ESP32-IoT-E7352C?style=for-the-badge&logo=espressif" />
<img src="https://img.shields.io/badge/Arduino-IDE-00979D?style=for-the-badge&logo=arduino" />
<img src="https://img.shields.io/badge/Blynk-IoT-23C48E?style=for-the-badge" />
<img src="https://img.shields.io/badge/DHT22-Sensor-orange?style=for-the-badge" />
<img src="https://img.shields.io/badge/Platform-Embedded-blue?style=for-the-badge" />

<br><br>

*A compact, low-cost and energy-efficient evaporative cooling system that uses a DC fan and wet cooling pad to provide cooled air while monitoring temperature and humidity in real time using ESP32 and Blynk IoT.*

---

### ⭐ If you found this project useful, don't forget to star the repository!

</div>

---

# 📑 Table of Contents

- [About the Project](#-about-the-project)
- [Objectives](#-objectives)
- [Features](#-features)
- [Hardware Used](#-hardware-used)
- [Software Used](#-software-used)
- [System Architecture](#-system-architecture)
- [Circuit Diagram](#-circuit-diagram)
- [Pin Configuration](#-pin-configuration)
- [Working Principle](#-working-principle)
- [Evaporative Cooling Principle](#-evaporative-cooling-principle)
- [Blynk IoT Dashboard](#-blynk-iot-dashboard)
- [Algorithm](#-algorithm)
- [Flowchart](#-flowchart)
- [Results](#-results)
- [Installation](#-installation)
- [Blynk Configuration](#-blynk-configuration)
- [Security](#-security)
- [Folder Structure](#-folder-structure)
- [Applications](#-applications)
- [Advantages](#-advantages)
- [Limitations](#-limitations)
- [Future Scope](#-future-scope)
- [Project Information](#-project-information)
- [Author](#-author)
- [License](#-license)

---

# 📖 About the Project

The **Mini Evaporative Air Cooler with IoT Monitoring** is a low-cost and energy-efficient cooling system designed for small spaces and personal cooling applications.

Unlike conventional air conditioners, this system uses the principle of **evaporative cooling**, where warm air is passed through a wet cooling medium. As water evaporates, it absorbs heat from the surrounding air, producing cooler air.

The system uses an **ESP32** as the main controller, a **DHT22 sensor** for real-time temperature and humidity monitoring, and a **DC fan** for air circulation.

The environmental data is transmitted through Wi-Fi to the **Blynk IoT platform**, allowing the user to monitor temperature and humidity remotely using a smartphone.

This project combines:

**Embedded Systems + IoT + Sensors + Wireless Communication + Cooling Technology**

---

# 🎯 Objectives

The main objectives of this project are:

- Develop a low-cost mini evaporative air cooler.
- Reduce cooling energy consumption.
- Use a DC fan for air circulation.
- Measure temperature using DHT22.
- Measure relative humidity using DHT22.
- Use ESP32 for sensor data processing.
- Send temperature and humidity data to Blynk.
- Enable real-time remote monitoring.
- Develop a compact and portable cooling solution.
- Provide a foundation for future smart cooling automation.

---

# ✨ Features

- ✅ Low-Cost Evaporative Cooling
- ✅ Real-Time Temperature Monitoring
- ✅ Real-Time Humidity Monitoring
- ✅ ESP32-Based IoT System
- ✅ Wi-Fi Connectivity
- ✅ Blynk IoT Dashboard
- ✅ DHT22 Environmental Sensor
- ✅ DC Fan-Based Air Circulation
- ✅ Compact & Portable Design
- ✅ Low Power Consumption
- ✅ Remote Monitoring

---

# 🛠️ Hardware Used

| Component | Specification | Qty |
|---|---|---:|
| ESP32 Dev Board | Wi-Fi & Bluetooth | 1 |
| DHT22 Sensor | Temperature & Humidity | 1 |
| DC Fan | 5V / 12V DC | 1 |
| Motor Driver / MOSFET | DC Fan Control | 1 |
| Water Container | Cooling Water Reservoir | 1 |
| Cooling Pad / Sponge | Evaporative Cooling Medium | 1 |
| DC Power Supply | Based on Fan Rating | 1 |
| Jumper Wires | Electrical Connections | Several |
| Breadboard / PCB | Circuit Assembly | 1 |
| Project Enclosure | Cooling System Body | 1 |

---

# 💻 Software Used

- Arduino IDE
- Blynk IoT
- ESP32 Board Package
- DHT Sensor Library
- Adafruit Unified Sensor Library

### Programming Language

```text
C / C++ with Arduino Framework
```

---

# 🏗️ System Architecture

### System Flow

```text
                    ┌──────────────────┐
                    │   Power Supply   │
                    └────────┬─────────┘
                             │
                             ▼
                    ┌──────────────────┐
                    │      ESP32       │
                    │  Main Controller │
                    └───────┬───┬──────┘
                            │   │
                    ┌───────┘   └──────────┐
                    │                      │
                    ▼                      ▼
              ┌───────────┐        ┌─────────────┐
              │   DHT22   │        │ Motor Driver│
              │  Sensor   │        └──────┬──────┘
              └───────────┘               │
                                          ▼
                                     ┌──────────┐
                                     │  DC Fan  │
                                     └────┬─────┘
                                          │
                                          ▼
                                   Wet Cooling Pad
                                          │
                                          ▼
                                      Cooled Air

                    ESP32
                      │
                    Wi-Fi
                      │
                      ▼
                ┌────────────┐
                │   Blynk    │
                │    Cloud   │
                └─────┬──────┘
                      │
                      ▼
               📱 Mobile Dashboard
```

---

# 🔌 Circuit Diagram

Add your circuit diagram inside the `Images` folder.

```text
Images/circuit_diagram.png
```

Then use:

```html
<p align="center">
  <img src="<img width="837" height="554" alt="circuit_diagram" src="https://github.com/user-attachments/assets/ba1911bc-f2d4-4b7f-8ff6-6d016741fca9" />
" alt="Circuit Diagram" width="800">
</p>
```

---

# 📍 Pin Configuration

## DHT22

| DHT22 Pin | ESP32 Pin |
|---|---|
| VCC | 3.3V |
| DATA | GPIO 4 |
| GND | GND |

## DC Fan Control

| Motor Driver Pin | ESP32 / Supply |
|---|---|
| IN | GPIO 5 |
| VCC | External Supply |
| GND | Common GND |
| Motor Output | DC Fan |

> **Note:** The exact motor-driver wiring depends on the driver used. A high-current DC fan should not be powered directly from an ESP32 GPIO.

---

# ⚙️ Working Principle

### Step 1 — Water Storage

Water is filled into the cooling system's reservoir.

### Step 2 — Cooling Pad

The cooling pad or sponge absorbs water and provides a wet surface for evaporation.

### Step 3 — Air Circulation

The DC fan draws warm air from the surroundings.

### Step 4 — Evaporative Cooling

The warm air passes through the wet cooling pad.

Water evaporates and absorbs heat from the air.

### Step 5 — Cooled Air

The cooled air is pushed out by the DC fan.

### Step 6 — Environmental Monitoring

The DHT22 continuously measures:

- Temperature
- Relative Humidity

### Step 7 — IoT Communication

The ESP32 receives the sensor readings and sends them to the Blynk Cloud through Wi-Fi.

### Step 8 — Remote Monitoring

The user can view temperature and humidity through the Blynk dashboard.

---

# 💧 Evaporative Cooling Principle

The system works based on the principle of **evaporative cooling**.

When water changes from liquid to vapour, it requires energy in the form of heat. This heat is absorbed from the surrounding air.

```text
Warm Air
   +
Wet Cooling Pad
   ↓
Water Evaporation
   ↓
Heat Absorption
   ↓
Reduced Air Temperature
   ↓
Cooled Air
```

The cooling effect depends strongly on the relative humidity of the surrounding environment.

---

# 📱 Blynk IoT Dashboard

The Blynk IoT platform is used for real-time monitoring.

### Datastream Configuration

| Parameter | Virtual Pin | Unit |
|---|---|---|
| Temperature | V0 | °C |
| Humidity | V1 | % |

### Example Monitoring

```text
┌──────────────────────────────┐
│       MINI AIR COOLER        │
│                              │
│   🌡 Temperature : 29.5 °C   │
│                              │
│   💧 Humidity    : 67.2 %    │
│                              │
└──────────────────────────────┘
```

### Blynk Dashboard Screenshot

Add your screenshot to:

```text
Images/blynk_dashboard.jpg
```

Then use:

```html
<p align="center">
  <img src="<img width="1920" height="1080" alt="blynk_dashboard" src="https://github.com/user-attachments/assets/e9af653d-0ec9-48bf-af00-31ddc37aeb81" />
" width="450">
</p>
```

---

# 🧮 Algorithm

1. Initialize ESP32.
2. Initialize DHT22 sensor.
3. Initialize Wi-Fi.
4. Connect ESP32 to Blynk Cloud.
5. Start the DC fan.
6. Read temperature from DHT22.
7. Read humidity from DHT22.
8. Check whether the sensor readings are valid.
9. Send temperature to Blynk V0.
10. Send humidity to Blynk V1.
11. Display sensor values in Serial Monitor.
12. Repeat the process continuously.

---

# 🔄 Flowchart

```text
                 ┌───────────┐
                 │   START   │
                 └─────┬─────┘
                       │
                       ▼
              ┌─────────────────┐
              │ Initialize ESP32│
              │     & DHT22     │
              └────────┬────────┘
                       │
                       ▼
                ┌─────────────┐
                │ Connect Wi-Fi│
                └──────┬──────┘
                       │
                       ▼
                ┌─────────────┐
                │ Connect Blynk│
                └──────┬──────┘
                       │
                       ▼
                ┌─────────────┐
                │ Read DHT22  │
                └──────┬──────┘
                       │
                       ▼
              ┌──────────────────┐
              │ Valid Sensor Data│
              │       ?          │
              └───────┬──────────┘
                  No  │  Yes
                  │   │
                  │   ▼
                  │ Send Data
                  │ to Blynk
                  │   │
                  │   ▼
                  │ Display Data
                  │   │
                  └───┘
                       │
                       ▼
                  ┌─────────┐
                  │ Repeat  │
                  └─────────┘
```

---

# 📊 Results

The developed prototype provides:

- ✔ Real-Time Temperature Monitoring
- ✔ Real-Time Humidity Monitoring
- ✔ IoT-Based Remote Monitoring
- ✔ Evaporative Cooling
- ✔ DC Fan-Based Air Circulation
- ✔ Low-Cost Implementation
- ✔ Wi-Fi Connectivity
- ✔ Blynk Dashboard Visualization

### Example Serial Monitor Output

```text
---------------------------
Temperature: 29.50 °C
Humidity: 67.20 %
---------------------------

---------------------------
Temperature: 29.40 °C
Humidity: 67.50 %
---------------------------
```

---

# 🚀 Installation

## 1. Clone Repository

```bash
git clone https://github.com/Perseen-MP/mini-evaporative-air-cooler-iot.git
```

## 2. Open Arduino IDE

Open:

```text
Arduino_Code/mini_air_cooler.ino
```

## 3. Install Required Libraries

Open:

```text
Sketch
   ↓
Include Library
   ↓
Manage Libraries
```

Install:

```text
DHT sensor library by Adafruit
Adafruit Unified Sensor
Blynk
```

Also install the **ESP32 Board Package**.

---

# 📡 Blynk Configuration

Create a new Blynk template.

### Template Settings

```text
Hardware    → ESP32
Connection  → Wi-Fi
```

### Datastreams

```text
V0 → Temperature → Double → °C
V1 → Humidity    → Double → %
```

### Blynk Credentials

Add the following to the Arduino code:

```cpp
#define BLYNK_TEMPLATE_ID "YOUR_TEMPLATE_ID"
#define BLYNK_TEMPLATE_NAME "Mini Air Cooler"
#define BLYNK_AUTH_TOKEN "YOUR_AUTH_TOKEN"
```

### Wi-Fi Credentials

```cpp
char ssid[] = "YOUR_WIFI_NAME";
char pass[] = "YOUR_WIFI_PASSWORD";
```

---

# 🔐 Security

**Never upload sensitive credentials to GitHub.**

Do not commit:

```cpp
#define BLYNK_AUTH_TOKEN "YOUR_REAL_TOKEN"

char ssid[] = "YOUR_REAL_WIFI";
char pass[] = "YOUR_REAL_PASSWORD";
```

Use placeholders instead:

```cpp
#define BLYNK_AUTH_TOKEN "YOUR_AUTH_TOKEN"

char ssid[] = "YOUR_WIFI_NAME";
char pass[] = "YOUR_WIFI_PASSWORD";
```

For a public repository, credentials should always be kept private.

---

# 📤 Upload Code

Connect the ESP32 to your computer using USB.

Select:

```text
Board: ESP32 Dev Module
Port: Your ESP32 COM Port
```

Then:

```text
Verify → Upload
```

Open Serial Monitor:

```text
Baud Rate: 115200
```

---

# 📂 Folder Structure

```text
mini-evaporative-air-cooler-iot/
│
├── Arduino_Code/
│   └── code.ino
│
├── Images/
│   ├── prototype.jpg
│   ├── prototype 1.png
│   ├── block_diagram.png
│   ├── circuit_diagram.png
│   └── blynk_dashboard.jpg
│
├── Report/
│   └── project_report.pdf
│
├── README.md
│
└── LICENSE
```

---

# 🌍 Applications

- 🌬️ Personal Cooling Systems
- 🏠 Small Rooms
- 📚 Study Tables
- 💻 Workspaces
- 🏢 Small Offices
- 🏪 Shops
- 🔬 Small Laboratories
- 🚐 Portable Cooling Systems
- 🎓 Educational & Academic Projects

---

# ✅ Advantages

1. Low-cost implementation.
2. Low power consumption.
3. Compact and portable.
4. Simple construction.
5. Easy maintenance.
6. Real-time temperature monitoring.
7. Real-time humidity monitoring.
8. Remote IoT monitoring.
9. Suitable for small spaces.
10. Easy to upgrade with automation.

---

# ⚠️ Limitations

1. Cooling performance depends on ambient humidity.
2. Water needs to be refilled periodically.
3. Cooling pad requires regular cleaning.
4. Not suitable as a replacement for conventional air conditioning.
5. Cooling effectiveness decreases at high humidity.
6. Limited cooling capacity compared with larger cooling systems.

---

# 🚀 Future Scope

The project can be enhanced with:

- 🌡️ Automatic temperature-based fan control
- 🎛️ PWM-based variable fan speed
- 💧 Automatic water pump control
- 🚰 Water-level sensor
- 📱 Blynk push notifications
- 📈 Historical temperature and humidity graphs
- 🖥️ OLED/LCD local display
- ⚡ Power consumption monitoring
- ☀️ Solar-powered operation
- 🤖 Automatic cooling mode
- 🧠 Smart environmental control

### Future Smart Fan Control

```text
Temperature < 27°C
        │
        ▼
   LOW FAN SPEED

Temperature 27–30°C
        │
        ▼
  MEDIUM FAN SPEED

Temperature > 30°C
        │
        ▼
   HIGH FAN SPEED
```

---

# 📑 Project Report

The complete project report is available in:

```text
Report/project_report.pdf
```

The report contains:

- Introduction
- Objectives
- Problem Statement
- Proposed System
- Hardware Description
- Software Description
- Working Principle
- Evaporative Cooling
- Blynk IoT Monitoring
- Results
- Advantages
- Limitations
- Applications
- Future Scope
- Conclusion

---

# 🎓 Project Information

| Parameter | Details |
|---|---|
| Project Title | Mini Evaporative Air Cooler with IoT Monitoring |
| Domain | IoT / Embedded Systems |
| Controller | ESP32 |
| Sensor | DHT22 |
| Cooling Method | Evaporative Cooling |
| Actuator | DC Fan |
| IoT Platform | Blynk |
| Programming | C/C++ |
| IDE | Arduino IDE |
| Communication | Wi-Fi |
| Application | Small-Space / Personal Cooling |

---

# 👨‍💻 Author

<div align="center">

## **Perseen M.P**

### B.E. Electrical and Electronics Engineering

**Rohini College of Engineering and Technology**

IoT • ESP32 • Embedded Systems • Electrical Engineering

<br>

<a href="https://github.com/Perseen-MP">
<img src="https://img.shields.io/badge/GitHub-181717?style=for-the-badge&logo=github">
</a>

<a href="https://linkedin.com/in/perseen-m-p-498441374">
<img src="https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin">
</a>

</div>

---

# 📜 License

This project is developed for **educational and academic purposes**.

You are free to study, modify, and improve this project with appropriate attribution.

---

<div align="center">

## ⭐ Star this repository if you found it useful!

### Built with ❤️ using ESP32 • DHT22 • Blynk • Arduino

</div>
