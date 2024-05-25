#ifndef DISPLAY_FACTORY_H
#define DISPLAY_FACTORY_H

#include "Display.h"
#include "LCDDisplay.h"

enum DisplayType {
    LCD_DISPLAY
};

class DisplayFactory {
public:
    static Display* createDisplay(DisplayType type) {
        switch (type) {
            case LCD_DISPLAY:
                return new LCDDisplay();
            default:
                return nullptr;
        }
    }
};

#endif