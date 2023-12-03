
#include "PlantControlChannel.h"
#include "PlantControlChannelGroup.h"

PlantControlChannel::PlantControlChannel(PlantControlChannelGroup &pcg, const char* name) :
 pcg(pcg),
 name(name),
 valveStatus(false),
 ledStatus(false),
 sensorStatus(50.0f)
{
    pcg.addChannel(*this);
}

PlantControlChannel::~PlantControlChannel()
{
}

void PlantControlChannel::printConfig()
{
    printf("Channel: %s\n", name.c_str());
}
