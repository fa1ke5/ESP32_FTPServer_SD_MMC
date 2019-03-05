# ESP32_FTPServer_SD
This code based from ESP32_FTPServer_SD from user robo8080 https://github.com/robo8080/ESP32_FTPServer_SD and [Simple FTP Server for using esp8266 SPIFFs](https://github.com/nailbuster/esp8266FTPServer "Title") 
This version used ESP32 and SD card in SD_MMC mode (No SD lib, SD_MMC lib) and more than 3MB/s SD read/write speed. Added ful fuctional passive mode ftp server, browse dir, change dir, rename dir/file, delete dir/file, upload and download files, dir's. On esp32 wroom i can take up to 1050 KB/s downloading speed(need tune esp arduino SD_MMC lib)

