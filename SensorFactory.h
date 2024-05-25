#ifndef SENSOR_FACTORY_H
#define SENSOR_FACTORY_H

#include "Sensor.h"
#include "UltrasonicSensor.h"

enum SensorType {
    ULTRASONIC_SENSOR
};

class SensorFactory {
public:
    static Sensor* createSensor(SensorType type) {
        switch (type) {
            case ULTRASONIC_SENSOR:
                return new UltrasonicSensor();
            default:
                return nullptr;
        }
    }
};

#endif