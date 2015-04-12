#include <ArduinoLibraryTemplate.h>

ArduinoLibraryTemplate arduinotemplate;

void setup()
{
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for Leonardo only
  }

  Serial.print("Printing \"");
  Serial.print(HELLO_WORLD_STRING);
  Serial.println("\" every second.");
}

void loop()
{
  arduinotemplate.printHelloWorld();
  delay(1000);
}