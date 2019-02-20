#include <WiFi.h>
#include <WiFiClient.h>
#include "ESP32FtpServer.h"

const char* ssid = "*********************";
const char* password = "*********************";


FtpServer ftpSrv;   //set #define FTP_DEBUG in ESP32FtpServer.h to see ftp verbose on serial

//#define FTP_DEBUG
//SD card options
/*
#define SD_CS 5
#define SDSPEED 40000000
*/

void setup(void){
  Serial.begin(115200);


  WiFi.begin(ssid, password);
  Serial.println("");
  pinMode(19, INPUT_PULLUP); //pullup GPIO2 for SD_MMC mode, you need 1-15kOm resistor connected to GPIO2 and GPIO19

  // Wait for connection
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("Connected to ");
  Serial.println(ssid);
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());

  /////FTP Setup, ensure SD is started before ftp;  /////////
  
  ////if (SD.begin( SD_CS, SPI, SDSPEED)) {
  if (SD_MMC.begin()) {
      Serial.println("SD opened!");
      ftpSrv.begin("esp32","esp32");    //username, password for ftp.  set ports in ESP32FtpServer.h  (default 21, 50009 for PASV)
  }    
}

void loop(void){
  ftpSrv.handleFTP();        //make sure in loop you call handleFTP()!!   

}
