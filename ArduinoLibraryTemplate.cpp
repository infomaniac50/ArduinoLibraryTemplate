#include <Arduino.h>

#include "ArduinoLibraryTemplate.h"

ArduinoLibraryTemplate::ArduinoLibraryTemplate() {

}

void ArduinoLibraryTemplate::printHelloWorld() {
  SERIAL_PORT_MONITOR.println(HELLO_WORLD_STRING);
}