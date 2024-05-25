#ifndef LCD_DISPLAY_H
#define LCD_DISPLAY_H

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include "Display.h"

class LCDDisplay : public Display {
private:
    LiquidCrystal_I2C lcd;

public:
    LCDDisplay() : lcd(0x27, 16, 2) {}

    void begin() override {
        lcd.init();
        lcd.backlight();
    }

    void printMessage(const char* message) override {
        lcd.setCursor(0, 0);
        lcd.print(message);
    }

    void printDistance(long distance) override {
        lcd.setCursor(0, 1);
        lcd.print("                ");  // Clear the previous value
        lcd.setCursor(0, 1);
        lcd.print(distance);
        lcd.print(" cm");
    }
};

#endif