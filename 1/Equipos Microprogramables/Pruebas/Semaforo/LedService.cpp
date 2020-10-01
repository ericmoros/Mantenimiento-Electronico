#include "Arduino.h"

class LedService {
private:
	static const int LED_PIN = 9;

	static const int TRAFFICLIGHT_RED_LED_PIN = 11;
	static const int TRAFFICLIGHT_ORANGE_LED_PIN = 10;
	static const int TRAFFICLIGHT_GREEN_PIN = 9;

	const int trafficlightArray[3] = { TRAFFICLIGHT_ORANGE_LED_PIN, TRAFFICLIGHT_RED_LED_PIN, TRAFFICLIGHT_GREEN_PIN };
	unsigned int trafficlightIndex = 0;

	void trafficlightSwitch(int milliseconds = 300)
	{
		int currentLigth = trafficlightArray[trafficlightIndex];
		Serial.println(currentLigth);
		digitalWrite(currentLigth, HIGH);
		delay(milliseconds);
		digitalWrite(currentLigth, LOW);
		if (sizeof(trafficlightArray) > trafficlightIndex) trafficlightIndex = trafficlightIndex + 1;
		else trafficlightIndex = 0;
	}

public:

	void configure()
	{
		pinMode(LED_PIN, OUTPUT);
		pinMode(TRAFFICLIGHT_RED_LED_PIN, OUTPUT);
		pinMode(TRAFFICLIGHT_ORANGE_LED_PIN, OUTPUT);
		pinMode(TRAFFICLIGHT_GREEN_PIN, OUTPUT);
	}
	/*
	* Makes blink a led
	*
	* @param milliseconds: By default sets to 1000
	*/
	void blink(int milliseconds = 1000)
	{
		digitalWrite(LED_PIN, HIGH);
		delay(milliseconds);
		digitalWrite(LED_PIN, LOW);
		delay(milliseconds);
	}

	/*
		* Emits a the trafficsligth secuence.
		*
		* @param milliseconds: By default sets to 1000
		*/
	void trafficLight(int milliseconds = 1000)
	{
		trafficlightSwitch();
		trafficlightSwitch();
		trafficlightSwitch();
	}
};