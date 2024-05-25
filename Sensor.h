#ifndef SENSOR_H
#define SENSOR_H

class Sensor {
public:
    virtual void begin() = 0;
    virtual void display() = 0;
    
};

#endif