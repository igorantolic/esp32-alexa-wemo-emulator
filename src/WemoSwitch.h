#ifndef WemoSwitch_H
#define WemoSwitch_H

#include <Arduino.h>
#include <WiFi.h>
#include <WebServer.h>
#include <WiFiUdp.h>
#include "CallbackFunction.h"


class WemoSwitch {
private:
        WebServer *server = NULL;
        WiFiUDP UDP;
        String serial;
        String persistent_uuid;
        String device_name;
        unsigned int localPort;
        String deviceStatus;
        CallbackFunction onCallback;
        CallbackFunction offCallback;

        void startWebServer();
        void handleEventservice();
        void handleUpnpControl();
        void handleRoot();
        void handleSetupXml();
public:
        WemoSwitch();
        WemoSwitch(String alexaInvokeName, unsigned int port, CallbackFunction onCallback, CallbackFunction offCallback);
        ~WemoSwitch();
        String getAlexaInvokeName();
        void serverLoop();
        void respondToSearch(IPAddress& senderIP, unsigned int senderPort);
};

#endif
