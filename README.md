# 🚗 Arduino Smart Car with Bluetooth Control & Obstacle Detection 🔊

This project demonstrates an **Arduino-based smart car** that can be controlled using a **Bluetooth module** and a mobile app.  
The car moves **forward, backward, or stops** based on commands sent via Bluetooth.  
Additionally, it uses an **ultrasonic sensor** to detect obstacles within 100 cm. If an obstacle is detected,  
the motors stop automatically, a **buzzer alarm** is triggered, and a warning message is displayed on the **LCD**.

---

## ✨ Features
- Control the car via **Bluetooth mobile app**:
  - `forward` → Moves car forward
  - `backward` → Moves car backward
  - `stop` → Stops the car
- **Ultrasonic sensor** detects obstacles within 100 cm.
- **Buzzer alert** when obstacle is detected.
- **16x2 I2C LCD** displays real-time status (moving forward, backward, stopped, obstacle alert).
- Uses **DC motors with L298N Motor Driver** for movement.

---

## 🛠️ Components Used
- Arduino Uno
- Ultrasonic Sensor (HC-SR04)
- L298N Motor Driver
- 2 × DC Motors
- **Bluetooth Module (HC-05 / HC-06)**
- 16x2 I2C LCD
- Buzzer
- Wires, Breadboard, Power supply

---

## 📜 How it Works
1. Connect your smartphone to the **Bluetooth module (HC-05/HC-06)**.
2. Open a Bluetooth controller app (like **Bluetooth Terminal** or a custom app).
3. Send commands via Bluetooth:
   - `forward` → Car moves forward.
   - `backward` → Car moves backward.
   - `stop` → Car stops.
4. Ultrasonic sensor continuously measures distance:
   - If distance < 100 cm:
     - Car stops immediately.
     - Buzzer sounds.
     - LCD displays **"OBSTACLE HERE!!"**
   - If distance ≥ 100 cm → car moves normally.

---

## 📂 Project Structure
