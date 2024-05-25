#ifndef SENSOR_H
#define SENSOR_H

class Sensor {
public:
    virtual void begin() = 0;
    virtual long readDistance() = 0;
};

#endif