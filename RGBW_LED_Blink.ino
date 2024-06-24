#include <Adafruit_NeoPixel.h>

// Define the pin that the LED strip is connected to
#define LED_PIN 14

// Define the number of LEDs in the strip
#define NUM_LEDS 1

// Create a NeoPixel object
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, LED_PIN, NEO_GRBW + NEO_KHZ800);

void setup() {
  // Initialize the NeoPixel library
  strip.begin();
  // Turn off all pixels
  strip.show();
}

void loop() {
  // Example: Set all LEDs to red
  setColor(strip.Color(255, 0, 0, 0));  // Red, Green, Blue, White

  delay(1000);

  // Example: Set all LEDs to green
  setColor(strip.Color(0, 255, 0, 0));  // Red, Green, Blue, White

  delay(1000);

  // Example: Set all LEDs to blue
  setColor(strip.Color(0, 0, 255, 0));  // Red, Green, Blue, White

  delay(1000);

  // Example: Set all LEDs to white
  setColor(strip.Color(0, 0, 0, 128));  // Red, Green, Blue, White

  delay(3000);

  // Example: Set all LEDs to a mixture of colors (white-ish light)
  setColor(strip.Color(128, 128, 128, 128));  // Red, Green, Blue, White

  delay(1000);
}

void setColor(uint32_t color) {
  for (int i = 0; i < NUM_LEDS; i++) {
    strip.setPixelColor(i, color);
  }
  strip.show();
}
