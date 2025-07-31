# 📡 Infrasound Detection Methodology

## Overview
This project detects infrasound signals (<20 Hz) using an analog microphone, STM32 microcontroller, and digital filtering techniques.

## Signal Acquisition
- **Sensor**: Electret microphone with preamp
- **ADC**: 12-bit sampling via STM32F103
- **Sampling Rate**: ~20 Hz to match infrasound range

## Filtering
- A low-pass filter is applied to suppress higher frequencies.
- Filter equation: `y[n] = α * x[n] + (1 - α) * y[n-1]` with α = 0.1

## Detection Logic
- Voltage threshold set at `0.8V` to identify significant low-frequency events.
- LED/buzzer triggered when filtered signal exceeds threshold.

## Applications
- Earthquake precursor monitoring
- Industrial machinery fault detection
- Wildlife tracking (e.g., elephant vocalizations)
