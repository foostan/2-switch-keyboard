#include "Keyboard.h"

int L_KEY = 3;
int R_KEY = 2;
int L_LED = 10;
int R_LED = 9;

void setup()
{
    pinMode(L_KEY, INPUT_PULLUP);
    pinMode(R_KEY, INPUT_PULLUP);
    pinMode(L_LED, OUTPUT);
    pinMode(R_LED, OUTPUT);
    Keyboard.begin();
}

void loop()
{
    delay(100);

    if (digitalRead(L_KEY) == HIGH) {
        digitalWrite(L_LED, LOW);
    } else {
        digitalWrite(L_LED, HIGH);
        Serial.print('E');
        Keyboard.press(KEY_ESC);
    }
    if (digitalRead(R_KEY) == HIGH) {
        digitalWrite(R_LED, LOW);
        digitalWrite(R_LED, LOW);
    } else {
        digitalWrite(R_LED, HIGH);
        Serial.print('i');
        Keyboard.press('i');
    }
    Keyboard.releaseAll();
}
