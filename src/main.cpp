#include <Arduino.h>

#include "common.h"
#include "states.h"
#include "wserver.h"

cControl control;
cWebServer server;

void setup()
{
  Serial.begin(912600);

  util::log("Coexist Hardware");

  control.accessPointMode();

  server.routes();
}

void loop()
{
  delay(500);

  server.handler();
}
