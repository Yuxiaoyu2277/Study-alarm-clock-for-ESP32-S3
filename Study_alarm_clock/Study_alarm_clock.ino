#include "SPI.h"
#include <TFT_eSPI.h>       // Hardware-specific library
TFT_eSPI tft = TFT_eSPI();  // Invoke custom library
const int BL1 = 16;
const int BL2 = 17;
const int BL3 = 18;
const int LRA_PWR = 9;


void setup() {
  Serial.begin(115200);
  Serial.println("\n\n Using the PNGdec library");
  pinMode(BL1, OUTPUT);
  pinMode(BL2, OUTPUT);
  pinMode(BL3, OUTPUT);
  pinMode(LRA_PWR, OUTPUT);
  int brightness = 255;

  analogWrite(BL1, brightness);      // 控制BL1的亮度
  analogWrite(BL2, brightness);      // 控制BL2的亮度
  analogWrite(BL3, brightness);      // 控制BL3的亮度
  analogWrite(LRA_PWR, 0);  // 控制BL3的亮度
  tft.begin();
  tft.fillScreen(TFT_BLACK);

  Serial.println("\r\nInitialisation done.");
}

void loop() {
  
}


