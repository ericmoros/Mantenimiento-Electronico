#include "Arduino.h"

#include <TypeDefs.cpp>

class ButtonService
{
private:
	static const int BUTTON_A = 12;
	static const int BUTTON_B = 8;
	static const int BUTTON_C = 7;
	static const int BUTTON_D = 4;
	static const int LED_READY = 6;

	TypeDefs::StoredFunction StoredFunction_BUTTON_A;
	TypeDefs::StoredFunction StoredFunction_BUTTON_B;
	TypeDefs::StoredFunction StoredFunction_BUTTON_C;
	TypeDefs::StoredFunction StoredFunction_BUTTON_D;

	void EndOfProgramConfirmation()
	{
		digitalWrite(LED_READY, HIGH);
		delay(250);
		digitalWrite(LED_READY, LOW);
	}

public:
	void ReadAll()
	{
		if (digitalRead(BUTTON_A) == HIGH)
		{
			Serial.println("BUTTON_A: Pressed");
			StoredFunction_BUTTON_A();
			EndOfProgramConfirmation();
		}
		if (digitalRead(BUTTON_B) == HIGH)
		{
			Serial.println("BUTTON_B: Pressed");
			StoredFunction_BUTTON_B();
			EndOfProgramConfirmation();
		}
		if (digitalRead(BUTTON_C) == HIGH)
		{
			Serial.println("BUTTON_C: Pressed");
			StoredFunction_BUTTON_C();
			EndOfProgramConfirmation();
		}
		if (digitalRead(BUTTON_D) == HIGH)
		{
			Serial.println("BUTTON_D: Pressed");
			StoredFunction_BUTTON_D();
			EndOfProgramConfirmation();
		}
	}

	void OnButtonAPressed(TypeDefs::StoredFunction StoredFunction) {
		StoredFunction_BUTTON_A = StoredFunction;
	}

	void OnButtonBPressed(TypeDefs::StoredFunction StoredFunction) {
		StoredFunction_BUTTON_B = StoredFunction;
	}

	void OnButtonCPressed(TypeDefs::StoredFunction StoredFunction) {
		StoredFunction_BUTTON_C = StoredFunction;
	}

	void OnButtonDPressed(TypeDefs::StoredFunction StoredFunction) {
		StoredFunction_BUTTON_D = StoredFunction;
	}
};
