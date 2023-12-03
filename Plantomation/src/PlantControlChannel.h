#pragma once

#include <Arduino.h>
#include <string>

class PlantControlChannelGroup;     // forward declaraction to avoid circular reference

class PlantControlChannel
{
private:
    PlantControlChannelGroup &pcg;
    std::string name;

public:
    PlantControlChannel(PlantControlChannelGroup &pcg, const char* name);
    ~PlantControlChannel();

    // debug
    void printConfig();
};

