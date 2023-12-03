
#include "PlantControlChannel.h"
#include "PlantControlChannelGroup.h"

PlantControlChannel::PlantControlChannel(PlantControlChannelGroup &pcg, const char* name, uint8_t pinLED, uint8_t pinValve, uint8_t pinADC) :
 pcg(pcg),
 name(name),
 valveStatus(false),
 ledStatus(false),
 sensorStatus(50.0f),
 pinLED(pinLED),
 pinValve(pinValve),
 pinSensor(pinSensor)
{
    pcg.addChannel(*this);

    pinMode(pinLED, OUTPUT);
    pinMode(pinValve, OUTPUT);
}

PlantControlChannel::~PlantControlChannel()
{
}

float PlantControlChannel::getSensorValue()
{
    // float val = analogRead(pinSensor) / 65535.0f * 100.0f;  // as percent
    float val = (float)rand() / RAND_MAX * 100.0f;  // as percent
    
    return val;
}

void PlantControlChannel::process()
{

    pcg.json[name]["sensor"] = getSensorValue();
}

void PlantControlChannel::printConfig()
{
    printf("Channel: %s\n", name.c_str());
}
