#ifndef CACCESSPOINT_H_
#define CACCESSPOINT_H_

#include "Arduino.h"
#include "common.h"

class cAccessPoint
{
public:
  cAccessPoint(String _ssid, String _password);

  String get_ssid();
  String get_password();
  IPAddress get_localIP();

private:
  String ssid;
  String password;
  IPAddress local_ip;
};

#endif