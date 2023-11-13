# 3D Printer Control Panel

## Overview

This project is a custom control panel for a 3D printer using an Arduino. The control panel consists of buttons that trigger specific movements and actions on the 3D printer.

## Hardware Requirements

- Arduino board
- Buttons
- USB cable for connecting Arduino to the 3D printer
- Resistors (for pull-down, if needed)

## Button Functions and Corresponding G-code

| Button | Function              | G-code                                         |
|--------|-----------------------|------------------------------------------------|
| 7      | Auto Home             | `G28`                                          |
| 1      | Move Y axis Up        | `G1 Y10 F3000`                                 |
| 5      | Move Z axis Up        | `G1 Z10 F3000`                                 |
| 2      | Move X Axis Left      | `G1 X-10 F3000`                                |
| 4      | Move Y axis Down      | `G1 Y-10 F3000`                                |
| 3      | Move X Axis Right     | `G1 X10 F3000`                                 |
| 6      | Move Z axis Down      | `G1 Z-10 F3000`                                |
| 9      | Preheat               | `M140 S60\nM105\nM190 S60\nM104 S210\nM105\nM109 S200\nM82` |
| 8      | Extrude Filament      | `G1 E10 F100`                                 |
| 10     | Pause Print           | `M226`                                         |

## Installation

1. Connect buttons to Arduino digital pins as specified in the code.
2. Connect the Arduino to the 3D printer via USB.
3. Upload the provided Arduino code to the board.

## Usage

1. Press the corresponding buttons on the control panel to trigger movements and actions.
2. Monitor the Serial Monitor in the Arduino IDE to check if the correct G-code commands are being sent.

## Important Notes

- Adjust G-code commands according to your 3D printer's specifications.
- Implement proper error handling and safety features.
- Ensure that your 3D printer firmware supports the G-code commands.

## License

This project is licensed under the [MIT License](LICENSE).
