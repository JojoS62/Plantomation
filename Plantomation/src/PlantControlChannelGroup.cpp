#include "PlantControlChannelGroup.h"

PlantControlChannelGroup::PlantControlChannelGroup(/* args */)
{
}

PlantControlChannelGroup::~PlantControlChannelGroup()
{
}

void PlantControlChannelGroup::addChannel(PlantControlChannel &pch)
{
    pccList.push_back(&pch);
}

void PlantControlChannelGroup::printConfig()
{
    for (PlantControlChannel *pch : pccList) {
        pch->printConfig();
    }
}
