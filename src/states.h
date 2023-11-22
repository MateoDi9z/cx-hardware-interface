#ifndef STATES_H
#define STATES_H

#include "WiFi.h"
#include "accesspoint.h"
#include "common.h"

class cControl {
  public:
    cControl();
    bool accessPointMode();

    int get_ap_status();

  private:
    int ap_status;
    cAccessPoint *ap;
};

#endif