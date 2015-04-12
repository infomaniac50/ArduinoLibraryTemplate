#include <Arduino.h>

#include "ArduinoLibraryTemplate.h"

ArduinoLibraryTemplate::ArduinoLibraryTemplate() {

}

ArduinoLibraryTemplate::printHelloWorld() {
  SERIAL_PORT_MONITOR.println("Hello World!");
}