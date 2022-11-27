#include <Arduino.h>
#include"TFT_eSPI.h"
TFT_eSPI tft;


void setup() {
  // put your setup code here, to run once:
  tft.begin();
  tft.setRotation(3);
  tft.fillScreen(TFT_RED); // fills entire the screen with colour red  
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(2000);
  // Turning off the LCD backlight
  digitalWrite(LCD_BACKLIGHT, LOW);
  delay(2000);
  // Turning on the LCD backlight
  digitalWrite(LCD_BACKLIGHT, HIGH);

}