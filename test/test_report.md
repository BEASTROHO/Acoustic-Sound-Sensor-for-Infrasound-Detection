# 🧪 Test Report: Infrasound Detection System

## Objective
Validate the system's ability to detect low-frequency (<20 Hz) acoustic signals and ignore ambient noise.

## Test Setup
- **Location**: Quiet lab environment, NIT Tiruchirappalli
- **Sensor**: Electret mic with preamp
- **Microcontroller**: STM32F103C8T6
- **Tools**: Audacity, serial monitor, oscilloscope

## Test Scenarios

| Scenario           | Input Signal        | Expected Output       | Result     |
|--------------------|---------------------|------------------------|------------|
| Infrasound Event   | 15 Hz sine wave     | LED ON, buzzer beep   | ✅ Passed   |
| Ambient Noise      | 60 Hz hum           | No trigger             | ✅ Passed   |
| Silence            | No input            | No output              | ✅ Passed   |
| Threshold Sweep    | 0.5V to 1.2V signal | Trigger at ~0.8V       | ✅ Passed   |

## Observations
- Detection latency: ~50 ms
- False positives: None during ambient noise test
- Filter response: Smooth decay with α = 0.1

## Screenshot
![Test Waveform](test/test_waveform.png)

## Raw Log
See `test_log.txt` for serial output during detection.
