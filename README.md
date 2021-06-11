[![Build Status](https://travis-ci.com/vi7/arduino-hardware-test.svg?branch=master)](https://travis-ci.com/vi7/arduino-hardware-test)

Hardware test with Arduino framework
====================================

'Blink-style' project for various kinds of boards, microcontrollers and other hardware testing. Based on the Arduino framework and its ports for the corresponding platforms.

Check [platformio.ini](platformio.ini) for the full list of supported platforms/boards.

Requirements
------------

[PlatformIO](https://docs.platformio.org/en/latest/what-is-platformio.html)


Usage
-----

Upload the code and verify that:
* Built-in LED blinks with the pattern: ON -> 2s delay -> OFF -> 4s delay
* LED state messages are printed to the Serial Monitor

If the above is true it will mean that board passed basic test
