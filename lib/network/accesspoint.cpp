#include "accesspoint.h"

IPAddress local_IP(192, 168, 1, 1);

cAccesspoint::cAccesspoint(String _ssid, String _password)
{
  ssid = _ssid;
  password = _password;
  local_ip = local_IP;
  util::log("new Accesspoint");
}

String cAccesspoint::get_ssid() {
  return ssid;
}

String cAccesspoint::get_password() {
  return password;
}

IPAddress cAccesspoint::get_localIP() {
  return local_ip;
}