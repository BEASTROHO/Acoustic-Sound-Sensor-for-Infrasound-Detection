# 🚀 Deployment Guide

## Flashing the Firmware
1. Connect STM32 board via USB.
2. Use STM32CubeProgrammer or ST-Link Utility.
3. Flash `main.hex` or build from source using STM32CubeIDE.

## Hardware Setup
- Connect microphone to ADC pin (PA0).
- Connect LED/buzzer to PC13.
- Power via USB or external 5V.

## Field Testing
- Place sensor in quiet environment.
- Use Audacity to compare waveform with filtered output.
- Adjust `INFRA_THRESHOLD` in `filters.h` based on ambient noise.

## Notes
- Ensure proper grounding to avoid ADC noise.
- Use shielded cables for analog input.
