
// Code generated by Arduino IoT Cloud, DO NOT EDIT.

#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>

const char DEVICE_LOGIN_NAME[]  = "bd133167-1ee8-4d26-80c5-afa45d25cf6c";

const char SSID[]               = "ZTE_2.4G_EAA2";    // Network SSID (name)
const char PASS[]               = "13141516";    // Network password (use for WPA, or use as key for WEP)
const char DEVICE_KEY[]  = "dcNZ?Rd!JA9Mu9G8vMb8t60i0";    // Secret device password

void onDistanceChange();
void onXCloudChange();
void onYCloudChange();
void onMiddleButtonChange();

float distance;
float x_cloud;
float y_cloud;
bool middle_button;

void initProperties(){

  ArduinoCloud.setBoardId(DEVICE_LOGIN_NAME);
  ArduinoCloud.setSecretDeviceKey(DEVICE_KEY);
  ArduinoCloud.addProperty(distance, READWRITE, ON_CHANGE, onDistanceChange);
  ArduinoCloud.addProperty(x_cloud, READWRITE, ON_CHANGE, onXCloudChange);
  ArduinoCloud.addProperty(y_cloud, READWRITE, ON_CHANGE, onYCloudChange);
  ArduinoCloud.addProperty(middle_button, READWRITE, ON_CHANGE, onMiddleButtonChange);

}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);
