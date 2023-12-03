#pragma once

#include <Arduino.h>
#include <ArduinoJson.h>
#include <string>

class PlantControlChannelGroup;     // forward declaraction to avoid circular reference

class PlantControlChannel
{
private:
    PlantControlChannelGroup &pcg;
    std::string name;
    bool valveStatus;
    bool ledStatus;
    float sensorStatus;
    uint8_t pinLED;
    uint8_t pinValve;
    uint8_t pinSensor;
    
public:
    PlantControlChannel(PlantControlChannelGroup &pcg, const char* name, uint8_t pinLED, uint8_t pinValve, uint8_t pinADC);
    ~PlantControlChannel();

    // return sensor value as percent
    float getSensorValue();

    // process in/out
    void process();

    // debug, print state
    void printConfig();
};

