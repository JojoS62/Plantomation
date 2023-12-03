#pragma once

#include "PlantControlChannel.h"
#include <vector>

class PlantControlChannel;

typedef std::vector<PlantControlChannel*> PlantControlChannelList;

class PlantControlChannelGroup
{
private:
    PlantControlChannelList pccList;                // list of attached channels

public:
    JsonDocument &json;                             // ref to parent json

public:
    PlantControlChannelGroup(JsonDocument &json);
    ~PlantControlChannelGroup();

    // add a channel to list
    void addChannel(PlantControlChannel &pch);

    // process all channels
    void processAll();

    // debug
    void printConfig();
};

