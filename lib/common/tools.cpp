#include "common.h"

void util::error(const String _msg)
{
    String errorMessage = "Error > ";
    errorMessage += _msg;
    Serial.println(errorMessage);
}

void util::log(const String _msg)
{
    Serial.println(_msg);
}