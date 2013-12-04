//##########################################################
//
// Quad Copter Nav/Strobe lights Using Adafruit NeoPixels
// --------------------------------------------------------
// Created by Scott Pavlovec 
// v1.0 November, 25th 2013
//
// GPL License - Free to distrubite or modify
//#########################################################

#include <Adafruit_NeoPixel.h>
#define PIN 12

// Parameter 1 = number of pixels in strip
// Parameter 2 = pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)

Adafruit_NeoPixel strip = Adafruit_NeoPixel(4, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}

void loop() {
//Set Nav lights - Red/Green
  strip.setPixelColor(0, 0, 255, 0);
  strip.setPixelColor(1, 0, 255, 0);
  strip.setPixelColor(2, 255, 0, 0);
  strip.setPixelColor(3, 255, 0, 0);
  strip.show();
  delay(75);
//Flash Strobe - All White
  strip.setPixelColor(0, 255, 255, 255);
  strip.setPixelColor(1, 255, 255, 255);
  strip.setPixelColor(2, 255, 255, 255);
  strip.setPixelColor(3, 255, 255, 255);
  strip.show();
  delay(75);
//Set Nav lights - Red/Green
  strip.setPixelColor(0, 0, 255, 0);
  strip.setPixelColor(1, 0, 255, 0);
  strip.setPixelColor(2, 255, 0, 0);
  strip.setPixelColor(3, 255, 0, 0);
  strip.show();
  delay(75);
//Flash Strobe - All White
  strip.setPixelColor(0, 255, 255, 255);
  strip.setPixelColor(1, 255, 255, 255);
  strip.setPixelColor(2, 255, 255, 255);
  strip.setPixelColor(3, 255, 255, 255);
  strip.show();
//Set Nav lights - Red/Green
  delay(75);
  strip.setPixelColor(0, 0, 255, 0);
  strip.setPixelColor(1, 0, 255, 0);
  strip.setPixelColor(2, 255, 0, 0);
  strip.setPixelColor(3, 255, 0, 0);
  strip.show();
//HOLD NAV Lights for 1 second
  delay(1000);
}
