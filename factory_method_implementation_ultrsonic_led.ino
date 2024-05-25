#include "SensorFactory.h"
#include "DisplayFactory.h"

Sensor* sensor;
Display* display;

void setup() {
    Serial.begin(9600);

    // Create the sensor and display using the factories
    sensor = SensorFactory::createSensor(ULTRASONIC_SENSOR);
    display = DisplayFactory::createDisplay(LCD_DISPLAY);

    // Initialize the sensor and display
    if (sensor != nullptr) {
        sensor->begin();
    } else {
        Serial.println("Failed to create sensor");
    }

    if (display != nullptr) {
        display->begin();
        display->printMessage("Distance:");
    } else {
        Serial.println("Failed to create display");
    }
}

void loop() {
    if (sensor != nullptr && display != nullptr) {
        // Read sensor values
        long distance = sensor->readDistance();

        // Display the distance on the LCD
        display->printDistance(distance);

        delay(500);  // Wait for 0.5 seconds before the next reading
    }
}