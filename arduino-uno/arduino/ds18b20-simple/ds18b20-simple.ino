// Include the libraries we need
#include <OneWire.h>
#include <DallasTemperature.h>

// Data wire is plugged into port 0 on the Wemos D1 mini
#define ONE_WIRE_BUS 7

// Setup a oneWire instance to communicate with any OneWire devices (not just Maxim/Dallas temperature ICs)
OneWire oneWire(ONE_WIRE_BUS);

// Pass our oneWire reference to Dallas Temperature. 
DallasTemperature sensors(&oneWire);

float celcius=0;

/*
 * The setup function. We only start the sensors here
 */
void setup(void)
{
  // start serial and wait for port to open
  Serial.begin(9600);
  while (!Serial);
  Serial.println("Dallas Temperature IC Control Library Demo - Simple Version");

  // Start up the library
  sensors.begin();
}

/*
 * Main function, get and show the temperature
 */
void loop(void)
{ 
  // call sensors.requestTemperatures() to issue a global temperature 
  // request to all devices on the bus
  Serial.print("Requesting temperatures...");
  sensors.requestTemperatures(); // Send the command to get temperatures
  
  // After we got the temperatures, we can print them here.
  // We use the function ByIndex, and as an example get the temperature from the first sensor only.
  celcius=sensors.getTempCByIndex(0);
  Serial.print("Temperature: ");
  Serial.print(celcius);
  Serial.println(" C");
  delay(1000);
}
