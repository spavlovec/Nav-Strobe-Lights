//##########################################################
//
// Quad Copter Nav/Strobe lights Neo Pixel Ring
// --------------------------------------------------------
// Created by Scott Pavlovec 
// v1.0 November, 25th 2013
//
// GPL License - Free to distrubite or modify
//#########################################################

#include <Adafruit_NeoPixel.h>
#define PIN 6

// Parameter 1 = number of pixels in strip
// Parameter 2 = pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)

Adafruit_NeoPixel strip = Adafruit_NeoPixel(16, 12, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}

void loop() {  
//Right  - Green, Always On
  strip.setPixelColor(3, 0, 255, 0);
  strip.setPixelColor(4, 0, 255, 0);
  strip.setPixelColor(5, 0, 255, 0);
  strip.setPixelColor(6, 0, 255, 0);
  strip.setPixelColor(7, 0, 255, 0);
//Left - Red, Always On
  strip.setPixelColor(11, 255, 0, 0); 
  strip.setPixelColor(12, 255, 0, 0);  
  strip.setPixelColor(13, 255, 0, 0);
  strip.setPixelColor(14, 255, 0, 0);
  strip.setPixelColor(15, 255, 0, 0);
  strip.show();

//BEGIN 3Pixel FRONT + 3Pixel BACK Strobe 

//Front
  strip.setPixelColor(0, 255, 255, 255);
  strip.setPixelColor(1, 255, 255, 255);
  strip.setPixelColor(2, 255, 255, 255);
//Back  
  strip.setPixelColor(8, 255, 255, 255);
  strip.setPixelColor(9, 255, 255, 255);
  strip.setPixelColor(10, 255, 255, 255);
  strip.show();
  delay(50);
//Front
  strip.setPixelColor(0, 0, 0, 0);
  strip.setPixelColor(1, 0, 0, 0);
  strip.setPixelColor(2, 0, 0, 0);
//Back  
  strip.setPixelColor(8, 0, 0, 0);
  strip.setPixelColor(9, 0, 0, 0);
  strip.setPixelColor(10, 0, 0, 0);
  strip.show();
  delay(50);
//Front
  strip.setPixelColor(0, 255, 255, 255);
  strip.setPixelColor(1, 255, 255, 255);
  strip.setPixelColor(2, 255, 255, 255);
//Back  
  strip.setPixelColor(8, 255, 255, 255);
  strip.setPixelColor(9, 255, 255, 255);
  strip.setPixelColor(10, 255, 255, 255);
  strip.show();
  delay(50);
//Front
  strip.setPixelColor(0, 0, 0, 0);
  strip.setPixelColor(1, 0, 0, 0);
  strip.setPixelColor(2, 0, 0, 0);
//Back  
  strip.setPixelColor(8, 0, 0, 0);
  strip.setPixelColor(9, 0, 0, 0);
  strip.setPixelColor(10, 0, 0, 0);
  strip.show();
  delay(1000);
}

