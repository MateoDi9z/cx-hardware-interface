#ifndef CWEBSERVER_H_
#define CWEBSERVER_H_

#include "Arduino.h"
#include <WebServer.h>

class cWebServer
{
public:
  cWebServer();  // Constructor
  ~cWebServer(); // Destructor

  void routes();
  void handler();

private:
  WebServer *server;
};

#endif