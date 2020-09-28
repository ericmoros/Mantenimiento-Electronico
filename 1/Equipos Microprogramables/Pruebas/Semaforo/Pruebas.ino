// Visual Micro is in vMicro>General>Tutorial Mode
// 
/*
    Name:       Pruebas.ino
    Created:	25/09/2020 20:09:31
    Author:     HIBERUS\emoros
*/

// Define User Types below here or use a .h file
//


// Define Function Prototypes that use User Types below here or use a .h file
//


// Define Functions below here or use other .ino or cpp files
//

// The setup() function runs once each time the micro-controller starts
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
