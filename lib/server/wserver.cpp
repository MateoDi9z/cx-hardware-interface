#include "wserver.h"

cWebServer::cWebServer()
{
  server = new WebServer(80); // Puedes ajustar el puerto según tus necesidades
}

cWebServer::~cWebServer()
{
  delete server;
}

void cWebServer::routes()
{
  server->on("/", [this]()
             { server->send(200, "text/plain", "hello from esp32!"); });

  server->on("/wifis", [this]()
             { server->send(200, "text/plain", "WIFI"); });

  server->begin();
}

void cWebServer::handler()
{
  server->handleClient();
  delay(2);
}
