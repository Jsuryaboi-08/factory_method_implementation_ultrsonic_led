#ifndef ULTRASONIC_SENSOR_H
#define ULTRASONIC_SENSOR_H

#include "Sensor.h"

const int trigPin = 9;
const int echoPin = 10;

class UltrasonicSensor : public Sensor {
public:
    void begin() override {
        pinMode(trigPin, OUTPUT);
        pinMode(echoPin, INPUT);
    }

    long readDistance() override {
        digitalWrite(trigPin, LOW);
        delayMicroseconds(2);
        digitalWrite(trigPin, HIGH);
        delayMicroseconds(10);
        digitalWrite(trigPin, LOW);

        long duration = pulseIn(echoPin, HIGH);
        long distance = duration * 0.034 / 2;

        return distance;
    }
};

#endif