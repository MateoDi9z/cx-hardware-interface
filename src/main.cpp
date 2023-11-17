#include <Arduino.h>

#include "common.h"
#include "states.h"

cControl control;

void setup() {
  Serial.begin(912600);

  util::log("Coexist Hardware");

  control.accesspointMode();
}

void loop() {
  util::log(String(control.get_ap_status()));
  delay(500);
}
