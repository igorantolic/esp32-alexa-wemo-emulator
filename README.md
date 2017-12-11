## Using ESP32 with Alexa to control lights and switches (without cloud service - local only!)

"Alexa, turn living room lights on"

aka "Arduino Esp32 Alexa Wemo switch emulator"

This project is completly based on the [forked repo](https://github.com/witnessmenow/esp8266-alexa-wemo-emulator) done by witnessmenow and [forked repo](https://github.com/kakopappa/arduino-esp8266-alexa-multiple-wemo-switch) kakopappa. ALL CREDITS ACCTUALLY GO TO THEM!
Only thing changed is that it works with ESP32.
I didnt have time to set flag (#define)... (sorry)

Modified instructions:

This library enables your esp32 to simulate a Belkin Wemo switch. It can be discovered as a device by your Amazon Echo/Dot on the Smart home section. It supports calling the emulated device a custom name e.g. "Alexa, turn off test lights", where test lights is the custom name

The library supports emulating up to 14 switches using 1 ESP32 chip. (Can do even more but ... who needs more than that)

## Installing

The downloaded code can be included as a new library into the IDE selecting the menu:

     Sketch / include Library / Add .Zip library

Restart the Arduino IDE and follow the examples located at

     File -> Examples -> Esp32AlexaWemoEmulator
