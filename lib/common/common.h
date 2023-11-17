#ifndef COMMON_H
#define COMMON_H

#define AP_SSID "Coexist Config Wifi"
#define AP_PASSWORD ""

#define OFF 0
#define STARTING 1
#define CONNECTED 2
#define ERROR 3

#include "Arduino.h"

namespace util {
    /**
     * @brief log error message
     * @param msg Error msg
     */
    void error(const String);

    /**
     * @brief log message
     * @param msg Log msg
     */
    void log(const String);
}

#endif