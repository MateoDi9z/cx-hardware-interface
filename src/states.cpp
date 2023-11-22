#include "states.h"

cControl::cControl()
{
	util::log("new Control");
	ap_status = OFF;
	ap = new cAccessPoint(AP_SSID, AP_PASSWORD);
}

int cControl::get_ap_status()
{
	return ap_status;
}

bool cControl::accessPointMode()
{
	// put function definitions here:
	util::log("Starting AP...");
	ap_status = STARTING;
	util::log("STARTING");

	WiFi.mode(WIFI_AP);
	WiFi.softAPConfig(ap->get_localIP(), ap->get_localIP(), IPAddress(255, 255, 255, 0));

	util::log(WiFi.softAPIP().toString());
	util::log(WiFi.softAPBroadcastIP().toString());
	util::log(WiFi.broadcastIP().toString());
	util::log(WiFi.gatewayIP().toString());

	if (WiFi.softAP(ap->get_ssid().c_str(), ap->get_password().c_str()))
	{
		ap_status = CONNECTED;

		util::log("CONNECTED");
		return true;
	}

	else
	{
		ap_status = ERROR;

		util::log("ERROR");
		return false;
	}
}

// if (!(router.dnsServer.start(53, "*", ap_ip)))
// {
// util::error("DNS Fail!");
// ap_status = ERROR;
// }
// util::log(WiFi.dnsIP().toString());
// util::log("DNS Success");