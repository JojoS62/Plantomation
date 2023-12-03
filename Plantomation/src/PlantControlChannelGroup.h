#pragma once

#include "PlantControlChannel.h"
#include <vector>

class PlantControlChannel;

typedef std::vector<PlantControlChannel*> PlantControlChannelList;

class PlantControlChannelGroup
{
private:
    PlantControlChannelList pccList;

public:
    PlantControlChannelGroup(/* args */);
    ~PlantControlChannelGroup();

    void addChannel(PlantControlChannel &pch);

    // debug
    void printConfig();
};

