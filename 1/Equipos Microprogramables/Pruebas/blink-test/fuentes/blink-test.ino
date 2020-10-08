class LedService {
private:
  static const int LED_PIN = 13;

  static const int TRAFFICLIGHT_RED_LED_PIN = 14;
  static const int TRAFFICLIGHT_ORANGE_LED_PIN = 15;
  static const int TRAFFICLIGHT_GREEN_PIN = 16;

  const int trafficlightArray[3] = { TRAFFICLIGHT_ORANGE_LED_PIN, TRAFFICLIGHT_RED_LED_PIN, TRAFFICLIGHT_GREEN_PIN };
  int trafficlightIndex = 0;

  void trafficlightSwitch()
  {
    int currentLigth = trafficlightArray[trafficlightIndex];
    digitalWrite(currentLigth, LOW);
    if (sizeof(trafficlightArray) > trafficlightIndex) trafficlightIndex++;
    else trafficlightIndex = 0;
    currentLigth = trafficlightArray[trafficlightIndex];
    digitalWrite(currentLigth, HIGH);
  }

public:

  /*
  * Makes blink a led
  *
  * @param milliseconds: By default sets to 1000
  */
  void blink(int milliseconds = 1000)
  {
    delay(milliseconds);
    digitalWrite(LED_PIN, LOW);
    delay(milliseconds);
    digitalWrite(LED_PIN, HIGH);
  }

  /*
    * Emits a the trafficsligth secuence.
    *
    * @param milliseconds: By default sets to 1000
    */
  void trafficLight(int milliseconds = 1000)
  {
    trafficlightSwitch();
    delay(milliseconds);
    trafficlightSwitch();
    delay(milliseconds);
    trafficlightSwitch();
    delay(milliseconds);
  }
};

static LedService ledService;

void setup()
{
}

// Add the main program code into the continuous loop() function
void loop()
{
    ledService.trafficLight();
}
