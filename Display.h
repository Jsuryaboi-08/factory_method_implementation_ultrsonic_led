#ifndef DISPLAY_H
#define DISPLAY_H

class Display {
public:
    virtual void begin() = 0;
    virtual void printMessage(const char* message) = 0;
    virtual void printDistance(long distance) = 0;
};

#endif