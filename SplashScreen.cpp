#include "M5StickCPlus2.h"

void showSplashScreen() {
    StickCP2.Display.clear(TFT_BLACK);
    StickCP2.Display.setTextColor(TFT_WHITE);
    StickCP2.Display.setCursor(0, 0); 
    StickCP2.Display.setFont(&fonts::Font2); 
    StickCP2.Display.setTextSize(2); 
    StickCP2.Display.setTextColor(TFT_PURPLE);
    StickCP2.Display.println("SoyKhaler");
    StickCP2.Display.println("Homebrew");
    StickCP2.Display.println("Firmware");
    
}

void setup() {
    auto cfg = M5.config(); 
    StickCP2.begin(cfg); 
    StickCP2.Display.setRotation(3);  
    showSplashScreen();
      
}

void loop()
{
  //empty at this moment
}