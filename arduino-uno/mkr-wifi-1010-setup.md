# Setup for MKR WiFi 1010 dev board

Setup instructions for an Arduino MKR WiFi 1010 development board.

## Circuit Diagram
Wire the components as shown in the diagram. The data line needs to be pulled high using a 4k7 ohm resistor.

![circuit diagram](assets/mkr-ds18b20-temp-sensor-circuit-diagram_schem.png)

#### Components Needed
* DS18B20 temperature sensor
* 4k7 resistor
* connecting wires
* MKR WiFi 1010 development board


<br />

![breadboard diagram](assets/mkr-ds18b20-temp-sensor-circuit-diagram_bb.png)

<br />

### Default Pin Wiring

| Pin No | Function | Device Connection |
| --- | --- | --- |
|  |  |  |
| VCC | +3.3V | Vdd |
| GND | GND | GND |
| 7 | digital 7 | DQ |

<!-- ![pin diagram](assets/rp2_pinout.png) TODO: pin out for mkr -->

<br>

## Arduino

Drivers and board details need to be installed to use the Arduino MKR series. Follow the instructions here: https://www.arduino.cc/en/Guide/MKRWiFi1010#toc2

The arduino sketch requires the OneWire and DallasTemperature libraries. They are included in the libraries folder.
