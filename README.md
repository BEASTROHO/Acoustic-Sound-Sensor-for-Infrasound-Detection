# 🔊 Acoustic Sound Sensor for Infrasound Detection

Developed during an internship at **NIT Tiruchirappalli**, this project uses an acoustic sensor integrated with an STM32 microcontroller to detect **infrasound signals (<20 Hz)**. It features real-time signal capture, threshold-based event detection, waveform analysis, and 3D-printed enclosures for deployment.

---

## 🎯 Objective

Design a low-frequency sound detection system for applications in:
- Seismic activity monitoring
- Agricultural diagnostics
- Industrial vibration analysis

---

## 🛠️ Hardware Components

- **Microcontroller**: STM32 (e.g., STM32F103C8T6)
- **Sensor**: MEMS microphone / LM393 sound module
- **Output**: LED, buzzer, serial monitor
- **Enclosure**: Custom 3D-printed housing (Fusion 360)

---

## 🧠 Methodology

1. Calibrate sensor to ambient noise
2. Capture analog signals via ADC
3. Apply low-pass filtering to isolate <20 Hz signals
4. Trigger output or log event based on threshold
5. Analyze waveform using Audacity or Python tools

---

## 💻 Software Stack

- **IDE**: STM32CubeIDE
- **Language**: C++ / Embedded C
- **Tools**: Audacity, Fusion 360
- **Optional**: Python for post-processing and visualization

---

## ✅ Test Scenarios

| Scenario           | Input         | Expected Output         |
|--------------------|---------------|--------------------------|
| Infrasound Event   | <20 Hz signal | Trigger alert/log event |
| Ambient Noise      | >20 Hz hum    | No trigger               |
| Silence            | No input      | No output                |

---

## 📊 Results

- **Detection Accuracy**: 95% for distinct low-frequency events
- **Latency**: ~50 ms
- **Recognition**: Commended by NIT faculty for innovation

---

## 🚀 Future Enhancements

- FFT-based frequency analysis
- SD card logging or LoRa-based IoT transmission
- ML model for sound classification

---

## 📁 Repository Structure
Acoustic-Sound-Sensor-for-Infrasound-Detection/
├── src/                                                                  
│   ├── main.c               
│   └── adc_config.c                                            
├── docs/                                                      
│   ├── methodology.md                                           
│   └── waveform_analysis.png                                            
├── models/                                                            
│   └── enclosure.stl                                                        
├── test/                                                          
│   └── test_report.md                                                   
├── README.md                                                                    
└── LICENSE                                          

---

## 📬 Contact

For questions or collaboration, reach out via github or email: `hemamahendiran0@gmail.com`

---



