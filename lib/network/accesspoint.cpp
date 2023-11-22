#include "accesspoint.h"

IPAddress local_IP(192, 168, 1, 1);

cAccessPoint::cAccessPoint(String _ssid, String _password)
{
  ssid = _ssid;
  password = _password;
  local_ip = local_IP;
  util::log("new Access Point");
}

String cAccessPoint::get_ssid()
{
  return ssid;
}

String cAccessPoint::get_password()
{
  return password;
}

IPAddress cAccessPoint::get_localIP()
{
  return local_ip;
}