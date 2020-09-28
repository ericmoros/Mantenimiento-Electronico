#include <LedService.cpp>

static LedService ledService;

void setup()
{
}

// Add the main program code into the continuous loop() function
void loop()
{
    ledService.trafficLight();
}
