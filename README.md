# 🔍 Description
**SmartWear** is an assistive device designed to help **visually impaired individuals** detect obstacles.  
It uses an **ultrasonic sensor** and a **buzzer** to measure distance and alert the user when an object is nearby.  

---

## 🛠️ Components Used
- Arduino Board (**Uno/Nano**)  
- Ultrasonic Sensor (**HC-SR04**)  
- Buzzer  
- 9V Battery / Power Supply  
- Wires and Breadboard  

---

## ⚡ Connections

### 🔋 9V Battery → Arduino Uno
- **+ve terminal** → Vin  
- **-ve terminal** → GND  

### 📡 Ultrasonic Sensor (HC-SR04) → Arduino Uno
- Vcc → 5V  
- Trig → Pin 10  
- Echo → Pin 11  
- GND → GND  

### 🔔 Buzzer → Arduino Uno
- **+ve terminal** → Pin 12  
- **-ve terminal** → GND  

---

## ⚙️ How It Works
1. The **ultrasonic sensor** continuously measures the distance to nearby objects.  
2. If the distance is **less than 20 cm**, the **buzzer turns ON** as a warning.  
3. If the distance is **greater than 20 cm**, the **buzzer remains OFF**.  
4. The **Serial Monitor** displays real-time distance readings.  

---

## 💻 Installation
1. Install the **Arduino IDE**.  
2. Copy the provided code into the IDE.  
3. Select the correct board & port:  
   - *Tools → Board → Arduino Uno/Nano*  
4. Click **Upload**.  
5. Connect the device to a power source and test it.  

---

## 🚀 Usage
- Mount the device near the **eyes** (e.g., on a glasses frame).  
- The **buzzer will sound** when an obstacle is detected.  
- Real-time distance can be checked using the **Serial Monitor**.  

---