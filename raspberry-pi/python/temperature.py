# python script that outputs the temperature from a 1-wire sensor to the commandline.
import time
from w1thermsensor import W1ThermSensor

sensor = W1ThermSensor()

print("** DS18B20 Temperature Sensor (CTRL+c to exit) **")
print("")

try:
    while True:
        # get sensor temperature and store value in variable 'temperature'
        temperature = sensor.get_temperature()

        # print value to console.
        # {} is used in conjunction with format() for substitution.
        # .2f       - format to 2 decimal places.
        # end='\r'  - curser will go to the start of the current line instead of making a new line.
        print("Temperature is {:.2f}".format(temperature), end='\r')
        time.sleep(1)

except KeyboardInterrupt:
    print('script stopped by user')
finally:
    print('Goodbye!')
