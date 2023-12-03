#include "PlantControlChannelGroup.h"

PlantControlChannelGroup::PlantControlChannelGroup(JsonDocument &json) :
    json(json)
{
}

PlantControlChannelGroup::~PlantControlChannelGroup()
{
}

void PlantControlChannelGroup::addChannel(PlantControlChannel &pch)
{
    pccList.push_back(&pch);
}

void PlantControlChannelGroup::processAll()
{
    for (PlantControlChannel *pch : pccList) {
        pch->process();
    }

    serializeJson(json, Serial);
    printf("\n");
}

void PlantControlChannelGroup::printConfig()
{
    for (PlantControlChannel *pch : pccList) {
        pch->printConfig();
    }
}
