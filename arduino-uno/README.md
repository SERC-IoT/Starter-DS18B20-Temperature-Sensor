# Arduino Uno and DS18B20 Temperature Sensor

Setup instructions and starter code for using the DS18B20 temperature sensor and an Arduino development board.

<br>

## Files and Folders

| File/Folder | Description |
|--- | --- |
| mkr-wifi-1010-setup.md | Setup instructions for using an Arduino MKR WiFi 1010 dev board. |
|  |  |

<br>

## Setup

Setup instructions for an Arduino Uno board is below. For MKR WiFi 1010 based setup instructions see [mkr-wifi-1010-setup.md](mkr-wifi-1010-setup.md).

## Circuit Diagram
Wire the components as shown in the diagram. The data line needs to be pulled high using a 4k7 ohm resistor.

![circuit diagram](assets/uno-ds18b20-temp-sensor-circuit-diagram_schem.png)

#### Components Needed
* DS18B20 temperature sensor
* 4k7 ohm resistor
* connecting wires
* arduino uno development board


<br />

![breadboard diagram](assets/uno-ds18b20-temp-sensor-circuit-diagram_bb.png)

<br />

### Default Pin Wiring

| Pin No | Function | Device Connection |
| --- | --- | --- |
| 5V | +5V | Vdd |
| GND | GND | GND |
| D7 | digital 7 | DQ |

<!-- todo: pin diagram for uno ![pin diagram](assets/wemos-d1-mini-pinout.png) -->

<br>

## Arduino

The sketch will work with many different types and chipset of board. To use an Arduino Uno, make sure to select the correct board in Boards Manager.

The arduino sketch requires the OneWire and DallasTemperature libraries. They are included in the libraries folder.


## References

* https://create.arduino.cc/projecthub/TheGadgetBoy/ds18b20-digital-temperature-sensor-and-arduino-9cc806
