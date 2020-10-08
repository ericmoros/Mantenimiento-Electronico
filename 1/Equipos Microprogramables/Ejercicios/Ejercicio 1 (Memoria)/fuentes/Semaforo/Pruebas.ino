#include <LedService.cpp>
#include <ButtonService.cpp>

static LedService ledService;
static ButtonService buttonService;
static const int milliseconds = 100;


void setup()
{
    ledService.configure();
    TypeDefs::StoredFunction blink = [] {
        ledService.blink();
    };
    TypeDefs::StoredFunction trafficLight = [] {
        ledService.trafficLight();
    };

    buttonService.OnButtonAPressed(blink);
    buttonService.OnButtonBPressed(trafficLight);
}

// Add the main program code into the continuous loop() function
void loop()
{
    //ledService.blink();
    buttonService.ReadAll();
    delay(milliseconds);
}
