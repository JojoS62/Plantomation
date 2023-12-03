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

public:
    PlantControlChannel(PlantControlChannelGroup &pcg, const char* name);
    ~PlantControlChannel();

    // debug, print state
    void printConfig();
};

