## NFC library for Arduino

This is an Arduino library for NXP PN532 Near Field Communication chip.

### About this library
The code in this library is exactly the same as in SeeedStudio's [PN532 github repository](https://github.com/Seeed-Studio/PN532/tree/arduino). However this is not exactly a fork of the library. The reason that I create this repository is because SeeedStudio's library lack of proper library.properties setup and not able to install properly through Arduino IDE Library Manager or PlatformIO.

I'm currently not provide any supports for the library, you are therefore should seek for supports from the SeeedStudio's github, I'm merely re-package the files and add library.properties to make it easy to be installed through Arduino Library Manager and PlatformIO.

Another reason that I'm using this rather old library than more well supported PN532 library such as [Adafruit-PN532](https://github.com/adafruit/Adafruit-PN532) library is that I need it for working with an ESP8266 MCU and Adafruit's library uses IRQ and does not work well for ESP8266.
