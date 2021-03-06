#include <Arduino.h>
#include <Keypad.h>

char hexaKeys[][4] = {
  {'0','1','2','B'},
  {'3','4','5','6'},
  {'E','Z','0','Z'},
  {'9','8','7','R'}
};

byte rowPins[] = {11, 10, 9, 8}; //connect to the row pinouts of the keypad
byte colPins[] = {7, 6, 5, 4}; //connect to the column pinouts of the keypad

//initialize an instance of class NewKeypad
Keypad keypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, 4, 4);

void setup() {
  Serial.begin(9600);
}

void loop() {
  char key = keypad.getKey();
  if (key){
    Serial.print(key);
  }
}
